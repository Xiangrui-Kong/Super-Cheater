class AlcoholException extends Exception{
    String message;
    AlcoholException(int n){
        message="血液酒精含量"+n+"mg/100ml，构成酒驾！";
    }

    public String toString(){
        return message;
    }
}

class Check{
    private int nn=0;
    void drunkDriving(int nn) throws AlcoholException{
        if (nn>=20) {
            throw new AlcoholException(nn);
        } else {
            this.nn=nn;
        }
    }

 String getnum(){
    return "血液酒精含量"+nn+"mg/100ml，不构成酒驾。";
    }
  
}

public class App {
    public static void main(String[] args) throws Exception {
        Check p1=new Check();
        Check p2=new Check();
        try {
            p1.drunkDriving(10);
            System.out.println(p1.getnum());
        } catch (AlcoholException e) {
           System.out.println(e.toString());
        }

        try {
            p2.drunkDriving(30);
            System.out.println(p1.getnum());
        } catch (AlcoholException e) {
           System.out.println(e.toString());
        }
    }
}

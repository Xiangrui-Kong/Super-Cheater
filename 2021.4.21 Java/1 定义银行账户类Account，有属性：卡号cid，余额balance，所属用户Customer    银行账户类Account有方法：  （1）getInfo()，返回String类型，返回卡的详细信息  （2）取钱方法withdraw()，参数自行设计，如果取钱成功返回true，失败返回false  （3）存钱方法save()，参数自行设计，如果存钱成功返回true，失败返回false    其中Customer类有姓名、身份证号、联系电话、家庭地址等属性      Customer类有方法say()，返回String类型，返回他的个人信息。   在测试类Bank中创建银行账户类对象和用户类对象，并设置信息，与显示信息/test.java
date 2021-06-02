class Bank{

    static class Account{
        String cid,Customer="";
        float balance=0;
        void set(String a,String b,float c){
            cid=a;
            Customer=b;
            balance=c;
        }

        void getInfo(){
             System.out.println("卡号:"+cid);
             System.out.println("余额:"+balance);
             System.out.println("所属用户:"+Customer);
        }

        void save(float d){
            if (d>0) {
                balance=balance+d;
                System.out.println("true");
            } else {
                System.out.println("false");
            }
        }

        void withdraw(float f){
            if (f<=balance && f>0) {
                balance=balance-f;
                System.out.println("true");
            } else {
                System.out.println("false");
            }
        }

    }

    static class Customer{
        String name,id,phoneNUM,ADD="";

        void set(String a,String b,String c,String d){
            name=a;
            id=b;
            phoneNUM=c;
            ADD=d;
        }


        void say(){
            System.out.println("姓名:"+name);
            System.out.println("身份证号:"+id);
            System.out.println("电话号码:"+phoneNUM);
            System.out.println("住址:"+ADD);
        }


    }
}


public class test {

    public static void main(String[] args) {
        Bank test=new Bank();
        Bank.Account Ac1=new Bank.Account();
        Bank.Customer c1=new Bank.Customer();

        Ac1.set("123456789", "c1客户", 1500);
        c1.set("张三", "110108123456789", "189123456789", "北京市海淀区西三旗街道xxxxxx");

        Ac1.getInfo();
        c1.say();
        Ac1.save(100);
        Ac1.getInfo();
        Ac1.withdraw(1000);
        Ac1.getInfo();
    }
}

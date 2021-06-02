public class GoodsExc extends Exception{
    String message;
    public GoodsExc(String name){
        message="物品"+name+"禁止邮寄!";
    }

    public String toString(){
       return message;
    }

}

public class Goods {
    int num;
    String name;
    boolean V;
    public void setGoods(String name,int num) throws GoodsExc{
        if (name.equals("刀具") || name.equals("炸药") || name.equals("非法刊物")) {
            V=true;
            this.num=num;
            this.name=name;
            throw new GoodsExc(name);
        } else {
            V=false;
            this.num=num;
            this.name=name;
        }
    }
    public void getinfo(){

        System.out.println("Num="+num);
        System.out.println("Name="+name);
        if (V==true) {
            System.out.println("危险物品!");
        } else if (V==false){
            System.out.println("非危险物品!");
        }
        System.out.println("========================================");
    }
}

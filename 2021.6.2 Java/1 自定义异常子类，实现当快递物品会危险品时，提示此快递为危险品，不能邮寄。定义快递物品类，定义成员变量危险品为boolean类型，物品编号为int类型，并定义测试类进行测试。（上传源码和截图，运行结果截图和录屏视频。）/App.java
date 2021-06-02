public class App {
    public static void main(String[] args)  {
        Goods a=new Goods();
        Goods b=new Goods();
        try {
            a.setGoods("刀具", 1);
        } catch (Exception e) {
            System.out.println(e.toString());
        }
        finally{
            a.getinfo();
        }
        try {
            b.setGoods("书籍", 2);
        } catch (Exception e) {
            System.out.println(e.toString());
        }
        finally{
            b.getinfo();
        }
    }
}

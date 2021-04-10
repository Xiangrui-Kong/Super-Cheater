/**
 * Book
 */
public class Book {

    public void book1(){
        String num="001";
        String name="十万个为什么";
        System.out.println(num+name);
    }

    public void book2(){
        String num="002";
        String name="泰戈尔诗集";
        System.out.println(num+name);
    }

    public void book3(){
        String num="003";
        String name="微积分的力量";
        System.out.println(num+name);
    }

    public Book(){
        book1();
        book2();
        book3();
    }

    public static void main(String[] args) {
        Book test=new Book();
    }
}



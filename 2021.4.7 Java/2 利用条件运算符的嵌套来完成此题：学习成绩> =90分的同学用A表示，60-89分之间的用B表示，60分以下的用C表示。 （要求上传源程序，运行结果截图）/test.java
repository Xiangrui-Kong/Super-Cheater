import java.util.Scanner;

/**
 * test
 */
public class test {

    public static void main(String[] args) {
        Scanner x=new Scanner(System.in);
        int a;
        System.out.println("请输入成绩:");
        a=x.nextInt();
        if (a>=90) {
            System.out.println("A");
        } else {
            if (a>=60 && a<=89) {
                System.out.println("B");
            } else if (a>=0 && a<60) {
                System.out.println("C");
            }
        }
       
       



    }
}

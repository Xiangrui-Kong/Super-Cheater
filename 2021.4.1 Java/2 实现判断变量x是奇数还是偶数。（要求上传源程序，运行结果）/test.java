import java.util.Scanner;

/**
 * test
 */
public class test {

    public static void main(String[] args) {
        Scanner x=new Scanner(System.in);
        int a;
        a=x.nextInt();
        if (a%2==0) {
            System.out.println("偶数");
        } else {
            System.out.println("奇数");
        }
       
    }
}

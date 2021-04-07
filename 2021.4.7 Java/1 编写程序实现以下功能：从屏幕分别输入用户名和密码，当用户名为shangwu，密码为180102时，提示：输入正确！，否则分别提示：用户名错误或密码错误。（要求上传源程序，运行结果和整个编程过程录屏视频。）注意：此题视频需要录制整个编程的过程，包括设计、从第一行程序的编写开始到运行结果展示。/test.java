import java.util.Scanner;

/**
 * test
 */
public class test {

    public static void main(String[] args) {
        Scanner x=new Scanner(System.in);
        String a,b;
        System.out.println("请输入账号:");
        a=x.nextLine();
        System.out.println("请输入密码:");
        b=x.nextLine();
        if (a.equals("shangwu") && b.equals("180102")) {
            System.out.println("输入正确");
        } else {
            System.out.println("输入错误");
        }



    }
}

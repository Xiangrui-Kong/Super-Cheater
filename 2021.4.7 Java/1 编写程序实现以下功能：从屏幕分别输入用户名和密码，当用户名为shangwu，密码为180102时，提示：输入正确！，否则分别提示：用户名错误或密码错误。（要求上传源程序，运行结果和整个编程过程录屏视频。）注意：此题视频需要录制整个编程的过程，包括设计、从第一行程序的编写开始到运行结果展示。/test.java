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
            System.out.println("全部输入正确！");
        } else {
             if (!a.equals("shangwu") && b.equals("180102")) {
                System.out.println("账号输入错误！");
             } else {
                if (a.equals("shangwu") && !b.equals("180102")) {
                    System.out.println("密码输入错误！");
                } else {
                    System.out.println("全部输入错误！");
                }
             }
        }
        


    }
}

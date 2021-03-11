/**
 * Meiju
 */
import java.util.Scanner;
enum RealMadird {Modric,Benzema,Kross,Ramos,Casemiro}
public class Meiju {

    public static void main(String[] args) {
        Scanner reader=new Scanner(System.in);
        RealMadird c=null;
        int x=reader.nextInt();
        while (x!=0) {
        if(x==1)
            c=RealMadird.Modric;
            System.out.println("对应的是"+c);
            x=reader.nextInt();
        if(x==2)
            c=RealMadird.Benzema;
            System.out.println("对应的是"+c);
            x=reader.nextInt();
        if(x==3)
            c=RealMadird.Kross;
            System.out.println("对应的是"+c);
            x=reader.nextInt();
        if(x==4)
            c=RealMadird.Ramos;
            System.out.println("对应的是"+c);
            x=reader.nextInt();
        if(x==5)
            c=RealMadird.Casemiro;
            System.out.println("对应的是"+c);
            x=reader.nextInt();
        }
        System.out.println("Break!!!");
    
    }
}

import java.util.Scanner;

/**
 * test
 */
public class test {

    public static void main(String[] args) {
        float a[]=new float[21];
        float b[]=new float[21];
        a[0]=1;
        a[1]=2;
        b[0]=1;
        b[1]=1;
       for(int i=2;i<21;i++)
       {
        a[i]=a[i-2]+a[i-1];
        b[i]=b[i-2]+b[i-1];
       }
       float sum=0;
       for(int i=1;i<21;i++)
       {
        sum=sum+a[i]/b[i];
       }
       System.out.println(sum);
    }
}

/**
 * test
 */
public class test {

    public static void main(String[] args) {
        String[] arr=new String[]{"a","aa","aaa","aaaa"};
        for(int i=0;i<4;i++)
        {
            System.out.println(arr[i]);
        }
        arr[2]="bb";
        for(int i=0;i<4;i++)
        {
            System.out.println(arr[i]);
        }
    }
}

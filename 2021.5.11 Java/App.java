class base{
    public int a;
    base(){
        a=100;                    // 第二问  父类构造方法初始化a
    }
    public void a(){
        System.out.println("这是父类！");
    }

 }
 class sub extends base{
    int a;                          // 第一问 同名变量a
    int f(){                        // 第一问 访问父类成员变量a
     return super.a;
     }

    public void a(){               // 第三问  调用父类同名方法
        super.a();
    }

 }
public class App {
    public static void main(String[] args) {
        sub test=new sub();          // 第二问 实例化时同时调用子类和父类的构造方法
        System.out.println(test.f());  // 第一问 访问父类成员变量a
        test.a();                  // 第三问  调用父类同名方法

    }   
}   
    


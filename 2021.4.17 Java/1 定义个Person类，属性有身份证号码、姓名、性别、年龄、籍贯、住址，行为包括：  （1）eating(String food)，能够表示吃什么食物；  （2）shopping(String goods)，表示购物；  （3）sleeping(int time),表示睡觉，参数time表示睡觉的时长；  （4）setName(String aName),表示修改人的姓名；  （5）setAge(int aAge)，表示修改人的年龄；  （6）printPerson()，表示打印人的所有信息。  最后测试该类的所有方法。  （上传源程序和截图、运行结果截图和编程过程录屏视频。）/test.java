/**
 * Person
 */

class Person{
    int ID=123456789;
    String name="张三";
    String sex="男";
    int age=18;
    String live="北京市海淀区";
    String living="北京市海淀区西三旗街道xxxxxxxxxx";
    String Pfood="";
    String Pgoods="";
    int Ptime=0;



    void eating(String food){
        Pfood=food;
    }

    void shopping(String goods){
        Pgoods=goods;
    }

    void sleeping(int time){
        Ptime=time;
    }

    void setName(String aName){
        name=aName;
    }

    void setAge(int aAge){
        age=aAge;
    }

    void printPerson(){
        System.out.println("身份证号码:"+ID);
        System.out.println("姓名:"+name);
        System.out.println("性别:"+sex);
        System.out.println("年龄:"+age);
        System.out.println("籍贯:"+live);
        System.out.println("住址:"+living);
        System.out.println("食物:"+Pfood);
        System.out.println("购物:"+Pgoods);
        System.out.println("睡觉时长:"+Ptime);
      
    }
}
    /**
     * test
     */
    public class test {
        public static void main(String[] args) {
            Person test=new Person();
            test.eating("苹果");
            test.shopping("笔记本电脑");
            test.sleeping(8);
            test.setName("李四");
            test.setAge(28);
            test.printPerson();
        
        }
        
    }


class People {
    public double x;
    public void setX(double x){
        this.x=x;
    }
    public double getDoublex(){
    return x;
    }
}
    class Student extends People {
    int x;
    public int getX(){
    //x=20.56; //非法，因为子类的x已经是int型，不是double型
    return x;
    }
}

    public class Example5_3 {
    public static void main(String args[]){
    Student stu = new Student();//合法，子类对象的x是int型
    stu.x= 98;
    System.out.println("对象stu的x的值是："+stu.getX());
    //stu.x=98.98;   //非法，因为子类对象的x已经是int型
    stu.setX(98.98);//子类对象调用继承的方法操作隐藏的double型变量x
    double m= stu.getDoublex();//子类对象调用继承的方法操作隐藏的double型变量x
    System.out.println("对象stu隐藏的x的值是:"+m);
     }
}

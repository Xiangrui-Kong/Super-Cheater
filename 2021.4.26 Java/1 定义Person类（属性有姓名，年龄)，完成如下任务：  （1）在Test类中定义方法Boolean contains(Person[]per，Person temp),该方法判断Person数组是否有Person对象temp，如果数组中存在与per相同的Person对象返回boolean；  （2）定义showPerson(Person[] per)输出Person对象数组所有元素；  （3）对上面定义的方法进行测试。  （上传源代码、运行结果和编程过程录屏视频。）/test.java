class Person {
    String name;
    int age;
    
    Person(String a, int b){
        name=a;
        age=b;
    }
    
}
class CCC{
    Boolean contains(Person[]per,Person temp){
        for (int i = 0; i < 4; i++) {
            if (per[i].name.equals(temp.name) && per[i].age==temp.age) {
                return true;
            }
        }


        return false;
    }
   void  showPerson(Person[] per){
        for (int i = 0; i < 4; i++) {
            System.out.println("name="+per[i].name+";"+"age="+per[i].age);
        }
    }
}
public class test {
    public static void main(String[] args) {
        Person MAiN=new Person("test3", 20);
        Person[] t=new Person[4];
        Person t0=new Person("test1", 18);
        Person t1=new Person("test2", 19);
        Person t2=new Person("test3", 20);
        Person t3=new Person("test4", 21);
        t[0]=t0;t[1]=t1;t[2]=t2;t[3]=t3;
        CCC com=new CCC();
        System.out.println(com.contains(t, MAiN));
        com.showPerson(t);
    }
}

package shujujiegou;

public class test {

	public static void main(String[] args) {
		// TODO �Զ����ɵķ������
		SqListClass b=new SqListClass();
		Integer a[]=new Integer[10];
			for(int i=0,j=1;i<10;i=i+2) {
				a[i]=j;
				a[i+1]=j;
				j++;
			}
		b.CreateList(a);
		
		System.out.println(b.size());
		/*test1
		b.removeAll(4);
		*/
		
		/*test2
		b.replaceFirst(2, 200);
		*/
		
		/*test5
		b.removeLast(1);
		*/
		
		/*test6
		b.replaceLast(1, 100);
		*/
		b.printall();
		System.out.println(b.size());
	}

}

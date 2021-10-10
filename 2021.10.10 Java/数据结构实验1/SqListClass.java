package shujujiegou;


public class SqListClass <E> {

	final int rongliang=10;
	public E[] data;
	public int size;
	private int capacity;
	
	public SqListClass() {
		data=(E[])new Object[rongliang];
		capacity=rongliang;
		size=0;
	}
	
	private void updatecapacity(int newcapacity) {
		E[] newdata=(E[])new Object[newcapacity];
		for(int i=0;i<size;i++) {
			newdata[i]=data[i];
		}
		capacity=newcapacity;
		data=newdata;
	}
	
	public void CreateList(E[] a) {
		size=0;
		for(int i=0;i<a.length;i++) {
			if(size==capacity)
				updatecapacity(2*size);
			data[size]=a[i];
			size++;
		}
		
	}
	
	public void Add(E e) {
		if(size==capacity)
			updatecapacity(2*capacity);
		data[size]=e;
		size++;
	}
	
	public void removeAll(E key) {
		int count=0;
		for(int i=0;i<size;i++) {
			if(data[i].equals(key)==false) {
				data[count++]=data[i];
			}
		}
		size=count;
	}
	
	public void replaceFirst(E key, E x) {
		for(int i=0;i<size;i++) {
			if(data[i].equals(key)) {
				data[i]=x;
				break;
			}
		}
	}
	
	public void replaceAll(E key, E x) {
		for(int i=0;i<size;i++) {
			if(data[i].equals(key)) {
				data[i]=x;
			}
		}
	}
	
	public int searchLast(E key) {
		for(int i=size-1;i>0;i--) {
			if(data[i].equals(key)) {
				return i;
			}
		}
		return -1;
	}
	
	
	public void removeLast(E key)  {
		for(int i=size-1;i>0;i--) {
			if(data[i].equals(key)) {
				for(;i<(size-2);i++){
					data[i]=data[i+1];
				}
				size--;
				break;
			}
		}

	}
	
	public void replaceLast(E key, E x) {
		for(int i=size-1;i>0;i--) {
			if(data[i].equals(key)) {
				data[i]=x;
				break;
				}
			}
		}

		
	
	
	public int size() {return size;}
	public void printall(){
		for(int i=0;i<size;i++) {
			System.out.println(data[i]);
		}
	}

}

import class Stack<T>
{
	private Linkedlist<T> container =new Linkedlist<T>();
}








import java.util.Stack;
import java.util.NoSuchElementException;
public class Queue<E> extends Stack<E>{
    private  Stack<E> stk;
    public Queue( )
		{ /* 在此插入代码*/ 
			
		 }
public boolean add(E e) throws IllegalStateException, ClassCastException, 
NullPointerException, IllegalArgumentException{  /* 在此插入代码*/  }
public boolean offer(E e) throws ClassCastException, NullPointerException, 
IllegalArgumentException{  /* 在此插入代码*/  }
    public E remove( ) throws NoSuchElementException {  /* 在此插入代码*/   }
    public E poll( ) {  /* 在此插入代码*/   }
    public E peek ( ) {  /* 在此插入代码*/   }
    public E element( ) throws NoSuchElementException {  /* 在此插入代码*/  }
}

import java.util.Deque;
import java.util.LinkedList;
import java.util.Queue;

public class main {

	public static void main(String[] args) {
		// Pila userà i metodi dell'interfaccia Deque
		// Coda userà i metodi dell'interfaccia Queue
		Deque<Integer> Pila=new LinkedList <Integer>();
		Deque<Integer> res=new LinkedList <Integer>();
		Queue<Integer> Coda=new LinkedList<Integer>();
		Pila.add(5);
		Pila.add(8);
		Pila.add(9);
		Pila.add(3);
		System.out.println(Pila);
		
		while(Pila.isEmpty()==false){
			Coda.offer(Pila.getLast());
			Pila.pollLast();
		}
		System.out.println(Coda);
		
		while(Coda.isEmpty()==false) {
			res.addLast(Coda.remove());
		}
		System.out.println(res);
		
	}

}

package es2;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.ListIterator;

public class main {
	public static void main(String[] args) {
		
		Studente n = new Studente("Nicholas", 22, 5);
		Studente f = new Studente("Gesu", 22, 6);
		Studente a = new Studente("Cri", 22, 4);
		Studente b = new Studente("Riccardo", 22, 3);
		Studente c = new Studente("Fabio", 22, 3);
		Studente p = new Studente("Carlo", 7, 1);
		
		System.out.println(n.compareTo(f));
		System.out.println(n.equals(f));
		System.out.println(p.equals(f));
		
		ArrayList<Studente> Stud = new ArrayList<Studente>();
		Stud.add(n);
		Stud.add(p);
		Stud.add(f);
		Stud.add(a);
		Stud.add(b);
		Stud.add(c);
		Studente.sortStud(Stud);
		Studente.printList(Stud);
		Iterator<Studente> StudList1 = Stud.iterator();
		VerificaDupIterator V = new VerificaDupIterator();
		boolean result = V.verificaDup(StudList1);
		System.out.println("Risultato duplicati: " + result);
	}
}
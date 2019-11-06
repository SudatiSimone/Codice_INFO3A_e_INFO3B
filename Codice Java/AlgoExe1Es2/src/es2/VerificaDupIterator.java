package es2;

import java.util.Iterator;
import java.util.ListIterator;

public class VerificaDupIterator implements Duplicati {
	public boolean verificaDup(Iterator<Studente> P) {
		
		Studente prec = null;
		Studente cons = null;
		Iterator<Studente> C = P;
		boolean flag = false;
		while (P.hasNext()) {
			if (flag == false) {
				cons = C.next();
				flag = true;
			}
			else {
				prec = P.next();
				if (C.hasNext()) {
					cons = C.next();
					if (prec.equals(cons)) {
						return true;
					}
				}
			}
		}
		return false;
	}
}
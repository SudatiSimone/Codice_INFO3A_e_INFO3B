package es3;

import java.util.LinkedList;

public class main {

	public static void main(String[] args) {
		LinkedList<Studente> studenti= new LinkedList<Studente>();
		LinkedList<Studente> studentiVuoti= new LinkedList<Studente>();
		Studente studente1=new Studente ("simone",1998,10456);
		Studente studente2=new Studente ("stefano",1996,10455);
		Studente studente3=new Studente ("michele",1995,10458);
		Studente studente4=new Studente ("giorgio",1997,10452);
		Studente studente5=new Studente ("simone",1999,10459);
		Studente studente6=new Studente ("mario",1999,10451);
		studenti.add(studente1);
		studenti.add(studente2);
		studenti.add(studente3);
		studenti.add(studente4);
		studenti.add(studente5);
		studentiVuoti.add(studente1);
		implementazionePila<Studente> pila=new implementazionePila<Studente>(studenti);
		implementazionePila<Studente> pilaVuota=new implementazionePila<Studente>(studentiVuoti);
		
		System.out.println(pila.isEmpty()); //false
		pilaVuota.pop();
		System.out.println(pilaVuota.isEmpty()); //true
		
		
		System.out.println(pila.getIndex()); // valore
		Studente  studenteProva=pila.pop(); // restituisce ultimo elemento dopo averlo tolto dalla pila
		studenteProva.print();
		System.out.println(pila.getIndex()); // valore-1
		studenteProva=pila.top(); // restituisce e "basta" ultimo elemento
		studenteProva.print();
		System.out.println(pila.getIndex()); // valore
		
		
		pila.push(studente6);
		System.out.println(pila.getIndex()); //valore+1
	
	}

}

package temaEsameVisitor;

/*
 * ** Visitor di espressioni ***
 *	Una espressione aritmetica puoò essere:
 *	- o un numero (intero)
 *	- o la somma di due espressioni
 *	- o il prodotto di due espressioni
 *
 ***scrivi le classi per le espressioni
 *
 * Voglio fare come operazione, il valore numerico 
 * di una espressione
 * 1. prima soluzione: implemento un metodo valore nelle classi
 * espressione
 *
 * 2. usando il visitor (il visit e l'accept ritornano un intero).
 * le espressioni implementeranno il Visitable
 *e avranno un metodo accept
 * il calcolo del valore implementa il Visitor e avrà
 *un metodo visit che calcola il valore e lo restituisce
 *( e.accept(v))
 *
 *3. in un main prova a costruire l'espressione
 * (3 + 2) * 10
 * e calcolare il valore nei due modi
 */

public class TemaEsameVisitor {
	public static void main(String[] args) {
		EspressioneMatematica h1;
		EspressioneMatematica h2;
		EspressioneMatematica h3;
		EspressioneMatematica h4;
		EspressioneMatematica h5;
		EspressioneMatematica prodotto=new Prodotto(h1,h2);
		EspressioneMatematica somma=new Somma(h3,h4);
		EspressioneMatematica num=new Numero(h5);
		visitor v=new CalcolaValore();
		System.out.println(somma.accept(v));
		System.out.println(prodotto.accept(v));
		System.out.println(num.accept(v));
	}
}

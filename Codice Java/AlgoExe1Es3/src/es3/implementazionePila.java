package es3;

import java.util.LinkedList;

public class implementazionePila<E> {
	LinkedList<E> lista;

	public implementazionePila(LinkedList<E> lista) {
		this.lista = lista;
	}

	public boolean isEmpty () {
		//LISTA VUOTA O CON ELEMENTI
		//Demanda al metodo di List<E>
		return this.lista.isEmpty();
	}
	
	public void push(E element){
		//INSERIMENTO IN CODA
		//Demanda al metodo già implementato in LinkedList<E>
		lista.addLast(element);	
	}
	
	public E pop() {
		//ESTRAZIONE DALLA CODA
		//Con metodi già implementati in LinkedList<E>
		E element= lista.getLast();
		this.lista.removeLast(); 
		return element;
	}
	
	public E top(){
		//RESTITUISCE L'ULTIMO ELEMENTO DELLA LISTA
		return this.lista.getLast();
	}
	
	public LinkedList<E> getLista() {
		return lista;
	}

	public void setLista(LinkedList<E> lista) {
		this.lista = lista;
	}

	public int getIndex() {
		return this.lista.size();
	}
	
}

package temaEsameVisitor;

interface Visitable{
	int accept(visitor v);
}

abstract class EspressioneMatematica implements Visitable{}

class Somma extends EspressioneMatematica{
	EspressioneMatematica a;
	EspressioneMatematica b;

	public Somma(EspressioneMatematica a1, EspressioneMatematica b1) {
		a=a1;
		b=b1;
	}
	public int accept(visitor v) {
		return v.visit(this);
	}
}

class Prodotto extends EspressioneMatematica{
	EspressioneMatematica a;
	EspressioneMatematica b;
	
	public Prodotto(EspressioneMatematica a1, EspressioneMatematica b1) { 
		a=a1;
		b=b1;
	}
	public int accept(visitor v) {
		return v.visit(this);
	}
}

class Numero extends EspressioneMatematica{
	EspressioneMatematica a;
	
	public Numero(EspressioneMatematica a1) {
		a=a1;
	}
	public int accept(visitor v) {
		return v.visit(this);
	}
}
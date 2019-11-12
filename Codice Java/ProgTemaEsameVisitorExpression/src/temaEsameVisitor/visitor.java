package temaEsameVisitor;

interface visitor{
	int visit(Numero n);
	int visit(Somma s);
	int visit(Prodotto p);
}

class CalcolaValore implements visitor{
	@Override
	public int visit(Numero n) {
		return n.a.accept(this);
	}
	@Override
	public int visit(Prodotto p) {
		return p.a.accept(this)*p.b.accept(this);
	}
	@Override
	public int visit(Somma s) {
		return s.a.accept(this)+s.b.accept(this);
	}
	
}
package novisitor;

public class UseNoVisitor {
	public static void main(String[] args) {
		
		Rectangle r = new Rectangle();
		Translate t = new Translate();
		t.process(r);
		
		Rectangle s = new Square();
		t.process(s);
		
		
	}

}

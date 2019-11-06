
public class Studente implements Comparable<Studente> {
	String nome;
	String cognome;
	Integer matricola;
	
	public Studente(String nome, String cognome, Integer matricola) {
		this.nome=nome;
		this.cognome=cognome;
		this.matricola=matricola;
	}
	
	@Override
	public boolean equals(Object obj) {
		if (this==obj) return true;
		if (!(obj instanceof Studente)) return false;
		Studente studente= (Studente)obj;
		return this.cognome==studente.cognome && this.nome==studente.nome && this.matricola.equals(studente.matricola);
	}
	
	@Override
	public int compareTo(Studente o) {
		int temp=0;
		if (this.matricola.compareTo(o.matricola)>0) temp=1;
		if (this.matricola.compareTo(o.matricola)<0) temp=-1;
		if (this.matricola.compareTo(o.matricola)==0) temp=0;
		return temp;
		
	}
	
	public String getNome() {
		return nome;
	}
	public void setNome(String nome) {
		this.nome = nome;
	}
	public String getCognome() {
		return cognome;
	}
	public void setCognome(String cognome) {
		this.cognome = cognome;
	}
	public Integer getMatricola() {
		return matricola;
	}
	public void setMatricola(Integer matricola) {
		this.matricola = matricola;
	}
}

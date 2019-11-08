package es3;

import java.util.LinkedList;


public class Studente implements Comparable<Studente> {
	
	private String nome;
	private Integer matricola;
	private int age;
	
	public Studente(String nome, int age, Integer matricola) {
		super();
		this.nome = nome;
		this.age = age;
		this.matricola = matricola;
	}
	
	@Override
	public boolean equals(Object obj) {
		if (this == obj) {
			return true;
		}
		if (!(obj instanceof Studente)) {
			return false;
		}
		Studente s = (Studente) obj;
		return this.getMatricola() == s.getMatricola();
	}
	
	@Override
	public int compareTo(Studente s) {
		return this.getMatricola().compareTo(s.getMatricola());
	}
	public String getNome() {
		return nome;
	}
	public void setNome(String nome) {
		this.nome = nome;
	}
	public int getAge() {
		return age;
	}
	public void setAge(int age) {
		this.age = age;
	}
	public Integer getMatricola() {
		return matricola;
	}
	public void setMatricola(Integer matricola) {
		this.matricola = matricola;
	}

	public void print() {
		System.out.println("Nome: "+this.nome+" Anno: "+this.age+" Matricola: "+this.matricola);
		
	}
}
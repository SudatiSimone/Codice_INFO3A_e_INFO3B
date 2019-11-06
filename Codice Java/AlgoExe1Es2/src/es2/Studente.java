package es2;

import java.util.Iterator;
import java.util.ArrayList;
import java.util.Collections;

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
	
	public static ArrayList<Studente> sortStud(ArrayList<Studente> S) {
		Collections.sort(S);
		return S;
	}
	
	public static void printList(ArrayList<Studente> S) {
		for (Studente stud : S) {
			System.out.println("Studente " + stud.getNome() + " " + stud.getMatricola());
		}
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
}
//============================================================================
// Name        : ProgExe5Es1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string.h>
using namespace std;

class Studente{
	string nomeStudente;
public:
	Studente(){

	}
	Studente(string stud){
		nomeStudente=stud;
	}
	virtual ~Studente(){

	}
	virtual void getCorsoStudi1(){
		cout<<"metodo getCorsoStudi1 di Studente "<<endl;
	}
	void getCorsoStudi2(){
		cout<<"metodo getCorsoStudi2 di Studente "<<endl;
	}
private:

};

class StudenteLS:public Studente {
	string nomeStudenteLS;
public:
	StudenteLS(string stud){
		nomeStudenteLS=stud;
	}
	void getCorsoStudi1(){
		cout<<"metodo getCorsoStudi1 di StudenteLS"<<endl;
	}
	void getCorsoStudi2(){
		cout<<"metodo getCorsoStudi2 di StudenteLS"<<endl;
	}
};

class StudenteIL:public Studente{
	string nomeStudenteIL ;
public:
	StudenteIL(string stud){
		nomeStudenteIL=stud;
	}
	void getCorsoStudi1(){
		cout<<"metodo getCorsoStudi1 di StudenteIL"<<endl;
	}
	void getCorsoStudi2(){
		cout<<"metodo getCorsoStudi2 di StudenteIL"<<endl;
	}
};

int main() {
	//PUNTATORE (Studente)
	Studente *a1= new Studente("miao");
	a1->getCorsoStudi1();
    a1->getCorsoStudi2();
    Studente *a2= new StudenteLS("miao");
    a2->getCorsoStudi1();
    a2->getCorsoStudi2();
    Studente *a3= new StudenteIL("miao");
    a3->getCorsoStudi1();
    a3->getCorsoStudi2();
    //NORMALE (Studente)
	Studente a4= Studente("miao");
	a4.getCorsoStudi1();
    a4.getCorsoStudi2();
    Studente a5= StudenteLS("miao");
    a5.getCorsoStudi1();
    a5.getCorsoStudi2();
    Studente a6= StudenteIL("miao");
    a6.getCorsoStudi1();
    a6.getCorsoStudi2();


	//StudenteLS *b1= new Studente("bau"); --> NON si può "costruire"
	StudenteLS *b2= new StudenteLS("bau");
	b2->getCorsoStudi1();
	b2->getCorsoStudi2();
	StudenteLS b5=StudenteLS("bau");
	b5.getCorsoStudi1();
	b5.getCorsoStudi2();
	//StudenteLS *b3= new StudenteIL("bau"); --> NON si può "costruire"


	//StudenteIL *c1= new Studente("cip"); --> NON si può "costruire"
	//StudenteIL *c2= new StudenteLS("cip"); --> NON si può "costruire"
	StudenteIL *c3= new StudenteIL("cip");
	c3->getCorsoStudi1();
	c3->getCorsoStudi2();
	StudenteIL c6=StudenteIL("cip");
	c6.getCorsoStudi1();
	c6.getCorsoStudi2();
	return 0;
}


#include "Corso.h"
#include "Studente.h"
#include "stddef.h"
#ifndef CORSO_C_
#define CORSO_C_

#endif /* CORSO_C_ */

struct NodoLista{      //ci andava il typedef? quando bisogna usarlo?
	StudenteRef stud;
	struct NodoLista* next;
};
struct NodoLista* head=NULL;

struct Corso{
	char nome[40];
	struct NodoLista* listaRef;
};

CorsoRef mkCorso (char*n){
	CorsoRef cors= malloc(sizeof(struct Corso));
	cors->listaRef=malloc(sizeof(struct NodoLista));
	strcpy(cors->nome,n);
	cors->listaRef->next=NULL;
	cors->listaRef->stud=" ";
	return cors;
}

void addStudent(CorsoRef c, StudenteRef s){
	struct NodoLista*t;
	t=malloc(sizeof(struct NodoLista));
	t->next=head;
	t->stud=s;
	head=t;
}

//void printCorso(CorsoRef c){
//	printf("Nome del corso: %s",c->nome);
//	printf(" Studenti partecipanti: ");
//	for (struct NodoLista t=head; t!=NULL;t=t->next){
//		printf(" %d ",t->stud->matricola);
//	}
//}



//TEORIA SULLA LISTA
//	typedef struct st_nodo{
//		int dato;
//		struct st_nodo*next;
//	}NODO;
//
//	NODO*head=NULL;

//	int ins_testa(int dato){
//		nodo*t;
//		t=new NODO;
//		t->dato=dato;
//		t->next=head;
//		head=t;
//		return 0;
//	}





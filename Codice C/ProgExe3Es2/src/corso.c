#include "Corso.h"
#include "Studente.h"
#include "stddef.h"
#ifndef CORSO_C_
#define CORSO_C_

#endif /* CORSO_C_ */

typedef struct NODO_LISTA{      //ci andava il typedef? quando bisogna usarlo?
	StudenteRef stud;
	struct NODO_LISTA* next;
}NODO_LISTA;
struct NODO_LISTA* head=NULL;  //variabile globale

struct Corso{
	char nome[40];
	struct NODO_LISTA* listaRef;
};

CorsoRef mkCorso (char*n){
	CorsoRef cors= malloc(sizeof(struct Corso));
	cors->listaRef=malloc(sizeof(struct NODO_LISTA));
	strcpy(cors->nome,n);
	cors->listaRef->next=NULL;
	cors->listaRef->stud=" ";
	return cors;
}

void addStudent(CorsoRef c, StudenteRef s){
	struct NODO_LISTA*t;
	t=malloc(sizeof(struct NODO_LISTA));
	t->next=head;
	t->stud=s;
	head=t;
}

//void deleteStud(CorsoRef c,StudenteRef s2){
//	NODO_LISTA* prec=head;
//	NODO_LISTA* cons=head->next;
//	while(cons!=NULL){
//		if (cons==s2){
//			prec=NULL;
//		}
//		prec=prec->next;
//		cons=cons->next;
//	}
//}

void numeroStudentiCorso(CorsoRef c){
	int numeroNodi=0;
	NODO_LISTA *scansione;
	scansione=head;
	while(scansione!=NULL){
		numeroNodi++;
		scansione=scansione->next;
	}
	printf("\nNumero nodi: %d",numeroNodi);
}



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





#include "Studente.h"
#include <stddef.h> //per avere il NULL
#ifndef STUDENTE_C_
#define STUDENTE_C_

#endif /* STUDENTE_C_ */

static int MATRICOLA=1000;

struct Studente{
	char nome [30];
	char cognome[30];
	int matricola;
	int voti[50];
	int indiceVoti;
};

StudenteRef makeStudent (char*n, char*c){
	StudenteRef stud= malloc(sizeof(struct Studente));
	strcpy(stud->nome,n);
	strcpy(stud->cognome,c);
	stud->matricola=MATRICOLA++;
	stud->indiceVoti=0;
	for (int i=0;i<50;i++){
		stud->voti[i]=0;
	}
	return stud;
}

void printStudente(StudenteRef s){
	printf("\nNome: %s Cognome: %s Matricola:%d",s->nome,s->cognome,s->matricola);
	printf("\nTutti i Voti: ");
	for (int i=0; i<50;i++){
		if (s->voti[i]!=0) printf("%d ",s->voti[i]);
	}
}

void addVoto(int x, StudenteRef s){
	int index=s->indiceVoti;
	(s->voti[index])=x;
	(s->indiceVoti)++;
}
void deleteStudente(StudenteRef* s){
	free (*s);
	*s=NULL;
}

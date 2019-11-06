#include "Studente.h"
#ifndef STUDENTE_C_
#define STUDENTE_C_

#endif /* STUDENTE_C_ */

static int MATRICOLA=1000;
static int INDICE_VOTO=0;

struct Studente{
	char nome [30];
	char cognome[30];
	int matricola;
	int voti[50];
};

StudenteRef makeStudent (char*n, char*c){
	StudenteRef stud= malloc(sizeof(struct Studente));
	strcpy(stud->nome,n);
	strcpy(stud->cognome,c);
	stud->matricola=MATRICOLA++;
	for (int i=0; i<50;i++){
		stud->voti[i]=0;
	}
	return stud;
}

void printStudente(StudenteRef s){
	printf("Nome: %s Cognome: %s Matricola:%d",s->nome,s->cognome,s->matricola);
}

void addVoto(int x, StudenteRef s){
	s->voti[INDICE_VOTO]=x;
	INDICE_VOTO++;
}
void deleteStudente(StudenteRef* s){

}

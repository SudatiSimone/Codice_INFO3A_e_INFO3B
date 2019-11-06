
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void function1(char* m) {
	*(m+6)='z';
	*(m+5)='z';
	*(m+4)='1';
//	while (*m!='o'){
//		*m='h';
//		m++;
//	}
}

void function2(char*a) {
	strcpy(a,"cavolfiore");
}


typedef struct Persona{
	char nome[20];
};

struct Persona* function3(){
	struct Persona p;
	strcpy(p.nome, "pippo");
	printf("mi chiamo %s nella funzione\n",p.nome);
	return &p;
}

struct Persona* function4(){
	struct Persona *p=malloc(sizeof(struct Persona));
	strcpy(p->nome, "cesare");
	printf("mi chiamo %s nella funzione\n",p->nome);
	free(p); // --> se lasci è dangling pointer, se commenti funziona giusto e restituisce il valore al main
	return p;
}


int main() {

	//Esercizio 1 :
	printf("Esercizio 1\n");
	char a []= "miao";
	char b []= "bau";
	printf("%s %s \n", a,b); //->miao bau
	function1(b);
	printf("%s %s \n\n",a,b); //->1zzo bau

	//Esercizio 2
	printf("Esercizio 2\n");
	char e[]="intatta";
	char f[]="ciao";
	printf("%s - %s \n",e,f);
	function2(f);
	printf("%s - %s \n\n",e,f);

	//Esercizio 3
	printf("Esercizio 3\n");
	struct Persona* pippo = function3();
	printf("mi chiamo %s nel main\n\n",pippo->nome);

	//Esercizio 4
	printf("Esercizio 4\n");
	struct Persona *cesare=function4();
	printf("mi chiamo %s nel main\n\n",cesare->nome);

	return 0;
}

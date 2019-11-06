//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//static int NUMERO_STUDENTI=1;
//
//struct studente {
//	char nome[30];
//	char cognome[30];
//	int matricola;
//};
//
//struct studente *mkstudente(char*n,char*g){
//	struct studente *s=malloc(sizeof(struct studente));
//	strcpy(s->nome,n);
//	strcpy(s->cognome,g);
//	//matricola in ordine crescente
//	s->matricola=NUMERO_STUDENTI++;
//	return &s;
//}
//
//void print (struct studente *s){
//	printf("%s %s %d ", s->nome, s->cognome,s->matricola);
//}
//
//int main(){
//	char n[]="alberto";
//	char c[]="rossi";
//	struct studente *ar=mkstudente(n,c);
//	print(ar);
//	return 0;
//}

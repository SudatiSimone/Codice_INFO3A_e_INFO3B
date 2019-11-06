#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *vocalizza_IT (char *nome){
	// Ora che so il numero di caratteri posso allocare nell'Heap
	char* result=malloc((strlen(nome)+1)*sizeof(char));  //Nota che c'è il *
	int i=0;
	while (*nome){
		if (nome[0]=='a'|| nome[0]=='e'|| nome[0]=='i'||nome[0]=='o'|| nome[0]=='u'){
			result[i++]=nome[0];
			result[i+1]='\0';
		}
		nome++;
	}
	//printf("Parola Vocalizzata in function: %s\n", result);
	return result;
}
char *vocalizza_R(char* nome){  //ricorda NON è un vettore di char bensì un puntatore al primo elemento
								//che in successivi richiami di funzione verrà fatto scorrere
	if (*nome=='\0'){
		//restituisci stringa vuota
		char *result=malloc(sizeof(char));  //Alloca un solo spazio per un char
		*result='\0';
		return result;
	}else{
		char *res=vocalizza_R(nome+1);  // res punta a result che a sua volta punta
		if (nome[0]=='a'|| nome[0]=='e'|| nome[0]=='i'||nome[0]=='o'|| nome[0]=='u'){
			//aggiungi come prefisso *s
			char *stringaFinale=malloc((strlen(res)+2)*sizeof(char));
			sprintf(stringaFinale,"%c",nome[0]);
			strcat(stringaFinale,res);
			free(res);
			return stringaFinale;
		}else{
			return res;
		}
	}
}


char *vocalizza_TR(char* nome, char* resPartial){

	if (*nome=='\0'){
		return resPartial;
	}else{
		if (nome[0]=='a'|| nome[0]=='e'|| nome[0]=='i'||nome[0]=='o'|| nome[0]=='u'){
			//aggiungi come prefisso *s
			char *res=malloc(sizeof(char));
			sprintf(res,"%c",nome[0]);
			strcat(resPartial,res);
			free(res);
		}
		return vocalizza_TR(nome+1,resPartial);
	}
}


int main() {
	char parola1[12]="simoneaeiotu"; // parola va da 0 a 11
	parola1[12]='\0';				// in posizione 12 ci va '\0'
	printf("SOLUZIONE ITERATIVA\n");
	char *res1= vocalizza_IT(parola1);
	printf("Nome intero main: %s\nNome vocalizzato main: %s\n\n",parola1,res1);
	free(res1);

	printf("SOLUZIONE RICORSIVA\n");
	char parola2[12]="simoneaeiotu";
	parola2[12]='\0';
	char *res2= vocalizza_R(parola2);
	printf("Nome intero main: %s\nNome vocalizzato main: %s\n\n",parola2,res2);
	free(res2);

	printf("SOLUZIONE RICORSIVA CON TAIL RECURSION\n");
	char parola3[12]="simoneaeiotu";
	parola3[12]='\0';
	char *risParziale=malloc(strlen(parola3)*sizeof(char));
	*risParziale='\0';
	char *res3= vocalizza_TR(parola3,risParziale);
	printf("Nome intero main: %s\nNome vocalizzato main: %s\n\n",parola3,res3);
	free(res3);

	return 0;
}

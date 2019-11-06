#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


int calcolaHash (char parola [] ){
	int result=0;
	for (int i=0; parola[i]!='\0';i++){
		//printf("  %d", parola[i]);
		result+=parola[i]*(i+1);
	}
	return result;
}
//int calcolaHash_Ricorsiva (char* parola){
//	return calcolaHash_Ricorsiva2 (parola,1);
//}
int calcolaHash_Ricorsiva2 (char * s, int w){
	if ((*s)=='\0') return 0;
	return (*s)*w + calcolaHash_Ricorsiva2 (s+1,w+1);
}

//int calcolaHash_TailRec (char* v){
//	return calcolaHash_TailRec2(v,1,0);
//}
int calcolaHash_TailRec2 (char* t, int peso, int res){
	if (*t=='\0') return res;
	return calcolaHash_TailRec2(t+1, peso+1, res+(*t)*peso );
}

int calcolaSum (int * vettore, int n){
	int res=0;
	for (int i=0; i<n; i++){
		if (vettore[i]%2==0) res+=vettore[i];
	}
	return res;
}

int calcolaSum_Ricorsiva (int* u, int k){
	if (k<=0) return 0;
	return (( *u%2==0 ) ? * u : 0) +calcolaSum_Ricorsiva (u+1,k-1);
}

//int calcolaSum_Ricorsiva_TailRec (int*y, int m){
//	return calcolaSum_Ricorsiva_TailRec2 (y,m,0);
//}
int calcolaSum_Ricorsiva_TailRec2 (int *y1, int m1, int h1){
	if (m1<=0) return h1;
	return calcolaSum_Ricorsiva_TailRec2(y1+1,m1-1, ((*y1%2==0)?*y1:0)+h1 );
}


bool palindroma_It1 (char* b, int n){
	bool res= true;
	for (int i=0; b[i]!='\0';i++){
		if (b[i]!=b[n-1-i]) res=false;
	}
	return res;
}

bool palindroma_It2 (char dritta[], int n) {
  char inversa[n];

  for(int i=0; i<n; i++){
    inversa[i]=dritta[n-1-i];
  }

  inversa[n] = '\0';
  printf("%s - %s \n", dritta, inversa);

  if (strcmp(dritta, inversa))
    return false;
  else
    return true;
}

bool palindroma_ricorsiva(char* f2, int num2, int res2){
	if (f2[0]=='\0') return true;
	return ( (f2[0]==f2[num2-1]) ? true : false ) && (palindroma_ricorsiva (f2+1, num2-1, res2) );
}

bool palindroma_ricorsiva2(char* s, int num ,bool v, int contatore){

	if (num==0) return true;

	bool k;

	if ( (*s)==(*(s+num-1-contatore)) )      // -1 perchè la dimensione del vettore va da 0 a num-1
		k=true;
	else
		k=false;

	s=s+1;
	num=num-1;
	contatore=contatore+1;

	return k && (palindroma_ricorsiva2(s,num,v, contatore));
}

bool palindroma_TailRec (char*t1, int r1, bool res){
	if (r1==0) return res;
	return palindroma_TailRec (t1+1, r1-1, res && (t1[0]==t1[r1-1])? true : false );
}
bool palindroma_TailRec2 (char* m, int num, bool g, int contatore){
	if (num==0) return g;
	if (g==false) return false;

	if ( (*m)==(*(m+num-1-contatore)) )
		g=true;
	else
		g=false;

	num=num-1;
	m=m+1;
	contatore=contatore+1;

	return palindroma_TailRec2 (m,num,g,contatore);
}


bool divisibile_8_IT(int value){
	char nstr[12];

	sprintf (nstr, "%d", value);
	//printf ("---- %s ", nstr);
	int cifre= strlen (nstr);
	//printf ("e %d cifre\n", cifre);

	if(cifre>3){
		char nstr_3[3];
		nstr_3[3]= '\0';
		nstr_3[2]= nstr[cifre-1];
		nstr_3[1]= nstr[cifre-2];
		nstr_3[0]= nstr[cifre-3];
		// printf ("---- %s ", nstr_3);
		strncpy (nstr, nstr_3,4);
	}
	if ((atoi(nstr)%8)==0)
			return true;
		else
			return false;
}

bool divisibile_8_R(int n, bool b){

  char nstr[12];
  sprintf(nstr, "%d", n);
  int cifre = strlen(nstr);
  if (cifre<4)
  {
	  if ((n%8)==0)
		  return true;
      else
    	  return false;
  }
  else{
   char nuovo[4];
   nuovo[3] = '\0';
   nuovo[2] = nstr[cifre - 1];
   nuovo[1] = nstr[cifre - 2];
   nuovo[0] = nstr[cifre - 3];
   return (b && divisibile_8_R(atoi(nuovo),b));
  }
}

bool divisibile_8_TR(int value){
	char nstr[12];

	sprintf (nstr, "%d", value);
	//printf ("---- %s ", nstr);
	int cifre= strlen (nstr);
	//printf ("e %d cifre\n", cifre);

	if(cifre>3){
		char nstr_3[3];
		nstr_3[3]= '\0';
		nstr_3[2]= nstr[cifre-1];
		nstr_3[1]= nstr[cifre-2];
		nstr_3[0]= nstr[cifre-3];

		// printf ("---- %s ", nstr_3);
		return divisibile_8_TR (atoi(nstr_3));
	} else {
		if ((atoi(nstr)%8)==0)
			return true;
		else
			return false;
	}
}

bool divisibile7_IT (int number, int pos){

	int numeroMonco=0;
	int cifraUnita=0;
	int cifre=pos;
	int res=0;
	char string_numero[12];
	char string_cifraUnita[2]; //cifra unità e carattere fine stringa
	char string_numeroMonco[12];
	char string_res[12];
	sprintf(string_numero,"%d",number);
	string_numero[cifre]='\0';

	while (cifre>2){
		//printf("Numero convertito stringa %s", string_numero);
		//printf(" e cifre %d\n",cifre);
			for (int i=0; i<=cifre-2; i++){  // cifre-2 perchè senza cifra dell'unità
					string_numeroMonco[i]=string_numero[i];
			}
		string_numeroMonco[cifre-1]='\0';
		numeroMonco=atoi(string_numeroMonco);
		//printf("Numero monco %d", numeroMonco);
		string_cifraUnita[0]= string_numero[cifre-1];
		string_cifraUnita[1]='\0' ;
		cifraUnita=atoi(string_cifraUnita);
		//printf(" e Cifra unità %d\n", cifraUnita);
		res=numeroMonco-2*cifraUnita;
		sprintf(string_res,"%d",res);
		//printf("Res: %s\n",string_res);
		string_res[cifre]='\0';
		cifre=strlen(string_res);
		sprintf(string_numero,"%d",res);
	}
	if (res%7)
		return false;
	else
		return true;
}

bool divisibile7_TR (int number){

	int numeroMonco=0;
	int cifraUnita=0;
	char string_numero[12];
	char string_cifraUnita[2]; //due elementi: cifra unità e carattere fine stringa
	char string_numeroMonco[12];

	sprintf(string_numero,"%d",number);
	//printf("Numero convertito stringa %s", string_numero);
	int cifre=strlen(string_numero);
	string_numero[cifre]='\0';
	//printf(" e cifre %d\n",cifre);

	if (cifre <=2){
		if (number%7)
			return false;
		else
			return true;
	}else{

		for (int i=0; i<=cifre-2; i++){  // cifre-2 perchè senza cifra dell'unità
			string_numeroMonco[i]=string_numero[i];
		}
		string_numeroMonco[cifre-1]='\0';
		numeroMonco=atoi(string_numeroMonco);
		//printf("Numero monco %d", numeroMonco);
		string_cifraUnita[0]= string_numero[cifre-1];
		string_cifraUnita[1]='\0' ;
		cifraUnita=atoi(string_cifraUnita);
		//printf(" e Cifra unità %d\n", cifraUnita);

		return divisibile7_TR (numeroMonco-2*cifraUnita);
	}

}
int main() {
	if (1){
			printf("Per l'if in c la condizione è vera se =1 \n");
		}else{
			printf("Per l'if in c la condizione è vera se =0");
		}
	printf("Se verificata condizione restituisce--> %d \n\n", 2==2 );

	//Esercizio 1 HASH
	char stringa []= "anna";
	printf("Esercizio1 \n");
	printf("Hash1_IT: %d \n", calcolaHash(stringa));
	printf("Hash2_R: %d \n", calcolaHash_Ricorsiva2(stringa,1));
	printf("Hash3_TR: %d \n\n", calcolaHash_TailRec2(stringa,1,0));

	//Esercizio 2 Somma dei numeri pari
	int num []= {12, 20, 15 ,19, 18, 14};
	printf("Esercizio2 \n");
	printf("Dimensione vettore: %d \n", sizeof(num)/sizeof(int));
	printf("Somma1_IT: %d \n", calcolaSum(num, sizeof(num)/sizeof(int)));
	printf("Somma2_R: %d \n", calcolaSum_Ricorsiva(num, sizeof(num)/sizeof(int)));
	printf("Somma3_TR: %d \n\n", calcolaSum_Ricorsiva_TailRec2(num, sizeof(num)/sizeof(int),0));


	//Esercizio 3 Palindroma
	char nome[]="CavallllavaC";
	bool x=true;
	printf("Esercizio3 \n");
	printf("Dimensione: %d\n", strlen(nome));
	printf("Palindroma1_IT1 : %d\n", palindroma_It1(nome, strlen(nome)));
	printf("Palindroma2_IT2 : %d\n", palindroma_It2(nome, strlen(nome)));
	printf("Palindroma3_R1 : %d\n", palindroma_ricorsiva(nome, strlen(nome),x));
	printf("Palindroma4_R2 : %d\n", palindroma_ricorsiva2(nome, strlen(nome),x,0));
	printf("Palindroma5_TR1 : %d\n", palindroma_TailRec (nome, strlen(nome),x));
	printf("Palindroma6_TR2 : %d\n\n", palindroma_TailRec2 (nome, strlen(nome),x,0));

	//Esercizio 4 Divisibile per 8
	int numero= 880088;
	printf("Esercizio 4 \n");
	printf("Divisibile1_IT: %d\n", divisibile_8_IT(numero));
	printf("Divisibile2_R: %d\n", divisibile_8_R(numero,true));
	printf("Divisibile3_TR: %d\n\n", divisibile_8_TR(numero));

	//Esercizio 5 Divisibile per 7
	int numero_7 = 95676;
	printf("Esercizio 5 \n");
	printf("Divisibile7_1_IT: %d\n", divisibile7_IT(numero_7,5));  // secondo parametro: numero di cifre del numero
	//printf("Divisibile7_2_R: %d\n", divisibile7_R(numero_7));
	printf("Divisibile7_3_TR: %d\n\n", divisibile7_TR(numero_7));

	return 0;
}

#include "Studente.h"
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char nome []="simone";
	char cognome []="sudati";
	StudenteRef s1=makeStudent(nome,cognome);
	printStudente(s1);
	return EXIT_SUCCESS;
}

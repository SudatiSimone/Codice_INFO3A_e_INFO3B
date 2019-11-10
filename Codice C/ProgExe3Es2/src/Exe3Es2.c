#include "Studente.h"
#include "Corso.h"
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	StudenteRef s1=makeStudent("simone","sudati");
	addVoto(8,s1);
	addVoto(5,s1);
	addVoto(7,s1);
	addVoto(9,s1);
	addVoto(6,s1);

	printStudente(s1);
	//deleteStudente(&s1);--> crasha e ti accorgi dell'errore
	printStudente(s1);

	StudenteRef s2=makeStudent("mario","rossi");
	CorsoRef mate=mkCorso("matematica");

	addStudent(mate,s1);
	addStudent(mate,s2);
	numeroStudentiCorso(mate);

    //deleteStud(mate,s2);
	numeroStudentiCorso(mate);


	return EXIT_SUCCESS;
}

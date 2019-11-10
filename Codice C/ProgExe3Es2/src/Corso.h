#ifndef CORSO_H_
#define CORSO_H_

#endif /* CORSO_H_ */
#include "Studente.h"

typedef struct Corso *CorsoRef;
CorsoRef mkCorso(char*n);
void addStudent(CorsoRef c, StudenteRef s);
void printCorso(CorsoRef c);

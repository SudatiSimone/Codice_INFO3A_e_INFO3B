#ifndef STUDENTE_H_
#define STUDENTE_H_

#endif /* STUDENTE_H_ */

typedef struct Studente* StudenteRef;
StudenteRef makeStudent (char*n,char*c);
void printStudente(StudenteRef s);
void addVoto(int x, StudenteRef s);
void deleteStudente(StudenteRef* s);

#include "contatore.h"
#ifndef CONTATORE_C_
#define CONTATORE_C_

#endif /* CONTATORE_C_ */

static int count;

void reset (void){
	count=0;
}

void inc(void){
	count++;
}

int getValue(void){
	return count;
}

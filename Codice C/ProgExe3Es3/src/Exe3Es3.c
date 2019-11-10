#include <stdio.h>
#include <stdlib.h>
#include "bitvector.h"

int main() {
	//0 True e 1 False
	//La dimensione di BitVector dev'essere <=30
	BitVectorRef bitVet1=makeBitVector(10); //inizializza con tutti falsi
	BitVectorRef bitVet2=makeBitVector2(10);//inizializza alternando falsi e veri

	toString(bitVet1);
	toString(bitVet2);//[0 1 0 1 0 1 0 1 0 1]
	Not(bitVet1);
	toString(bitVet1);//[0 0 0 0 0 0 0 0 0 0]

	BitVectorRef resOr=Or(bitVet1,bitVet2);
	toString(resOr);//  [0 1 0 1 0 1 0 1 0 1]
	BitVectorRef resAnd=And(bitVet2,resOr);
	toString(resAnd);// [0 1 0 1 0 1 0 1 0 1]

	return 0;
}

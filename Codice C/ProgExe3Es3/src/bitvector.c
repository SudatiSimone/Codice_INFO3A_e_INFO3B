#include "bitvector.h"
#ifndef BITVECTOR_C_
#define BITVECTOR_C_


#endif /* BITVECTOR_C_ */

struct BitVector{
	int dim;
	int vettore[30];
};

BitVectorRef makeBitVector(int dimensione){
	BitVectorRef nuovo=malloc(sizeof(struct BitVector));
	nuovo->dim=dimensione;
	for (int i=0; i<30;i++){
		nuovo->vettore[i]=1;
	}
	return nuovo;
}

BitVectorRef makeBitVector2(int dimensione){
	BitVectorRef nuovo=malloc(sizeof(struct BitVector));
	nuovo->dim=dimensione;
	for (int i=0; i<30;i++){
		if(i%2==0){
			nuovo->vettore[i]=0;
		}else{
			nuovo->vettore[i]=1;
		}
	}
}

BitVectorRef Not(BitVectorRef v1){
	//MALLOC! dangling pointer??
	int dimensione=v1->dim;
	for (int i=0; i<dimensione;i++){
		if (v1->vettore[i]==0){
			v1->vettore[i]=1;
		}else{
			v1->vettore[i]=0;
		}
	}
	return v1;
}

BitVectorRef Or(BitVectorRef v1,BitVectorRef v2){
	int dimensione=v1->dim;
	BitVectorRef res=malloc(sizeof(struct BitVector));
	res->dim=dimensione;
	for (int i=0; i<dimensione;i++){
			if (v1->vettore[i]==0 && v2->vettore[i]==0){
				res->vettore[i]=0;
			}else{
				res->vettore[i]=1;
			}
		}
	return res;
}

BitVectorRef And(BitVectorRef v1,BitVectorRef v2){
	int dimensione=v1->dim;
	BitVectorRef res=malloc(sizeof(struct BitVector));
	res->dim=dimensione;
	for (int i=0; i<dimensione;i++){
			if (v1->vettore[i]==1 && v2->vettore[i]==1){
				res->vettore[i]=1;
			}else{
				res->vettore[i]=0;
			}
		}
	return res;
}

void toString (BitVectorRef v1){
	int dimensione=v1->dim;
	int index=0;
	printf("\nvettore: ");
	while(index<dimensione){
		printf("%d ",v1->vettore[index]);
		index++;
	}
}


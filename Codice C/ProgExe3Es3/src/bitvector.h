#ifndef BITVECTOR_H_
#define BITVECTOR_H_

#endif /* BITVECTOR_H_ */

typedef struct BitVector* BitVectorRef;

BitVectorRef makeBitVector(int dimensione);
BitVectorRef makeBitVector2(int dimensione);
BitVectorRef And (BitVectorRef v1, BitVectorRef v2);
BitVectorRef Or (BitVectorRef v1,BitVectorRef v2);
BitVectorRef Not(BitVectorRef v1);
void toString (BitVectorRef v1);
void delete (BitVectorRef v1);

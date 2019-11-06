
#include <stdio.h>
#include <stdlib.h>

//Con il MODULO significa che tutti i metodi sono void
//e che il counter viene definito come statico nel .c anzichè nel .h
int main(void) {
	int v;
	reset();
	inc();
	inc();
	v=getValue();
	printf("%d", v);
	return EXIT_SUCCESS;
}

#include <stdio.h>

main () {
	short int i = 0;
	for (i=32;i<=127;i++) {
		printf("%d\t",i); putchar(i); printf("\n");
	}
}

#include <stdio.h>

short int c;
long long int k=0;

main () {
	while ( (c=getchar()) != EOF ) {
		if ( c == ' ' ) {
			k++ ;
		} else if ( k != 0 ) {
			printf ("swallowed %lld blanks", k-1);
			putchar (' ');
			putchar (c);
			k = 0;
		} else {
			putchar (c);
		};
	}
}

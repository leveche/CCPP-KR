#include <stdio.h>

/*
	count lines, words, and characters in input
*/

#define 	IN 	1	/* inside a word */
#define		OUT	0	/* outside a word */


main () {

	int c, state;

	state = OUT;

	while ( (c=getchar()) != EOF ) {
		if ( 	c == ' '
			| c == '\t' ) {
				if ( state == IN ) {
					state = OUT;
					printf ("%c", c);
					printf ("\n");
				}
		} else {
			if ( state == OUT ) {;
				state = IN;
			};
			printf ("%c", c);
		};
	};
}

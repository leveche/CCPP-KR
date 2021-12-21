#include <stdio.h>

/*
	count lines, words, and characters in input
*/

#define 	IN 	1	/* inside a word */
#define		OUT	0	/* outside a word */


main () {

	int c, nl, nw, nc, state;

	state = OUT;
	nc = nl = nw = 0;

	while ( (c=getchar()) != EOF ) {
		++nc;
		if ( c == '\n' ) {
			++nl;
		};
		if ( c == ' ' || c == '\n' || c == '\t' ) {
			state = OUT;
		} else if ( state == OUT ) {
			++nw;
			state = IN;
		};
	};

	printf ("%d\t%d\t%d\n", nl, nw, nc);
};

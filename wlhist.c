#include <stdio.h>

#define MAXWLEN 30
#define IN 1
#define OUT 0

int iswhsp(int c) {
	if ( c == ' ' || c == '\n' || c == '\t' ) {
		return true;
	} else {
		return false;
	};
}

main () {

	int wlen[MAXWLEN];
	int i,c;
	int state = OUT;

	for ( i=0; i<MAXWLEN; ++i){
		wlen[i] = 0;
	};

	while ( (c=getchar()) != EOF ) {
		if ( iswhsp(c) ) {
			printf ("white space!\n");
		};
	};
};

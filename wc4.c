#include <stdio.h>

main () {

	int ndigit[10];
	int c, i, nwsp, nother;

	for ( i=0; i<=9; i++) {
		ndigit[i] = 0;
	};
	nwsp = nother = 0;

	while ( (c=getchar()) != EOF ) {
		if ( c >= '0' && c <= '9' ) {
			++ndigit[c-'0'];
		} else if ( c == ' ' || c =='\t' || c=='\n' ) {
			++nwsp;
		} else {
			++nother;
		};
	};

	printf("digits=");
	for (i=0;i<=9;i++) {
		printf("%d ",ndigit[i]);
	};

	printf("\nwhite space=%d, other=%d\n", nwsp,nother);
}

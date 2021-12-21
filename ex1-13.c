#include <stdio.h>

/*
	count lines, words, and characters in input
*/

#define 	IN 	1	/* inside a word */
#define		OUT	0	/* outside a word */
#define		NDIGITS	10	/* number of digits */
#define		NENGLISH 26	/* letters in the English alphabet */


int ndigit[NDIGITS]; 
int nlower[NENGLISH];
int nupper[NENGLISH];
int c, i, nwsp, nother;


void read_in_data () {
	int state;
	state = OUT;

	while ( (c=getchar()) != EOF ) {
		if ( c >= '0' && c <= '9' ) {
            ++ndigit[c-'0'];
        } else if ( c == ' ' || c =='\t' || c=='\n' ) {
            ++nwsp;
        } else if ( c >= 'a' && c <= 'z' ) {
           ++nlower[c-'a'];
        } else if ( c >= 'A' && c <= 'Z' ) {
           ++nupper[c-'A'];
        } else {
          ++nother;
        };
   };
}

void print_hist_bin (int height) {
	printf ("%d |",height);
	int i = 0;
	for (i = 0; i<height; i++) {
		printf ("=");
	}; 
	printf ("\n");
}

void print_histogram () {
	for ( i=0; i < NDIGITS; i++ ) { 
		if (ndigit[i] != 0) {
			printf ("%d    : |",i); 
			print_hist_bin(ndigit[i]);
		};
	};

	for ( i=0; i < NENGLISH; i++ ){
		if (nlower[i] != 0) {
			printf ("%c    : |",i+'a');
			print_hist_bin(nlower[i]);
		};
		if (nupper[i] != 0) {
			printf ("%c    : |",i+'A');
			print_hist_bin(nupper[i]);
		};
	};

	printf ("wspc : |"); print_hist_bin(nwsp);
	printf ("other: |"); print_hist_bin(nother);
}

int main () {

	for ( i=0; i<=9; i++ ) { ndigit[i] = 0; };
	nwsp = nother = 0;

	read_in_data();
	print_histogram();
};

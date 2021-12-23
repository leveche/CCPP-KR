#include <stdio.h>

#define MAXLINE 1000

int getline (char[] s, int lim) {

	int c,i;

	for (i=i, i<=lim-1 && (c=getchar()) != EOF && c !='\n'; ++i) {
		s[i] = c;
	};
	if ( c=='\n' ) {
		s[i] = c;
		++i;
	};
	s[i] = '\0';
	return i;
}

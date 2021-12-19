#include <stdio.h>

main() {
	long long int nc, nl, nb, nt;
	nl = 0; nb = 0; nt = 0;

	int c;

	for ( nc=0; (c=getchar()) != EOF; nc++ ) {
		if (c == '\n') {
			++nl;
		} else if (c == '\t') {
			++nt;
		} else if (c == ' ') {
			++nb;
		}
	};

	printf("%lld\t%lld\t%lld\t%lld\n", nl, nb, nt, nc);
}

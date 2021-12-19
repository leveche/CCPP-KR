#include<stdio.h>

#ifndef CELFAHR

#define CELFAHR
#define LOWER_F	0.
#define	UPPER_F	300.
#define	STEP_F	20.
#define MAXSTEP 100

#endif 			/* CELFAHR*/

double c2f (double c) {
	return (double) (c * 9.) / 5. + 32.;
}

double f2c (double f) {
	return (double) 5. * ( f - 32. ) / 9.;
}

int main () {
	double fahr, celsius[MAXSTEP];

	short i = 0;

	printf("Fahrenheit\tCelsius\n====================\n");
	for 	(fahr = LOWER_F; fahr <= UPPER_F ;fahr += STEP_F) {
		celsius[i] = f2c(fahr);
		printf ("%3.1f\t%3.1f\n",	(double) fahr, (double) celsius[i]);
		i++; if (i>=MAXSTEP) {
			printf("Max reached");
			break;
		};
	};
	i--;

	/* reverse table: Celsius 2 Fahrenheit */
	printf("Celsius\tFahrenheit\n====================\n");
	while 	(i>=0) {
		printf ("%3.1f\t%3.1f\n",	celsius[i], c2f(celsius[i]) );
		i--;
	};

}

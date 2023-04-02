#include <stdio.h>      /* printf, NULL */
#include <stdlib.h>     /* strtoull */
#include <conio.h>

/*
	Source by CPlusPlus (https://www.cplusplus.com)
	Modified For Learn by RK
	I.D.E : VS2022
*/

int main() {
	char szNumbers[] = "250068492 7b06af00 1100011011110101010001100000 0x6fffff";
	char* pEnd;
	unsigned long long int ulli1, ulli2, ulli3, ulli4;

	ulli1 = strtoull(szNumbers, &pEnd, 10);
	ulli2 = strtoull(pEnd, &pEnd, 16);
	ulli3 = strtoull(pEnd, &pEnd, 2);
	ulli4 = strtoull(pEnd, NULL, 0);
	
	printf("The decimal equivalents are: %llu, %llu, %llu and %llu.\n", ulli1, ulli2, ulli3, ulli4);

	_getch();
	return 0;
}
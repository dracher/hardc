#include <stdio.h>

int main (int argc, char const *argv[])
{
	int c, i, nwhite, nother;
	int ndigit[10];
	
	nwhite = nother = 0;
	for(i = 0; i < 10; ++i)
	{
		ndigit[i] = 0;
	}
	while ((c=getchar()) != EOF){
		if (c >= '0' && c <= '9'){ //the value of c here is e.g. '1' => 49, '0' => 48. c - '0' => 49 - 48 = 1
			printf("%d", (c-'0'));
			++ndigit[c];}
		else if (c == ' ' || c == '\n' || c == '\t')
			++nwhite;
		else
			++nother;
	}
	printf("digits =");
	for (i = 0; i < 10; ++i){
		printf(" %d", ndigit[i]);
	}
	printf(", white space = %d, otehr = %d\n", nwhite, nother);
	return 0;
}
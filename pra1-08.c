#include <stdio.h>

int main (int argc, char const *argv[])
{
	int space, tab, nl, c;
	space = tab = nl = 0;
	while ((c=getchar()) != EOF)
	{
		if (c == ' ')
			space++;
		else if (c == '\t')
			tab++;
		else if (c == '\n')
			nl++;
	}
	printf("There are %d space\n", space);
	printf("There are %d tab\n", tab);
	printf("There are %d newline\n", nl);
	return 0;
}
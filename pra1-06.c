#include <stdio.h>

int main(int argc, char const *argv[])
{
	int c;
	c = (getchar() != EOF);

	printf("%d\n", c);

	return 0;
}
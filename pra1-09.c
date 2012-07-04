#include <stdio.h>

int main (int argc, char const *argv[])
{
	int c, space = 0;
	while ((c=getchar()) != EOF){
		if ((c == ' '))
			space = 1;
		else
			if (space == 1){
				putchar(' ');
				putchar(c);
				space = 0;
			}
			else
				putchar(c);
			
	}
	return 0;
}
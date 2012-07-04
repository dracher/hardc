#include <stdio.h>

int get_len(char s[]);

int main (int argc, char const *argv[])
{
	int i=0;
	int j=6;
	while (i!=j)
	{
		printf("%d, %d\n", i, j);
		i++;
		j--;
	}
	return 0;
}

int get_len(char s[])
{
	int i;
	i = 0;
	while (s[i]!='\0')
		i++;
	return i;
}
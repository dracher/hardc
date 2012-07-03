#include <stdio.h>

int get_len(char s[]);

int main (int argc, char const *argv[])
{
	char s[10] = "hello";
	printf("%d", get_len(s));
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
#include <stdio.h>

int get_len(char s[]);

int main (int argc, char const *argv[])
{
  int i;
  i += 2;
  printf("%d\n", i);
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
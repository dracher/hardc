#include <stdio.h>
/* need impove if need base on word to reverse the string*/
void reverse(char s[]);
int get_len(char s[]);

int main (int argc, char const *argv[])
{
	int c, i=0;
	char s[1000];
	while((c=getchar())!=EOF)
	{
		s[i] = c;
		i++;
		if (c == '\n')
		{
			s[i] = '\0';
			reverse(s);
			printf("%s\n", s);
			i = 0;
		}
	}
	return 0;
}

void reverse(char s[])
{
	int i = 0;
	int j;
	char tmp;
	int len;
	len = get_len(s);
	j = len-1;
	
	while (i!=j)
	{
		//printf("i is %c, j is %c.\n", s[i], s[j]);
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++;
		j--;
		if (i == j || (j-i) == 1)
			break;
	}
}

int get_len(char s[])
{
	int i = 0;
	while (s[i]!='\0')
	{
		i++;
	}
	return i;
}
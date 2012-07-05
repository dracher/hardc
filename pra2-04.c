#include <stdio.h>

void squeeze(char s[], char t[]);
int have_char(char c, char s[]);

int main (int argc, char const *argv[])
{
	char s1[100] = "hello";
	char s2[100] = "lo";
	printf("result is %d\n", have_char('z', s1));
	//squeeze(s1, s2);
	//printf("%s\n", s1);
	return 0;
}

void squeeze(char s[], char t[])
{
	int i, j, k;
	i = j = 0;
	for(i = 0; s[i]!='\0'; ++i)
	{
		if ()
		{
			;
		}
	}
	s[j] = '\0';
}

int have_char(char c, char s[])
{
	int i = 0;
	for(i = 0; s[i]!=EOF; ++i)
	{
		if (s[i]==c)
			return 1;
	}
	return 0;
}
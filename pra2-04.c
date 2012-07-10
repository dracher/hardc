#include <stdio.h>

void squeeze(char s[], char t[]);
int have_char(char c, char s[]);

int main (int argc, char const *argv[])
{
	char s1[100] = "abcdefg";
	char s2[100] = "de";
	squeeze(s1, s2);
	printf("%s\n", s1);
	return 0;
}

void squeeze(char s[], char t[])
{
	int i, j;
	i = j = 0;
	for(i = 0; s[i]!='\0'; ++i)
	{
		if (have_char(s[i], t))
			s[i] = s[++j];
		else
			s[i] = s[j++];
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
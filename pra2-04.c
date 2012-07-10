#include <stdio.h>

void squeeze(char s[], char t[]);
int have_char(char c, char s[]);
void squeezz1(char s[], char t[], char tmp[]);

int main (int argc, char const *argv[])
{
	char s1[100] = "abc1dd1dd";
	char s2[100] = "1d";
	char s3[100];
	//printf("result is %d\n", have_char('z', s1));
	squeezz1(s1, s2, s3);
	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("%s\n", s3);
	return 0;
}

void squeeze(char s[], char t[])
{
	int i, j;
	i = j = 0;
	for(i = 0; s[i]!='\0'; ++i)
	{
		if (have_char(s[i], t))
		    s[i--] = s[++j];
		else
		    j = i;
	}
	s[j] = '\0';
}

void squeezz1(char s[], char t[], char tmp[])
{
    int i, k;
    k = 0;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (have_char(s[i], t))
            ;
        else
            tmp[k++] = s[i];  
    }
    tmp[k] = '\0';
}

int have_char(char c, char s[])
{
	int i = 0;
	for(i = 0; s[i]!='\0'; ++i)
	{
		if (s[i]==c)
			return 1;
	}
	return 0;
}

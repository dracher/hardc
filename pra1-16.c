#include <stdio.h>
#define MAXLINE 5

int getline(char line[], int maxline);
void copy(char to[], char from[]);

int main (int argc, char const *argv[])
{
	char line[MAXLINE];
	char longest[MAXLINE];
	char temp[MAXLINE];
	int len, max, premax, getmore;
	
	max = premax = getmore = 0;
	while ((len = getline(line, MAXLINE)) > 0)
	{
		if (line[len - 1] != '\n')
		{
			if (getmore == 0)
				copy(temp, line);
			premax += len;
			if (max < premax)
				max = premax;
			getmore = 1;
		}
		else
		{
			if (getmore == 1)
			{
				if (max < premax + len)
				{
					max = premax + len;
					copy(longest, temp);
					longest[MAXLINE - 2] = '\n';
				}
				getmore = 0;
			}
			else if (max < len)
			{
				max = len;
				copy(longest, line);
			}
			premax = 0;
		}
	}
	if (max > 0)
	{
		printf("%s", longest);
		printf("len = %d\n", max);
	}
	return 0;
}

int getline(char s[], int lim)
{
	int c, i;
	for(i = 0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
		s[i] = c;
	if (c == '\n'){
		s[i] = c;
		++i;
	}
	else if (c == EOF && i > 0)
	{
		s[i] = '\n';
		++i;
	}
	s[i] = '\0';
	return i;
}

void copy(char to[], char from[])
{
	int i;
	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}
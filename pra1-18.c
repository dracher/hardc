#include <stdio.h>
#define MAXLINE 1000
int main (int argc, char const *argv[])
{	
	char line[MAXLINE];
	int ret;
	while ((ret=getline(line)) > 0)
	{
		printf("old is %d\n", get_len(line));
		int i;
		i = ret-2;
		for (i;i>-1;i--)
		{
			if (line[i] == ' ' || line[i] == '\t')
			{
				line[i] = '\n';
				line[i+1] = '\0';
			}
			else if (i == 0  && (line[i] == ' ' || line[i] == '\t'))
			{
				line[i] = '\0';
			}
			else
				break;

		}
		printf("new is %d\n", get_len(line));
	}
	return 0;
}

int getline(char s[])
{
	int i, c;
	i = c = 0;
	for(i = 0; i < 1000 && ((c=getchar())!=EOF); ++i)
	{
		s[i] = c;
		if (c == '\n')
		{
			//printf("i am here");
			s[i] = c;
			++i;
			s[i] = '\0';
			return i;
		}
	}
}

int get_len(char s[])
{
	int i;
	i = 0;
	while (s[i]!='\0')
		i++;
	return i;
}
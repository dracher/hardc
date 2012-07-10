#include <stdio.h>

void escape(char s[], char t[]);
void escape2(char s[], char t[]);
void pstr(char s[]);

int main (int argc, char const *argv[])
{
	char s[100];
	char t[100] = "abcde";
	//pstr(t);
	escape2(s, t);
	//printf("%s\n", s);
	return 0;
}

void escape(char s[], char t[])
{
	int i, j;
	i = j = 0;
	while(t[i]!='\0')
	{
		switch (t[i]){
			case '\t':
				s[j++] = '{';
				s[j++] = '\\';
				s[j++] = 't';
				s[j++] = '}';
				++i;
				break;
			case ' ':
				s[j++] = '{';
				s[j++] = '\\';
				s[j++] = 's';
				s[j++] = '}';
				++i;
				break;
			case '\n':
				s[j++] = '{';
				s[j++] = '\\';
				s[j++] = 'n';
				s[j++] = '}';
				++i;
				break;
			default:
				s[j++] = t[i++];
				break;
		}
		
	}
	s[j] = '\0';	 
}

void escape2(char s[], char t[])
{
	;
}
void pstr(char s[]){
	int i = 0;
	while(s[i]!='\0')
		printf("%c", s[i++]);
	printf("%d\n", i);
}
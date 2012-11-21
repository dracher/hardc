#include <stdio.h>

#define MAX_WORD_LEN 20

int main (int argc, char const *argv[])
{
	int c;
	int len;
	int inword;
	int word_len_count[MAX_WORD_LEN];

	for (int i = 0; i < MAX_WORD_LEN; ++i)
		word_len_count[i] = 0;

	inword = 0;
	len = 0;
	
	while ((c=getchar()) != EOF){
		if (c == ' ' || c== '\t' || c == '\n' || c == ',' || c == '.' || c == '!') {
			if (inword == 0)
				;
			else {
				++word_len_count[len];
				len = 0;
				inword = 0;
			}
		}
		else {
			inword = 1;
			len++;
		}
	}
	for (int i = 0; i < MAX_WORD_LEN; ++i)
	{
		printf("Len %2d: ", i);
		for (int j = 0; j < word_len_count[i]; ++j)
			printf("*");
		printf("\n");
	}

	return 0;
}
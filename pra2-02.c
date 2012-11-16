#include <stdio.h>

int main (int argc, char const *argv[])
{
	// for (i=0; i<lim-1 && (c=getchar()) != '\n' && c != EOF; ++i)
	//    s[i] =c;
	int c;
	while (i<lim-1){
		c = getchar();
		if (c == '\n')
			break;
		else if (c == EOF)
			break;
		s[i++] = c;
	}
	s[i] = c;
	return 0;
}
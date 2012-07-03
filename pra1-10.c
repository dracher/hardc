#include <stdio.h>

int main (int argc, char const *argv[])
{
	int c;
	while ((c=getchar()) != EOF){
		if (c == '\t'){
			putchar('\\');
			putchar('t');}
		else if (c == '\\')
			putchar('\\');
		else if (c == '\b'){ //need see the stand answer;
			putchar('\\');
			putchar('b');}
		else
			putchar(c);
	}
	return 0;
}
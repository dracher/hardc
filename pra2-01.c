#include <stdio.h>
#include <limits.h>
#include <string.h>

int main (int argc, char const *argv[])
{
	printf("Size of Char %d\n", CHAR_BIT);
	printf("Size of Char Max %d\n", CHAR_MAX);
	printf("Size of Char Min %d\n", CHAR_MIN);
	printf("Size of int min %d\n", INT_MIN);
	printf("Size of int max %d\n", INT_MAX);
	printf("Size of long min %ld\n", LONG_MIN);
	printf("Size of long max %ld\n", LONG_MIN);
	printf("Size of short min %d\n", SHRT_MIN);
	printf("Size of short min %d\n", SHRT_MIN);
	printf("Size of unsigned char %u\n", UCHAR_MAX);
	printf("Size of unsigned long %lu\n", ULONG_MAX);
	printf("Size of unsigned int %u\n", UINT_MAX);
	printf("Size of unsigned short %u\n", USHRT_MAX);
	
	return 0;
}
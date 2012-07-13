#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAXWORD 100

int getword(char *, int);
int binsearch(char *, struct key *, int);

int main (int argc, char const *argv[])
{
  int n;
  char word[MAXWORD];
  
  while (getword(word, MAXWORD) != EOF)
    if (isalpha(word[0]))
      if ((n = binsearch(word, keytab, NKEYS)) >= 0)
      keytab[n].count++;
    for (n = 0; n < NKEYS; n++)
      if (keytab[n].count > 0)
        printf("%4d %s\n",
        keytab[n].count, keytab[n].word);
  return 0;
}

int binsearch(char *word, struct key tab[], int n){
  int cond;
  int low, high, mid;
  
  low = 0;
  high = n - 1;
  while (low <= high) {
    mid = (low+high) / 2;
  }
}
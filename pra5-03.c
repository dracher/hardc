#include <stdio.h>

void strcat_0(char s[], char t[]){
  int i, j;
  
  i = j = 0;
  while (s[i] != '\0')
    i++;
  while ((s[i++] = t[j++]) != '\0')
    ;
}

void strcat_1(char *s, char *t){
  while (*s++ != '\0'){
    ;
  }
  
  while (*t != '\0'){
    
   *s++ = *t++;
    printf("%c\n", *s);
    ;
  }
  *s = '\0';
}

int main (int argc, char const *argv[])
{
  char s[1000] = "hello world";
  char t[1000] = " again";
  strcat_1(s, t);
  printf("%s\n", s);
  return 0;
}
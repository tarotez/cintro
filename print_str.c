#include <stdio.h>
#include <stdlib.h>

int strLength(char *str){
  int n = 0;
  while(*str != '\0'){
    str++;
    n++;
  }
  return n;
}

int main(){
  int maxLength = 100;
  char* s = (char*)malloc(sizeof(char) * maxLength);
  printf("Please type in a word.\n");
  scanf("%s", s);
  printf("The length of \"%s\" is %d.\n", s, strLength(s));
}

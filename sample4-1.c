// sample 4-1
#include <stdio.h>
#include <stdlib.h>

int main(){
  FILE *fp;
  int c;

  fp = fopen("english.txt", "r");

  if(fp == NULL){
    printf("file could not be opened.\n");
    return;
  }

  while(1){
    c = getc(fp);
    if(feof(fp)){
      break;
    }
    if(ferror(fp)){
      printf("stream error.\n");
      break;
    }
    putc(c, stdout);
  }
}

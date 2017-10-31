// sample 3-1
#include <stdio.h>
#include <stdlib.h>

struct person {
  char name[30];
  char address[40];
  int birthyear;
};

int main(){
  int i;
  struct person friends[3];

  for(i = 0; i < 3; i++){
    printf("What is the name of friend #%i?\n", i);
    scanf("%s", friends[i].name);
    printf("What is the address of %s?\n", friends[i].name);
    scanf("%s", friends[i].address);
  }
    printf("\n");
    for(i = 0; i < 3; i++){
    printf("Friend #%d: %s, ", i, friends[i].name);
    printf("lives in %s\n", friends[i].address);
  }
}

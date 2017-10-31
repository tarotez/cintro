// Sample 1-3
#include <stdio.h>
int main(){
  char name[20];
  int stdid;
  printf("What's your name?\n");
  scanf("%s", name);
  printf("What is your student ID?\n");
  scanf("%d", &stdid);
  printf("Welcome, %s (student ID:%d)!", name, stdid);
}

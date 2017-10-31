// sample 3-3
#include <stdio.h>
#include <stdlib.h>
typedef struct person {
	char name[30];
	char address[40];
	int birthyear;
} personData;

int main(){
int i;
personData *friends, *addressbook;
friends = (personData*)malloc(sizeof(personData)*3);
addressbook = friends;
for(i = 0; i < 3; i++){
  printf("What is the name of friend %i?\n", i);
  scanf("%s", (*friends).name);
  printf("What is the address of %s?\n", (*friends).name);
  scanf("%s", (*friends).address);
  friends++;
}
printf("\n");
friends = addressbook;
for(i = 0; i < 3; i++){
  printf("Friend %d: %s, ", i, (*friends).name);
  printf("lives in %s\n", (*friends).address);
  friends++;
}
}


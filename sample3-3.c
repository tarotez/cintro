// sample 3-3
#include <stdio.h>
#include <stdlib.h>
typedef struct person {
	char name[30];
	char email[40];
	int birthyear;
} personData;

int main(){
int i;
personData *friends, *emailbook;
int friendsNum = 3;
friends = (personData*)malloc(sizeof(personData) * friendsNum);
emailbook = friends;
for(i = 0; i < 3; i++){
  printf("What is the name of friend %i?\n", i);
  scanf("%s", (*friends).name);
  printf("What is the email address of %s?\n", (*friends).name);
  scanf("%s", (*friends).email);
  friends++;
}
printf("\n");
friends = emailbook;
for(i = 0; i < 3; i++){
  printf("Friend %d: %s, ", i, (*friends).name);
  printf("lives in %s\n", (*friends).email);
  friends++;
}
}

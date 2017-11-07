// prints out ascii characters
#include <stdio.h>
int main(){
  for(int i = 0; i < 128; i++){
    char c = (char)i;
    printf("%d (%x) : %c\n", c, c, c);
  }
}

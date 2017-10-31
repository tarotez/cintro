// sample 1-7
#include <stdio.h>
int main(){
    int n = 10;
    int res = series(n);
    printf("the sum of 1 to %d is %d", n, res);
}

int series(int a){
  if(a <= 0){
    return 0;
  }else{
    return a + series(a-1);
  }
}

// sample 2-1
#include <stdio.h>
#include <stdlib.h>
int main(){
        int a, *p;

        a = 10;
        printf("a: %d\n", a);
        printf("&a: %p\n\n", &a);

        p = &a;
        printf("p: %p\n", p);
        printf("*p: %d\n", *p);
        printf("&p: %p\n\n", &p);

        a = 20;
        printf("a: %d\n", a);
        printf("&a: %p\n\n", &a);

        printf("p: %p\n", p);
        printf("*p: %d\n", *p);
        printf("&p: %p\n", &p);
}

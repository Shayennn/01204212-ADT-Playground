#include <stdio.h>

void main(){
    int *test;
    int wow;
    test = &wow;
    wow = 50;
    printf("Pointer: %d\n", test);
    printf("Val: %d\n", *test);
    return 0;
}

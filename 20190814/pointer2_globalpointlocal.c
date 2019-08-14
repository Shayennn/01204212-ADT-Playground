#include <stdio.h>

int *iPtr;

void getnum(){
    int number;
    printf("Enter number: ");
    scanf("%d", &number);
    iPtr = &number;
}

void replacenum(){
    int x = -1;
}

int main(){
    // printf("B iPtr: %d\n", *iPtr);
    printf("iPtr: %p\n", iPtr);
    getnum();
    printf("B *iPtr: %d\n", *iPtr);
    printf("B iPtr: %p\n", iPtr);
    replacenum();
    printf("A *iPtr: %d\n", *iPtr);
    printf("A iPtr: %p\n", iPtr);
    return -1;
}

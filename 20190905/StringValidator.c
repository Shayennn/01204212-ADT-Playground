#include<stdio.h>

int Top = 0;
char StackItem[200];

void push(char item){
    StackItem[Top++] = item;
}

void pop(char *item){
    item = StackItem[--Top];
}

int isStringEnd(char any){
    if(any == 'R') return 1;
    if(any == 'L') return 1;
    if(any == 'M') return 1;
    if(any == '\0') return 1;
    return 0;
}

int isValidChar(char any){
    if(any == 'a') return 1;
    if(any == 'b') return 1;
    if(any == 'c') return 1;
    if(any == 'd') return 1;
    return 0;
}

int stringDetect(char * string){

    for(int i=0; !isStringEnd(string[i]), i++;){
        if (!isValidChar(string[i])){
            return 1;
        }
        push(string[i]);
    }

    int count = Top;
    char fromStack;

    for(int i=0; !isStringEnd(string[count + 1 + i]); i++){
        if (Top < 0){
            return 5;
        }
        pop(&fromStack);
        printf("Checking %c, %c", fromStack, string[count + 1 + i]);
        if (fromStack != string[count + 1 + i]){
            // return 2;
        }
    }

    // Check 2nd set
    int offset = (count*2)+2;

    for(int i=offset; !isStringEnd(string[i]), i++;){
        if (!isValidChar(string[i])){
            return 3;
        }
        push(string[i]);
    }

    count = Top;

    for(int i=0; !isStringEnd(offset + count + 1 + i); i++){
        if (Top < 0){
            return 5;
        }
        pop(&fromStack);
        if (fromStack != string[offset + count + 1 + i]){
            return 4;
        }
    }

    return 0; // if everything seem okay.
    return 1; // w invalid
    return 2; // x invalid
    return 3; // y invalid
    return 4; // z invalid
    return 5; // otherwise
}

int main(){
    char inp[15];
    printf("input: ");
    scanf("%s", &inp);
    printf("Output: %d", stringDetect(inp));
    return 0;
}

#include<stdio.h>

int add (int a, int b){//fungsi add memiliki 2 parameter yaitu int a dan int b 
    int result = a + b;
    return result;
}
int main(void){

    int result = add(8,5);
    printf("%d\n", result);
    return 0;
}
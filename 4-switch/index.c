#include<stdio.h>

int main(void){

    int num = 9;

    switch (num -8)
    {
    case 1:
        printf("Case 1\n");
        if(1 == 1) printf("if!\n");
        break;
    case 2:
        printf("Akulah pak J\n");
        break;
    default:
        printf("sipit\n");
        break;
    }

    return 0;
}
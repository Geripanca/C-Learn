#include<stdio.h>

int main(void){

    // int x = 4;

    // if (x == 2)
    // {
    //     printf("the number %d is equal to 2\n", x);
    // }
    // else if (x == 3){
    //     printf("the number %d is equal to 3\n", x);
    // }
    // else if(x == 4) printf("the number %d is equal to 4\n", x);
    // else
    // {
    //     printf("the number %d is not equal to 2\n", x);
    // }
    // printf("conditional is done!\n");

    int x = 5;

    if (x<4) printf("1st cond\n");
    else if (x<5) printf("2nd cond\n");
    else if (x<6) printf("3rd cond\n");
    else if (x<7) printf("4rd cond\n");
    else printf("not equal anything");

    printf("conditional done!");
    return 0;
}
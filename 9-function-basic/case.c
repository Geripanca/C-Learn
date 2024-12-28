#include<stdio.h>

//declaration a function
int add(int a, int b);
int mul(int x, int y);

//main
int main(void){
    int output = add(8,5);
    int mulout = mul(8,5);
    printf("the output is %d\n", output);
    printf("the output is %d\n",mulout);
    return 0;
}

//definition a function
int add(int a, int b){
    int result = a + b;
    return result;
}

int mul(int x, int y){
    int result = 0;
    for (int i = 0; i < x; ++i) {
        result = add(result,y);//memanggil fungsi di dadalam fungsi
    }
    return result;
}
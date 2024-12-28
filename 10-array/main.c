#include<stdio.h>
/*


grade array

index: 0    1   2   3   4
values: 91  88  87  87  77

 */
int main(void){

    int grade[5] = {91, 88, 87, 87, 77};

    for (int i = 0; i < 5; i++){
        printf("the grade-[%d] is %d\n", i, grade[i]);
    }
    return 0;
}
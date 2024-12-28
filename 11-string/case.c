// hitung jumlah huruf a atau A dalam string Johannes Sipit

#include<stdio.h>
#include<string.h>

int main(void){
    char str[] = "Johannes Sipit";
    int length = strlen(str);
    int count_a = 0;

    for (int i = 0; i < length; i++){
        if (str[i] == 'a' || str[i]== 'A'){
            count_a++;
        }
    }
    printf("Jumlah huruf a adalah %d\n", count_a);
}
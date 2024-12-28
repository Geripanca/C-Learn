#include<stdio.h>
#include<string.h> //library untuk memanggil strlen

int main(void){
    
    char name[20] = "Tampan sipit";
    char text[]="aku dari cina";
    char mystring[] ="some string";

    printf("%s\n", name);
    printf("%s\n",text);
    int length = strlen(mystring); //strlen ada fungsi untuk menghitung panjang string bawaan
    printf("length : %d\n", length);
    return 0;
}
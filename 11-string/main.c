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

    // penggunaan strcpy
    char str1[] = "tampan-tampan masuk";
    char str2[50];

    if (strncpy(str2, str1, sizeof(str2)) == str2) {
        printf("%s\n", str2);
        printf("nasiuduk\n");
    } else {
        printf("Error: tidak dapat menyalin string\n");
    }
    return 0;
}
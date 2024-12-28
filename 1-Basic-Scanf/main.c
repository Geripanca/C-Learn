#include <stdio.h>


int main(void){

    //basic scanf
    // int n1, n2, n3;
    // n1 = n2 = n3 = 0;
    // printf("Enter n1 n2 n3 : ");
    // scanf("%d %d %d", &n1, &n2, &n3);
    // printf("%d \n", n1+n2+n3);

    //string scanf
    char nama[50];
    printf("Masukan nama anda : ");
    scanf("%s", nama);
    printf("nama anda adalah  %s\n", nama);
    return 0;
}
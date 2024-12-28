#include <stdio.h>

int main(void){
    
    int month;

    printf("Masukan angka 1 - 12 : \n");
    scanf("%d", &month);

    printf("-------------------------------------\n");
    switch (month)
    {
    case 0: 
        printf("Tidak ada bulan 0\n");
        break;
    case 1:
        printf("Bulan 1 adalah Januari\n");
        break;
    case 2:
        printf("Bulan 2 adalah Febuari\n");
        break;
    case 3: 
        printf("Bulan 3 adalah Maret\n");
        break;
    case 4: 
        printf("Bulan 4 adalah April\n");
        break;            
    case 5: 
        printf("Bulan 5 adalah Mei\n");
        break;
    case 6: 
        printf("Bulan 6 adalah Juni\n");
        break;
    case 7: 
        printf("Bulan 7 adalah Juli\n");
        break;        
    case 8:
        printf("Bulan 8 adalah Agustus\n");
        break;
    case 9: 
        printf("Bulan 9 adalah September\n");
        break;    
    case 10: 
        printf("Bulan 10 adalah Oktober\n");
        break;    
    case 11: 
        printf("Bulan 11 adalah November\n");
        break;
    case 12: 
        printf("Bulan 12 adalah Desember\n");
        break;
    default:
        printf("inputan anda tidak valid\n");
        break;
    }

    return 0;
}
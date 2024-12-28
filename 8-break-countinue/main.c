#include <stdio.h>

int main(void){

    int i = 0;

    while(i < 10){
        i++;
        if (i == 8) continue; //continue akan melewati kondisi i = 8
        printf("Nasi uduk ke-%d\n", i);

        // if(i == 6) break; mengehentikan perulangan saat mencapai kondisi i = 6
        
    }
    printf("perulangan berhenti\n");
    return 0; 
}
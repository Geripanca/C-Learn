#include <stdio.h>
/* 

---- or operatir ----
x       y       x || y
True    True    True
True    False   True
False   True    True
False   False   False

---- and operatir ----
x       y       x && y
True    True    True
True    False   False
False   True    False
False   False   False

--- not operator ---
x       !x
True    False
False   True

---

*/

int main(void){


    int year = 2018;
    int price = 3000;

    //menggunakan and operator
    if (year <= 2018 && price < 3000) printf("Is Okay!\n"); //conditional false
    else printf("Is Not Okay!\n");

    //menggunakan or operator
    if (year <= 2018 || price < 3000) printf("Is Okay!\n"); //conditional true
    else printf("Is Not Okay!\n");




    return 0;
}
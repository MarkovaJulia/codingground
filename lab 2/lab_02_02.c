#include <stdio.h>
void main(){
    int i=0,
    j=0;
    for (i=2; i<5; i++) {
        printf("Цикл for: i = %d \n", i);
    }
    i=0;
    while (i<6 && j==0){
        printf("Цикл while: i = %d \n",i);
        i=i+1;
    }
    i=0;
    do{
        printf("Цикл do: i = %d \n",i);
        i++;
    } while (i<4);
}
#include <stdio.h>
void main(){
    int a=10,
    b=4,
    c=90;
    if (a==3){
        printf("Значение переменной a равно трем.\n");
    }
    if (b>0 && (c%a==0)){
        printf("Значение переменной b положительное. Значение переменной c кратно %d.\n",a);
    }
    else{
        printf("Значение переменной b меньше либо равно нулю или значение переменной c не кратно %d.\n",a);
    } 
    if(b%10==0){
        printf("Число %d кратно 10.\n",b);
    }
    else if (b%2==0){
        printf("Число %d кратно 2.\n",b);
    }
    else {
        printf("Значение числа b не кратно 2 и 10. \n");
    }
    int place=2;
    switch(place){
        case 1: 
            printf("Первое место! \n");
        case 2:
            printf("Второе место! \n");
            break;
        case 3:
            printf("Третье место! \n");
            break;
        default:
        printf("Вы не заняли призового места.\n");
    }
}


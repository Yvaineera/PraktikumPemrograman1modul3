#include <stdio.h>

void main(){
    int a;

    scanf("%d", &a);

    if(a > 0 && a < 10){printf("Satuan");}
    else if(a >= 10 && a < 20){printf("Belasan");}
    else if(a >= 20 && a < 100){printf("Puluhan");}
    else if(a > 99){printf("Anda Menginput Melebihi Limit Bilangan");}
    else if(a == 0){printf("nol");}
}
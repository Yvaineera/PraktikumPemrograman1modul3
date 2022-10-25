#include <stdio.h>

void main(){
    int a, h, j, m, d, sh, sj;

    scanf("%d", &a);
    h = a / 86400;
    sh = a % 86400;
    j = sh / 3600;
    sj = a % 3600;
    m = sj / 60;
    d = a % 60;

    if(a >= 86400){printf("%d hari %.2d:%.2d:%.2d", h, j, m, d);}
    else if(a >= 3600 && a <= 86399){printf("%.2d:%.2d:%.2d", j, m, d);}
    else if(a >= 60 && a <= 3599){printf("00:%.2d:%.2d", m, d);}
    else if(a <= 59){printf("00:00:%.2d", d);}
}
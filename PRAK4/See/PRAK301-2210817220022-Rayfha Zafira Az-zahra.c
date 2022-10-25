#include <stdio.h>

void main(){
    int x, y, z;

    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    if(x<y && y<z){printf("%d %d %d", x, y, z);}
    else if(y<z && z<x){printf("%d %d %d", y, z, x);}
    else if(z<x && x<y){printf("%d %d %d", z, x, y);}
    else if(x<z && z<y){printf("%d %d %d", x, z, y);}
    else if(y<x && x<z){printf("%d %d %d", y, x, z);}
    else if(z<y && y<x){printf("%d %d %d", z, y, x);}
}
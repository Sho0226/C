#include <stdio.h>

int imax (int a,int b,int c){
    int max = a;
    if (b > max){
        max = b;
    }
    if (c > max){
        max = c;
    }
    return max;
}

int main (){

    int x,y,z,max_num;
    printf("X=");
    scanf("%d",&x);

    printf("Y=");
    scanf("%d",&y);

    printf("Z=");
    scanf("%d",&z);

    max_num = imax(x,y,z);

    printf("%d\n",max_num);

    
}
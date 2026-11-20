// https://www.codechef.com/problems/MVR

#include <stdio.h>

int main(){
    
    int A,B,X,Y;
    scanf("%d%d%d%d",&A,&B,&X,&Y);

    int M = A*2 + B*1;
    int R = X*2 + Y*1;
    
    if (M>R)
    {
        printf("Messi");
    }
    else if (R>M)
    {
        printf("Ronaldo");
    }
    else
    {
        printf("Equal");
    }

    return 0;
}
// Given N, print whether the number is even or odd

#include <stdio.h>

int main(){
    int N;
    scanf("%d",&N);

    if (N % 2 == 0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
    
    return 0;
}
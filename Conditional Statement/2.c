// Given a number N, print whether N is positive or negative

#include <stdio.h>

int main(){
    int N;
    scanf("%d",&N);

    if (N > 0)
    {
        printf("Positive");
    }
    else
    {
        printf("Negative");
    }
    
    return 0;
}
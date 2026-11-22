// print Sum of N number using For Loop 

#include <stdio.h>
int main(){
    
    int N;
    scanf("%d",&N);

    int sum = 0;

    for (int i = 0 ; i <= N ; i++)
    {
        sum += i;
    }
    
    printf("Sum : %d", sum);

    return 0;
}
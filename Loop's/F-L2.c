// Print sum of Even Number

#include <stdio.h>
int main(){
    
    int N;
    scanf("%d",&N);

    int sum = 0;
    
    for (int i = 0; i <= N; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;         
        }
        
    }

    printf("Sum of odd Number : %d\n",sum);
    return 0;
    
}
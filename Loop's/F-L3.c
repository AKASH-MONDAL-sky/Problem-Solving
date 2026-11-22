// The number whose have last digit 0,1,4 print those number (Take Input 2 digit number)

#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);

    for (int i = 0; i <= N; i++)
    {
        if (i % 10 != 0 && i % 10 != 1 && i % 10 != 4)
        {
            continue; 
        }
        
        printf("%d\n",i);
    }

    return 0;
}
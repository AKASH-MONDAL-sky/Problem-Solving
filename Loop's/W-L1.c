// Print 1 to N number useing While Loop

#include <stdio.h>

int main(){

    int N;
    scanf("%d",&N);

    int count = 1;

    while (count <= N )
    {
        printf("%d\n",count);
        
        count ++;
    }

    printf("Count Finish");

    return 0;
}
// print Even Number using While Loops

#include <stdio.h>
int main(){

    int N;
    scanf("%d",&N);

    int i = 1;

    while (i <= N)
    {
        printf("Odd Number's are : %d\n", i);
        
        i += 2;
    }

    printf("The Value Of i : %d \n",i);
    
    return 0;
    
}
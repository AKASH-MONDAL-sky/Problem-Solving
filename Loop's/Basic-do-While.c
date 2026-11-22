// Basic Code of do while

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    do
    {
        printf("N : %d\n",n);
        n--;
    } while (n > 0);
    
    return 0;
}
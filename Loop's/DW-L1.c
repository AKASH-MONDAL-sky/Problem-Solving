// Take input from user, if the number is between 1 to 10 then print sum of all number and if the number is larger than 10 then print number is larger

#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);


    int sum = 0;

    do
    {
        if (N > 10 )
        {
            printf("The number is Larger");
            break;
        }
        else
        {
            printf("%d\n",N);
            N--;
        }
        sum += N;
        
        
    } while (N < 10 && N > 0);

    printf("Sum : %d",sum);

    return 0;
}
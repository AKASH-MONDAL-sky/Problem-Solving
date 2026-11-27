// Given N and N integers, print the integers of the even indices.

#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);

    int arr[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d",&arr[i]);
    }
   
// 1st way to solve

    // for (int i = 0; i < N; i+=2)
    // {
    //     printf("%d\n",arr[i]);
    // }

    
// 2nd solve way to solve 


    for (int i = 0; i < N; i++)
    {
        if(i%2==0){
            printf("%d\n",arr[i]);
        }
    }

    return 0;
}
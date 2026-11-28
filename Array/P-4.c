// https://atcoder.jp/contests/abc368/tasks/abc368_a

#include <stdio.h>
int main(){
    int n,k;
    scanf("%d%d",&n,&k);

    int arr[n];
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    // start a loop from n-k to n-1 -> for print down part of the array
    for (int i = n-k; i <= n-1; i++)
    {
        printf("%d ", arr[i]);
    }
    


    return 0;
}
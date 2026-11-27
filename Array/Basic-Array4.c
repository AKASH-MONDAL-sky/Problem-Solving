// Array input using loop and print using loop

#include <stdio.h>
int main(){
    
    int n;
    scanf("%d",&n);

    int arr[n];

    // take array input using loop
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    // print that array
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",arr[i]);
    }
    
    return 0;
}
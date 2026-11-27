// print array using loop

#include <stdio.h>
int main(){

    int arr[3];

    arr[0]=3;
    arr[1]=6;
    arr[2]=9;

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
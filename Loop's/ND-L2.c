// X*Y mult table

#include <stdio.h>
int main(){
    
    int N;
    scanf("%d",&N);

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            printf("%d ",i*j); // 1st row mult by 1, 2nd row mult by 2, 3rd row mult by 3
        printf("\n");
    }
    return 0;
}
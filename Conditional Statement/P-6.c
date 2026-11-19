//https://atcoder.jp/contests/abc326/submissions/80930950

#include <stdio.h>
int main(){
    int X,Y;
    scanf("%d%d",&X,&Y);

    if (X >= Y)
    {
        if (X - Y <= 3)
        {
            printf ("Yes\n");
        }
        
        else
        {
            printf ("No\n");
        }
        
    }
    
    else
    {
        if (Y - X <= 2)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
        
    }
    return 0;
}
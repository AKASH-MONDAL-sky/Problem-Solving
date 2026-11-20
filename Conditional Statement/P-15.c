// https://www.codechef.com/problems/ONEFULPAIRS

#include <stdio.h>

int main(){

    int a, b;
    scanf("%d %d", &a, &b);
    
    int Eq = a + b + (a*b);
    
    if(Eq == 111){
        printf("YES");
    }
    else{
        printf("NO");
    }
    
    return 0;
}
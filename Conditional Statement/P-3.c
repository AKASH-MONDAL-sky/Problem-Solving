//https://www.codechef.com/problems/OCTATHON
#include <stdio.h>

int main() {
    int X;
    scanf("%d",&X);
    if(X>=0 & X<3){
        printf("GOLD");
    }
    else if(X>=3 & X<6){
        printf("SILVER");
    }
    else{
        printf("BRONZE");
    }

    return 0;
}

//  https://www.codechef.com/problems/SUNNYDAY

#include <stdio.h>

 int main() {
    
    int T;
    scanf("%d",&T);
    
    while(T--){
        
        int X;
        scanf("%d",&X);
        
        if(X > 24){
            printf("YES\n");
        }
        
        else{
            printf("NO\n");
        }
    }
    
    return 0;

}
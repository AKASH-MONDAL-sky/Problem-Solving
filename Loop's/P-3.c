// https://www.codechef.com/problems/IPLTRSH

// solve : 1st type

#include <stdio.h>

int main() {
    
    int T;
    scanf("%d",&T);
    
    while(T--){
        
        int N,M;
        scanf("%d%d",&N,&M);
        
        int R = N-M;
        
        if(R > 0){
            printf("%d\n",R);
        }
        
        else{
            
            int P = R * 0;
            
            printf("%d\n",P);
        }
    
    }

    return 0;
    
}


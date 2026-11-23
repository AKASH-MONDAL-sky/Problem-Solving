// https://www.codechef.com/problems/IPLTRSH

// solve : 1st type

/*
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

*/

#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int n, m;
        scanf("%d %d", &n, &m);

        if(m >= n){
            printf("0\n");
        }
        else {
            int ans = n - m;
            printf("%d\n", ans);
        }
    }

    return 0;
}
// https://www.codechef.com/problems/DNATION

#include <stdio.h>

int main() {

    int T;
    scanf("%d",&T);
    
    while(T--){
        
        int X,Y;
        scanf("%d%d",&X,&Y);
        
        if(X > Y){
            continue; 
            // continue -> when compiler see continue then compiler do not compile remaining part of code
            }
        else{
            
            int Donate = Y - X ;
            printf("%d\n",Donate);
        }
    }
    
    return 0;

}

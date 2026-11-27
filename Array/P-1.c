// https://atcoder.jp/contests/abc284/tasks/abc284_b

#include <stdio.h>
int main(){
  
  int T;
  scanf("%d",&T);
  
  while(T--){
    
    int N;
    scanf("%d",&N);
    
    int arr[N];
    
    for(int i = 0 ; i < N ; i++){
      scanf("%d",&arr[i]);
    }
  
    int count = 0;
    for(int i = 0 ; i < N ; i++){
      if(arr[i] % 2 == 1){
        count ++;
      }
    }
    printf("%d\n",count);
  }
  return 0;
}
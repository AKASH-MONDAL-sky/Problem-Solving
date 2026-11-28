// https://atcoder.jp/contests/abc290/submissions/me

#include <stdio.h>
int main(){
  int N,M;
  scanf("%d%d",&N,&M);
  int arr[N];
  
  for(int i=1; i<=N;i++){ // 1 based indexing that's why i start from 1;
    scanf("%d",&arr[i]);
  }
  
  int ans = 0;
  
  for(int i=1;i<=M;i++){// 1 based indexing that's why i start from 1; 
    int choose;
    scanf("%d",&choose);
    ans += arr[choose]; 
    // for using 1 based indexing : ans += arr[choose], if we use o base indexing then : ans += arr[choose-1] => because in 0 base indexing array start from 0 and go to n-1 
  }
  printf("%d\n",ans);
  return 0;
}
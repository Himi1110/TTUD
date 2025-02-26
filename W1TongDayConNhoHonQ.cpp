#include <bits/stdc++.h>

using namespace std;

int main(){
  int res = 0, L = 0,S = 0,n,Q;
  cin >> n >> Q;
  int arr[n];

  for(int i = 0;i < n;i++){
    cin >> arr[i];
  }

  for(int R = 0;R < n;R++){
    S = S + arr[R];
    while(S > Q){
      S = S - arr[L];
      L++;
    }
    res = max(res,R-L+1);
  }

  cout << res;
  return 0;
}
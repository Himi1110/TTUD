#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin >> n;
  int arr[n];
  vector<int> input(n);

  for(int i = 0;i < n;i++){
    cin >> input[i];
  }

  arr[0] = input[0]; 

  for(int i = 1;i < n;i++){
    arr[i] = arr[i-1] + input[i];
  }

  int a,b;
  while (cin >> a >> b){
    cout << arr[b] - arr[a] + input[a] << endl;
  }
  
}
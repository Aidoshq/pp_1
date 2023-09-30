#include<bits/stdc++.h>

#define ll long long

using namespace std;


int n;
int a[100100];
int L[100100];
int R[100100];
vector<int> q;

int main(){
 cin >> n;
 for(int i = 0; i < n; i++)
  cin >> a[i];
 for(int i = 0; i < n; i++){
  while(q.size() > 0 && a[q.back()] >= a[i])
   q.pop_back();
  if(q.size() > 0)
   L[i] = q.back()+1;
  else L[i] = 0;
   q.push_back(i);
 }
 q.clear();
 for(int i = n-1; i >= 0; i--){
  while(q.size() > 0 && a[q.back()] >= a[i])
   q.pop_back();
  if(q.size() > 0) R[i] = q.back()-1;
  else R[i] = n-1;
  q.push_back(i);  
 }
 ll ans = 0;
 for(int i = 0; i < n; i++)
  ans = max(ans,a[i] * 1ll * (R[i] - L[i] + 1));
 cout << ans << endl;
 q.clear();
 return 0;
}
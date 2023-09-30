#include <bits/stdc++.h>

using namespace std; 
int main(){ 
 map<int,double> a; 
 int n; 
 cin>>n; 
 int t1,t2,f,cr; 
 double sum = 0; 
 for(int i = 0;i<50;i++){ 
  a[i] = 0; 
 } 
 double cnt = 1.0; 
 for(int i = 50;i<100;i+=5){ 
  a[i] = cnt; 
  a[i+1] = cnt; 
  a[i+2] = cnt; 
  a[i+3] = cnt; 
  a[i+4] = cnt; 
  cnt+=1.0/3.0; 
 } 
 a[100] = 4.0; 
 double gpa = 0; 
 for(int i = 0;i<n;i++){ 
  cin>>t1>>t2>>f>>cr; 
  sum+=cr; 
  if(t1 + t2<30 || f<20){ 
   gpa+=a[0]; 
  }else{ 
   gpa+=(a[t1+t2+f] * cr); 
  } 
 } 
 cout<<gpa/sum<<endl; 
 
 
 return 0; 
}
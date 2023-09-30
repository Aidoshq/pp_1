#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> a;
	set<int> q;
	int k;
	int l;
	for(int i =0;i<n;i++){
		cin>>k;
		l = q.size();
		q.insert(k);
		if(l!=q.size()){
			a.push_back(k);
		}
	}
	do{
		for(int i = 0;i<a.size();i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}while(next_permutation(a.begin(),a.end()));



	return 0;
}
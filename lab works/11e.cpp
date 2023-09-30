#include <bits/stdc++.h>

using namespace std;

string foo(string s1 , string s2){
    set <char> st;
    for(int i = 0; i < s1.size() ;i++){
        for(int j = 0; j < s2.size();j++ ){
            if(s1[i] ==s2[j]){
                st.insert(s2[j]);
            }
        }
    }
    string g = "";
    set <char> :: iterator f = st.begin();
    for(; f!= st.end(); f++){
        g+= *f;
    }
    return g;
}

int main(){
    int n;
    cin >> n;
    vector <string > vt;
    for(int i = 0;i < n;i++){
        string st;
        cin >> st;
        vt.push_back(st);
    }
    string ans = "qwertuiop[asdfhjkl;zxcvbnm,.1234567890";    
    for(int i = 0; i < vt.size() ;i++){
        ans = foo(ans, vt[i]);
    }

    if(ans.size() == 0){
        cout << "NO COMMON CHARACTERS";
        return 0;
    }
    for(int i = 0; i < ans.size() ; i++){
        cout << ans[i] << " ";
    }
    

    return 0;
}
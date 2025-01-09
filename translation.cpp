#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, t;
    string reversed_t = "";
    cin>>s>>t;

    for(int i = t.size() - 1; i >= 0 ; i--){
        reversed_t += string(1, t[i]);
    }

    if(s == reversed_t){
        cout<<"YES";
    }

    else{
        cout<<"NO";
    }

    return 0;
}

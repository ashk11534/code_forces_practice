#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    int anton_count = 0, danik_count = 0;
    cin>>n>>s;

    for(int i = 0; i < n; i++){
        if(s[i] == 'A'){
            anton_count++;
        }

        else if(s[i] == 'D'){
            danik_count++;
        }
    }

    if(anton_count == danik_count){
        cout<<"Friendship";
    }

    else if(anton_count > danik_count){
        cout<<"Anton";
    }

    else if(anton_count < danik_count){
        cout<<"Danik";
    }
}

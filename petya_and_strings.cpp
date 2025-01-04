#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1;
    string s2;
    int sum1 = 0;
    int sum2 = 0;
    bool flag = false;
    
    cin>>s1;
    cin>>s2;
    
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

    for(int i = 0; i < s1.size(); i++){
        if(int(s1[i]) < int(s2[i])){
            cout<<-1;
            break;
        }

        else if(int(s1[i]) > int(s2[i])){
            cout<<1;
            break;
        }

        else{
            if(i == s1.size() -1 ){
                flag = true;
            }
            
            continue;
        }
    }

    if(flag){
        cout<<0;
    }

    return 0;
}
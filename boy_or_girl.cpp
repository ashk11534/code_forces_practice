#include<bits/stdc++.h>
using namespace std;

int main(){
    string input_str;
    map<char,int> char_frequency_map;
    cin>>input_str;

    for(auto c : input_str){
        if(char_frequency_map[c]){
            char_frequency_map[c]++;
        }

        else{
            char_frequency_map[c] = 1;
        }
    }

    if(char_frequency_map.size() % 2 == 0){
        cout<<"CHAT WITH HER!";
    }

    else{
        cout<<"IGNORE HIM!";
    }

}

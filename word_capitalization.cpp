#include<bits/stdc++.h>
using namespace std;

int main(){
    string input_str;
    cin>>input_str;
    
    char first_letter = input_str[0];
    char letter_cap = first_letter;
    
    if(int(first_letter) >= 97 && int(first_letter) <= 122){
        letter_cap = char(int(first_letter) - 32);
    }
    
    string output_str = string(1, letter_cap);
    
    for(int i = 1; i < input_str.size(); i++){
        output_str += string(1, char(input_str[i]));
    }
    
    cout<<output_str;
}
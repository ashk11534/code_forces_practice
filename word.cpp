#include<bits/stdc++.h>
using namespace std;

int main(){
    int number_of_lower_case_letters = 0;
    int number_of_upper_case_letters = 0;
    string input_str;
    cin>>input_str;

    for(auto ch : input_str){
        if(int(ch) >= 65 && int(ch) <= 90){
            number_of_upper_case_letters++;
        }

        else if(int(ch) >= 97 && int(ch) <= 122){
            number_of_lower_case_letters++;
        }
    }

    if((number_of_lower_case_letters > number_of_upper_case_letters) || (number_of_lower_case_letters == number_of_upper_case_letters)) {
        transform(input_str.begin(), input_str.end(), input_str.begin(), ::tolower);
    }

    else if(number_of_lower_case_letters < number_of_upper_case_letters){
        transform(input_str.begin(), input_str.end(), input_str.begin(), ::toupper);
    }

    cout<<input_str;
}

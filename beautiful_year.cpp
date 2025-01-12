#include<bits/stdc++.h>
using namespace std;

int main(){
    int year;
    set<int> distinct_digits;

    cin>>year;

    while(true){
        year++;
        int _year = year;
        while(_year != 0){
            int digit = _year % 10;
            distinct_digits.insert(digit);
            _year = _year / 10;
        }

        if(to_string(year).size() == distinct_digits.size()){
            cout<<year;
            distinct_digits.clear();
            break;
        }
        distinct_digits.clear();
    }
}

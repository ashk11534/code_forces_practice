#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    int number_of_nearly_lucky_digits = 0;

    while(n != 0){
        int digit = n % 10;
        if((n % 10) == 4 || (n % 10) == 7){
            number_of_nearly_lucky_digits++;
        }

        n = n / 10;
    }

    if(number_of_nearly_lucky_digits == 4 || number_of_nearly_lucky_digits == 7){
        cout<<"YES";
    }

    else{
        cout<<"NO";
    }
}

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin>>n>>k;

    while(k != 0){
        if(n % 10 == 0){
            n = n / 10;
        }

        else if(n % 10 != 0){
            n = n - 1;
        }

        k--;
    }

    cout<<n;
}
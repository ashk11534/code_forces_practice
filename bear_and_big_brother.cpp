#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin>>a>>b;
    int count = 1;
    while(true){
       a = a * 3;
       b = b * 2;
       if(a > b){
           break;
       }
       count++;
    }
    cout<<count;
}

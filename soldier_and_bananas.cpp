#include<bits/stdc++.h>
using namespace std;

int main(){
    int k, n, w;
    cin>>k>>n>>w;

    if(k == 0){
        cout<<0;
    }

    int total_cost = 0;

    for(int i = 1; i <= w; i++){
        total_cost += (i * k);
    }

    if(total_cost <= n){
        cout << 0;
    }

    else{
        cout<<abs(n - total_cost);
    }
}

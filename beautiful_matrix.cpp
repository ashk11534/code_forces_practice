#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5][5];

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin>>arr[i][j];
        }
    }

    if(arr[2][2] == 1){
        cout<<0;
        return 0;
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(arr[i][j] == 1){
                cout<<abs(j - 2) + abs(i - 2);
            }
        }
    }
}
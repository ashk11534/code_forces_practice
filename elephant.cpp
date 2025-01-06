#include<bits/stdc++.h>
using namespace std;

int main(){
    int point_x;

    cin>>point_x;

    int res;

    int minimum_step_initial = point_x / 5;

    if(point_x % 5 == 0){
        res = minimum_step_initial;
    }
    else{
        if(point_x % 5 <= 5){
            res = minimum_step_initial + 1;
        }
        else{
            while(point_x % 5 > 5){
               minimum_step_initial = minimum_step_initial + 1;
               point_x = point_x % 5;
            }
            res = minimum_step_initial;
        }
    }

    cout<<res;
}

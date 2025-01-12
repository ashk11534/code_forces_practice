#include<bits/stdc++.h>
using namespace std;

int main(){
    int number_of_friends, height_of_the_fence;
    cin>>number_of_friends>>height_of_the_fence;

    int friends[number_of_friends];

    for(int i = 0; i < number_of_friends; i++){
           cin>>friends[i];
    }

    int minimum_possible_valid_width_of_the_road = 0;

    for(int i = 0; i < number_of_friends; i++){
           if(friends[i] <= height_of_the_fence){
                minimum_possible_valid_width_of_the_road += 1;
           }

           else{
                minimum_possible_valid_width_of_the_road += 2;
           }
    }

    cout<<minimum_possible_valid_width_of_the_road;

    return 0;
}

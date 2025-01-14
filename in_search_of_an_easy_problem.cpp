#include<bits/stdc++.h>
using namespace std;

int main(){

    int number_of_people;
    cin>>number_of_people;
    int opinions[number_of_people];
    bool is_hard = false;

    for(int i = 0; i < number_of_people; i++){
        cin>>opinions[i];
    }

    for(int i = 0; i < number_of_people; i++){
        if(opinions[i] == 1){
            is_hard = true;
            break;
        }
    }

    if(is_hard){
        cout<<"HARD";
    }

    else{
        cout<<"EASY";
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main(){
    int number_of_rooms;
    cin>>number_of_rooms;

    int rooms[number_of_rooms][2];

    int number_of_rooms_to_move_in = 0;

    for(int i = 0; i < number_of_rooms; i++){
        for(int j = 0; j < 2; j++){
            cin>>rooms[i][j];
        }
    }

    for(int i = 0; i < number_of_rooms; i++){
        if(abs(rooms[i][1] - rooms[i][0]) >= 2){
            number_of_rooms_to_move_in++;
        }
    }

    cout<<number_of_rooms_to_move_in;

    return 0;
}

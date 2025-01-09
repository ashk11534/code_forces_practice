#include<bits/stdc++.h>
using namespace std;

int main(){
    int number_of_stopage;
    int entry, exit;
    queue<int> tram_queue;

    cin>>number_of_stopage;
    int entry_arr[number_of_stopage][2];

    for(int i = 0; i < number_of_stopage; i++){
        for(int j = 0; j < 2; j++){
            cin>>entry_arr[i][j];
        }
    }

    tram_queue.push(entry_arr[0][0]);
    tram_queue.push(entry_arr[0][1]);

    int minimum_capacity = tram_queue.back();

    for(int i = 1; i < number_of_stopage; i++){
        int new_back = (tram_queue.back() - entry_arr[i][0]) + entry_arr[i][1];
        tram_queue.pop();
        if(minimum_capacity < new_back){
            minimum_capacity = new_back;
        }
        tram_queue.push(new_back);
    }

    cout<<minimum_capacity;

    return 0;
}

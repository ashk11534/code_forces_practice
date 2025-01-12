#include<bits/stdc++.h>
using namespace std;

int main(){
    int number_of_students, time;
    string initial_queue;
    string final_string = "";

    cin>>number_of_students>>time;
    cin>>initial_queue;

    char initial_queue_arr [initial_queue.size()];

    for(int i = 0; i < initial_queue.size(); i++){
        initial_queue_arr[i] = initial_queue[i];
    }

    while(time){
        int i = 0;
        while(i < initial_queue.size()){
            if(initial_queue_arr[i] == 'B' and initial_queue_arr[i + 1] == 'G'){
                swap(initial_queue_arr[i], initial_queue_arr[i + 1]);
                i += 2;
            }
            else{
                i++;
            }
        }

        time--;
    }

    for(auto i : initial_queue_arr){
        final_string += string(1, i);
    }

    cout<<final_string;

}

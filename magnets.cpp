#include<bits/stdc++.h>
using namespace std;

int main(){

    int number_of_magnets;
    int groups_count = 0;
    cin>>number_of_magnets;

    string magnets[number_of_magnets];
    stack<string> s;

    for(int i = 0; i < number_of_magnets; i++){
        cin>>magnets[i];
    }

    s.push(magnets[0]);

    for(int i = 1; i < number_of_magnets; i++){
        if(s.top() != magnets[i]){
            s = stack<string>();
            groups_count++;
            s.push(magnets[i]);
        }

        else{
            s.push(magnets[i]);
        }
    }

    cout<<groups_count + 1;

    return 0;
}

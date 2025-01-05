#include<bits/stdc++.h>
using namespace std;

int main(){
    int number_of_stones;
    string stone_string;

    cin>>number_of_stones>>stone_string;

    stack<char> stone_stack;

    for(auto i : stone_string){
        stone_stack.push(i);
    }

    int count_stone = 0;

    while(!stone_stack.empty() && stone_stack.size() > 1){
        char popped_char = stone_stack.top();

        stone_stack.pop();

        if(popped_char == stone_stack.top()){
            count_stone++;
        }

    }

    cout<<count_stone<<endl;

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main(){
    string input_s;
    vector<int> nums;
    cin>>input_s;
    
    for(auto i : input_s){
        if(i != '+'){
            nums.push_back(int(i));
        }
    }
    
    stable_sort(nums.begin(), nums.end());
    
    string output_s="";
    
    for(int i = 0; i < nums.size(); i++){
        if(i < nums.size() - 1){
           output_s += string(1, char(nums[i])) + string(1, '+'); 
        }
        
        else{
            output_s += string(1, char(nums[i])); 
        }
    }
    
    cout<<output_s;
}
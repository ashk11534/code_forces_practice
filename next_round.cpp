#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n , k, count = 0;
    vector<int> scores;
    cin >> n >> k;
 
    for (int i = 0; i < n; i++)
    {
        int score;
        cin >> score;
        scores.push_back(score);
    }

    int k_th_score = scores[k - 1];
    
    for (int i = 0; i < n; i++)
    {
        if(n >= k){
            if(scores[i] >= k_th_score && scores[i] >= 1){
                count++;
             }
        }
        
    }
    cout << count;
    
}
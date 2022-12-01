#include<bits/stdc++.h>
using namespace std;
 
/*
    Time Complexity: O(N)
    Space Complexity: O(1)
*/
int solve() {
    int max_calories = INT_MIN;
    int current_calories = 0;

    string tmp;
    while(getline(cin, tmp)){
        if(tmp != "") current_calories += stoi(tmp);
        if(tmp == "" || cin.eof()){
             max_calories = max(max_calories, current_calories);
             current_calories = 0;
        }
    }
    return max_calories;
}

int main(){
    //Faster reads
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    cout << solve();
}
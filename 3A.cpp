#include<bits/stdc++.h>
using namespace std;
 
/*
    PART 1
    Time Complexity: O(N)
    Space Complexity: O(1)
*/
int solve() {
    int total_priority = 0;

 string tmp;
    while(getline(cin, tmp)){
        unordered_set<char> found;
        for(int i = 0; i < tmp.size()/2; i++){
            found.insert(tmp[i]);
        }
        unordered_set<char> already_found;
        for(int i = tmp.size()/2; i < tmp.size();i++){
            if(found.count(tmp[i]) && !already_found.count(tmp[i])){
                already_found.insert(tmp[i]);
                if(isupper(tmp[i])) total_priority += tmp[i] - 'A' + 27;
                else total_priority += tmp[i] - 'a' + 1;
            }
        }
    }
    return total_priority;
}

int main(){
    //Faster reads
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    cout << solve();
}
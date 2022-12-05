#include<bits/stdc++.h>
using namespace std;
 
/*
Time Complexity: O(N)
Space Complexity: O(1)
*/
string solve() {
    vector<deque<char>> stacks;

    string line;
    while(getline(cin, line) && line.size() != 0){
       stacks.resize(line.size()/4+1);
        for(int i = 0; i < line.size(); i+=4){
            string item = line.substr(i, 3);
            if(item[0] == '['){
                stacks[i%line.size()/4].push_back(item[1]);
            }
        }
    }
    while(getline(cin, line)){
        int how_many, from, to;
        sscanf(line.c_str(), "move %d from %d to %d", &how_many, &from, &to);

        while(how_many--){
            char tmp = stacks[from-1].front();
            stacks[from-1].pop_front();
            stacks[to-1].push_front(tmp);
        }
    }

    string result;
    for(int i = 0; i < stacks.size(); i++){
        result += stacks[i].front();
    }

    return result;
}

int main(){
    //Faster reads
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    cout << solve();
}
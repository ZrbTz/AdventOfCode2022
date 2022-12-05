#include<bits/stdc++.h>
using namespace std;
 
/*
    PART 2
    Time Complexity: O(N)
    Space Complexity: O(1)
*/
int solve() {
    int total_score = 0;

    string tmp;
    while(getline(cin, tmp)){
        stringstream ss{tmp};
        char p1, p2;
        ss >> p1 >> p2;

        int s1 = p1 - 'A';
        int s2 = p2 - 'X';

        total_score += 3*s2;
        if(s2 == 0) total_score += (s1-1+3)%3 + 1;
        else if(s2 == 1) total_score += s1+1;
        else if(s2 == 2) total_score += (s1+1+3)%3 + 1;
    }
    return total_score;
}

int main(){
    //Faster reads
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    cout << solve();
}
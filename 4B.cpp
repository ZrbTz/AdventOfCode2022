#include<bits/stdc++.h>
using namespace std;
 
/*
Time Complexity: O(N)
Space Complexity: O(1)
*/
int solve() {
    int overlapping = 0;
    string line;
	 while(getline(cin, line)){
        pair<int, int> i1, i2;
        sscanf(line.c_str(), "%d-%d,%d-%d", &i1.first, &i1.second, &i2.first, &i2.second);

		if(i1.first <= i2.second && i2.first <= i1.second) overlapping++;
	}
    return overlapping;
}

int main(){
    //Faster reads
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    cout << solve();
}
#include<bits/stdc++.h>
using namespace std;
 
/*
Time Complexity: O(N)
Space Complexity: O(1)
*/
int solve() {
    int contained = 0;
    string line;
	 while(getline(cin, line)){
        pair<int, int> i1, i2;
        sscanf(line.c_str(), "%d-%d,%d-%d", &i1.first, &i1.second, &i2.first, &i2.second);

        if(i1.first > i2.first || i1.second < i2.second) swap(i1, i2);
		if((i1.first <= i2.first && i1.second >= i2.second)) contained++;
	}
    return contained;
}

int main(){
    //Faster reads
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    cout << solve();
}
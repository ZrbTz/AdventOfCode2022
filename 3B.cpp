#include<bits/stdc++.h>
using namespace std;
 
/*
    PART 1
    Time Complexity: O(N)
    Space Complexity: O(1)
*/
int solve() {
    int total_priority = 0;

 string elf1, elf2, elf3;
    while(getline(cin, elf1)){
        getline(cin, elf2);
        getline(cin, elf3);

        unordered_map<char, int> elf1_m;
        for(int i = 0; i < elf1.size(); i++){
            elf1_m[elf1[i]]++;
        }

        unordered_map<char, int> elf2_m;
        for(int i = 0; i < elf2.size(); i++){
            if(elf1_m.count(elf2[i])){
                elf2_m[elf2[i]]++;
            }
        }

        char badge;
        unordered_map<char,int> elf3_m;
        for(int i = 0; i < elf3.size(); i++){
            if(elf1_m.count(elf3[i]) && elf2_m.count(elf3[i])){
                elf3_m[elf3[i]]++;
                badge = elf3[i];
            }
        }

        int badge_priority = isupper(badge) ? badge - 'A' + 27 : badge - 'a' + 1;

        total_priority += badge_priority;

        
    }
    return total_priority;
}

int main(){
    //Faster reads
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    cout << solve();
}
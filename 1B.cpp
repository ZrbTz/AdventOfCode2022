#include<bits/stdc++.h>
using namespace std;

/*
    Time Complexity: O(N*Log(K))
    Space Complexity: O(K)
*/
class TopKPriorityQueue{
    priority_queue<int, vector<int>, greater<int>> pq;
    const int K = 3;
public:
    // Time Complexity: O(Log(K))
    void push(int value){
        pq.push(value);
        if(pq.size() > K) pq.pop();
    }

    // Time Complexity: O(K)
    int get_sum(){
        int sum = 0;
        while(pq.size()){
            sum += pq.top();
            pq.pop();
        }
        return sum;
    }
};

int solve(){
    TopKPriorityQueue topk;
    int current_elf_calories = 0;

    string tmp;
    while(getline(cin, tmp)){
        if(tmp != "") current_elf_calories += stoi(tmp);
        if(tmp == "" || cin.eof()){
            topk.push(current_elf_calories);
            current_elf_calories = 0;
        }
    }
    return topk.get_sum();
}

int main() {
    //Faster reads
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    cout << solve();
}
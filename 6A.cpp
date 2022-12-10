#include<bits/stdc++.h>
using namespace std;

int main(){

string tmp;
cin >> tmp;
unordered_map<char, int> last4;
queue<char> q;

for(int i = 0; i < tmp.size(); i++){
    q.push(tmp[i]);
    last4[tmp[i]]++;

    if(last4.size() > 3){
        cout << i+1;
        break;
    }

    if(q.size()>3){
        last4[q.front()]--;
        if(last4[q.front()] == 0) last4.erase(q.front());
        q.pop();
    }
}
} 
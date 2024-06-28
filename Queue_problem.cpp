/*
https://www.hackerearth.com/practice/data-structures/queues/basics-of-queues/practice-problems/algorithm/empty-array-31ed638c/
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    queue<int> q;
    int b[n];
    int cur;

    for(int i = 0; i < n; i++){
        cin >> cur;
        q.push(cur);
    }

    for(int i = 0; i < n; i++){
        cin >> b[i];
    }

    int time = 0;
    cur = 0;

    while(cur < n){

        if(b[cur] == q.front()){
            q.pop();
            cur++;
        }

        else{
            int item = q.front();
            q.pop();
            q.push(item);
        }
        time++;
    }

    cout << time << '\n';
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> myQueue;

    int item;
    for(int i = 0; i < 5; i++){
        cin >> item;
        myQueue.push(item);

        cout << myQueue.back() << '\n';
    }


    cout << "befor dequeue top value: " << myQueue.front() << '\n';
    
    while(myQueue.size()){

        myQueue.pop();
        cout << "Poped! The front value is : " << myQueue.front() << '\n';
    }
}
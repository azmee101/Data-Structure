#include<bits/stdc++.h>
using namespace std;


bool solve(){
    string str;
    cin >> str;

    stack<char> myStack;

    for(int i = 0; i < str.size(); i++){
        
        if(str[i] == '(' || str[i] == '{' || str[i] == '['){
            myStack.push(str[i]);
        }

        else{

            if(myStack.empty()){
                
                return false;
            }

            char x = myStack.top();

            if(str[i] == ')' && x == '(' ||
               str[i] == '}' && x == '{' ||
               str[i] == ']' && x == '['){

                myStack.pop();
            }

            else{

                return false;
            }
        }
    }

    return myStack.empty()? true : false;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    t = 1;
    // cin >> t;
    while(t--){
        cout << solve() << '\n';
    }
    return 0;
}

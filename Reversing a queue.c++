#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main(){
    //logic for taking input
    int n;
    cin>>n;
    queue<int>q;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        q.push(x);
    }

    //logic for moving all elements from the queue to stack
    stack<int>stk;
    while(!q.empty()){
        stk.push(q.front());
        q.pop();
    }
    while(!stk.empty()){
        q.push(stk.top());
        stk.pop();
    }

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }

    return 0;

}


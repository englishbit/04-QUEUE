#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main(){
    //logic for taking input
    int n;
    cin>>n;
    //logic for inserting elements into queue
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

    //logic for moving all elements from stack to queue
    while(!stk.empty()){
        q.push(stk.top());
        stk.pop();
    }

    //logic for output
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }

    return 0;

}



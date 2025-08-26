#include<iostream>
#include<queue>
using namespace std;
int main(){
    string s;
    //logic for taking input
    cin>>s;
    queue<char>q;
    for(int i=0;i<s.length();i++){
        q.push(s[i]);
    }

    char count[26]={0};
    while(!q.empty()){
        char c=q.front();
        int indx=c-'a';
        count[indx]++;
        q.pop();
    }

    for(int i=0;i<s.length();i++){
        char c=s[i];
        int indx=c-'a';
        if(count[indx]==1){
            cout<<c;
            return 0;
        }
    }
    cout<<"First non repeating character not found"<<endl;
    return 1;

    return 0;

}


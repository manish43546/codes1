#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int>q;
    q.push(134);
    q.push(231);
    q.push(674);
    
    while(!q.empty()){
        
        cout<<q.front()<<" ";
        q.pop();
        
    }
    
    return 0;
}
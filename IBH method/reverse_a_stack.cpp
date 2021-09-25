#include<bits/stdc++.h>
using namespace std;
void insert(stack<int> &s,int temp){
    if(s.size()==0){
        s.push(temp);
        return;
    }
    int topelement=s.top();
    s.pop();
    insert(s,temp);
    s.push(topelement);
    return;
}
void  reverse(stack<int> &s){
    if(s.size()==1){
        return;
    }
    int temp=s.top();
    s.pop();
    reverse(s);
    insert(s,temp);
    return;
}
int main(){
    stack<int> s;
    int n;
    cout << " Enter the size of stack" << endl;
    cin >> n;
    cout << "Enter the elements of a stack\n";
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        s.push(x);
    }
    reverse(s);
    cout << "\n the elements of the stack from top to bottom after reversing is\n";
    for(int i=0;i<n;i++){
        cout << s.top() << " ";
        s.pop();
    }
}
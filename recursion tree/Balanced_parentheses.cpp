#include <bits/stdc++.h>
using namespace std;
void solve(int open,int close, string op)
{   
    if(open==0 && close==0){
        cout << op << "\t";
        return;
    }
    if(open!=0){
         string op1=op;
    op1.push_back('(');
    solve(open-1,close,op1);
    }
    if(close>open){
    string op2=op;
    op2.push_back(')');
    solve(open,close-1,op2);
    }
}

int main()
{
    int n;
    cin >> n;
    string op = "(";
    int open=n-1,close=n;
    solve(open,close, op);
}

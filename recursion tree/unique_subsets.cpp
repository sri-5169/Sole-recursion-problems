#include <bits/stdc++.h>
using namespace std;
unordered_set<string> match;
void solve(string ip, string op)
{
        if (ip.length() == 0)
    {
         if(match.find(op)!=match.end())
             return;
        else {
            match.insert(op);
        cout << op << "\t";
        return;
        }
    }

    string op1 = op;
    string op2 = op;
    op2.push_back(ip[0]);
    ip.erase(ip.begin()+0);
    solve(ip, op1);
    solve(ip, op2);
}
int main()
{
    string s;
    cin >> s;
    string op ;
    solve(s, op);
}
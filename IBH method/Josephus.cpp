#include <bits/stdc++.h>
using namespace std;

void solve(int i,int  k,vector<int> &v)
{
    if(v.size()==1){
        cout << v[0]+1;
        return;
    }
    i=(i+k)%v.size();
    v.erase(v.begin()+i);
    solve(i,k,v);
}
int main()
{
    stack<int> s;
    int n;
    cout << "Enter the number of people standing in a circle" << endl;
    cin >> n;
    int k;
    cout << "Enter the index of people killed by everyone in the circle" << endl;
    cin >> k;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        v[i]=i;
    }
    k--;
    solve(0,k,v);
}
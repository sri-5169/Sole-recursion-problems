#include<bits/stdc++.h>
using namespace std;
void solve(int n){
    if(n==1){
        cout << 1;
        return;
    }
    cout << n  << " ";
    solve(n-1);
    return;
}
int main(){
    int n;
    cout << "Enter n" << endl;
    cin >> n;
    solve(n);
}
#include <bits/stdc++.h>
using namespace std;
void solve(int s, int h, int d, int n, long long &count)
{
    if (n == 1)
    {
        // cout << "move " << n << "from" << s << "to " << d << endl;
        
        count=(count+1)%INT64_MAX;
        return;
    }
    solve(s, d, h, n - 1, count);
    // cout << "move " << n << "from" << s << "to " << d << endl;
    count=(count+1)%INT64_MAX;

    solve(h, d, s, n - 1, count);
    return;
}
int main()
{
    cout << "Everyone know this problem of Bramha ji " << endl;
    cout << "Enter the number of " << endl;
    int n;
    cin >> n;
    long long  count = 0;
    solve(1, 2, 3, n, count);
    cout << "\n\nThe task is completed " << endl;
    cout << count/(3600*24*365);
}
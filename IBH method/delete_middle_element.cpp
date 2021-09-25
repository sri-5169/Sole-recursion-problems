#include <bits/stdc++.h>
using namespace std;

void solve(stack<int> &s, int k)
{
    if (k == 0)
    {
        s.pop();
        return;
    }
    int temp = s.top();
    s.pop();
    solve(s, k - 1);
    s.push(temp);
    return;
}
int main()
{
    stack<int> s;
    int n;
    cout << " Enter the size of stack" << endl;
    cin >> n;
    cout << "Enter the elements of a stack\n";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.push(x);
    }
    if (n != 0)
    {
        if (n % 2 != 0)
        {
            int k = n / 2;
            solve(s, k);
        }
        else
        {
            int k = n / 2;
            solve(s, k);
            int size = s.size();
            k = size / 2;
            solve(s, k);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << s.top() << " ";
        s.pop();
    }
}
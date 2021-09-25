#include<bits/stdc++.h>
using namespace std;
void solve(int ones, int zeroes,int n,string op,int &count){
        if(n==0){
            cout << op << endl;
            count++;
            return;
        }
        else if(ones==zeroes){
            string op1=op;
            op1.push_back('1');
            solve(ones+1,zeroes,n-1,op1,count);
        }
        else {
            string op1=op,op2=op;
            op1.push_back('1');
            op2.push_back('0');
            solve(ones+1,zeroes,n-1,op1,count);
            solve(ones,zeroes+1,n-1,op2,count);
            
        }
}
int main(){

    cout << "Enter the number of digits \n" ;
    int n;
    cin >> n;
    // we will create two variables for the count of zeroes and 1s in the number and
    // we will pass them into the recursive functions
    int zeroes=0;
    int ones=1;
    string op="1";
    int count=0;
    solve(ones,zeroes,n-1,op,count);
    cout << "\n\n\n" << count;
    
}
#include<bits/stdc++.h>
using namespace std;
void insert(vector<int> &v,int temp){
        if(v.size()==0 || v[v.size()-1]<=temp){
            v.push_back(temp);
            return;
        }
        int last=v[v.size()-1];
        v.pop_back();
        insert(v,temp);
        v.push_back(last);
        return;
}

void sort(vector<int> &v){
        if(v.size()<=1){
            return ;
        }
        int temp=v[v.size()-1];
        v.pop_back();
        sort(v);
        insert(v,temp);
        
        return;
}
int main(){
    int n;
    cout << "Enter size of array\n";
    cin >> n;



    vector<int> v(n);
    cout << "Enter the elements of the array\n";
    for(int i=0;i<n;i++){
        int x;
        cin >>x;
        v[i]=x;
    }
sort(v);
for(int i=0;i<n;i++){
       cout << v[i] << " ";
    } 
}
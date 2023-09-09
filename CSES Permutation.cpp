#include <bits/stdc++.h>
using namespace std;

signed main() {
    long long n;
    cin>>n;
    if(n==1)cout<<"1"<<endl;
    else if(n<=3 && n!=1){
        cout<<"NO SOLUTION"<<endl;
    }
    else if(n==4)cout<<"2 4 1 3"<<endl;
    else {
    vector<long long>v;
    for(int i=n;i>0;i-=2){
        v.push_back(i);
    }
    for(int i=n-1;i>0;i-=2){
        v.push_back(i);
    }
    for(auto num:v){
        cout<<num<<" ";
    }
    }
    return 0;
   
}

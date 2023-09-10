#include <bits/stdc++.h>
using namespace std;

signed main() {
   unsigned long long n;
    cin>>n;
    for(unsigned long long i=1;i<n+1;i++){
        unsigned long long temp=((i*i)*((i*i)-1))/2;
        temp=temp-(4*((i-1)*(i-2)));
        cout<<temp<<endl;
    }
}

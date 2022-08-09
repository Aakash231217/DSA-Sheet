#include<iostream>
using namespace std;
int main(){
    int n, swapped ;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[n];
    }
    for(int i=0;i<n;i++){
        int idx=i;
        for(int j=0; j<n-1;j++){
            if(A[j]>A[j+1]){
                swap(A[j],A[j+1]);
                swapped=true;
            }
        }
        if(swapped==false)
        break;
    }
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    return 0;
}
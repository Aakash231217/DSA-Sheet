
class Solution{   
public:
    int minIteration(int N, int M, int x, int y){    
        // code here
        int ans=0;
        int a=max(x-1,N-x);
        int b=max(y-1,M-y);
        ans=a+b;
        return ans;
    }
};

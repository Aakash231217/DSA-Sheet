class Solution{   
public:
    long long int distinctColoring(int N, int r[], int g[], int b[]){
        // code here 
        long long int R=r[0],B=b[0],G=g[0];
        for(int i=1;i<N;i++){
            long long rr=R,bb=B,gg=G;
            R=min(bb,gg)+r[i];
            B=min(rr,gg)+b[i];
            G=min(rr,bb)+g[i];
        }
        return min(R,min(B,G));
    }
};

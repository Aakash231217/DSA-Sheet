class Solution{
    public:
    int carpetBox(int A, int B, int C, int D){
        //code here
        if(C>D)swap(C,D);
        if(A>B)swap(A,B);
        int count=0;
        while(B>D || A>C){
            if(B>D)B/=2;
            else if(A>C)A/=2;
            count++;
            if(A>B)swap(A,B);
        }
        return ans;
    }
};

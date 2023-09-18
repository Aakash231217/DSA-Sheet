class Solution {
public:
   int binarySearch(vector<int>&arr, int l ,int r){
       int result=-1;
       int mid=1;
       while(l<=r){
           mid=l+(r-l)/2;
           if(arr[mid]==1){
               result=mid;
               l=mid+1;
           }
           else if(arr[mid]==0) r=mid-1;
       }
       return result+1;
   }
   typedef pair<int,int>P;
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int m=mat.size();
        int n=mat[0].size();
        priority_queue<P>pq;
        for(int row=0;row<m;row++){
            int num1s=binarySearch(mat[row],0,n-1);
            pq.push({num1s,row});
            if(pq.size()>k){
                pq.pop();
            }
        }
            vector<int>result(k);
            int j=k-1;
            while(!pq.empty()){
                auto temp=pq.top();
                pq.pop();
                result[j--]=temp.second;
            }
        return result;
    }
};

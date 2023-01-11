class Solution {
  public:
    long long int minIncrements(vector<int> arr, int N) {
        sort(arr.begin(),arr.end());
        int ans=0;
        for(int i=1;i<N;i++){
            if(arr[i-1]>=arr[i]){
                ans+=(arr[i-1]-arr[i])+1;
                arr[i]=arr[i-1]+1;
            }
        }
        return ans;
    }
};

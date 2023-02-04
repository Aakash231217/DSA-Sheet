class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int findMaxSum(int *arr, int n) {
	    // code here
	    if(n==1)return arr[0];
	    int prev2=arr[0];
	    int prev=max(arr[0],arr[1]);
	    for(int i=2;i<n;i++){
	        int curr=max(prev,arr[i]+prev2);
	        prev2=prev;
	        prev=curr;
	    }
	    return prev;
	}
};

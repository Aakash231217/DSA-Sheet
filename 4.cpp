class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        vector<int>result(m+n);
        int i=0,j=0,k=0;
        while(i<m && j<n){
            if(nums1[i]<nums2[j]){
               result[k++]=nums1[i++];
            }
            else{
                result[k++]=nums2[j++];
            }
        }
            while(i<m){
                result[k++]=nums1[i++];
            }
            while(j<n){
                result[k++]=nums2[j++];
            }
            int size=m+n;
            if(size%2==1){
                return result[size/2];
            }
            else return (result[size/2]+result[(size/2)-1])/2.0;
    }
};

class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int n=capacity.size();
        vector<int>temp(n,0);
        for(int i=0;i<n;i++)temp[i]=capacity[i]-rocks[i];
        sort(temp.begin(),temp.end());
        int i=0;
        while(true){
            if(additionalRocks==0 ||i>=n)break;
            if(temp[i]<=additionalRocks)additionalRocks-=temp[i];
            else break;
            i++;
        }
        return i;
    }
};

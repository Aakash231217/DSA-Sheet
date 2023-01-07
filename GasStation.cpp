class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sum_gas=0, sum_cost=0;
        int n=gas.size();
        
          for(int i = 0; i<n ;++i){
               sum_gas+=gas[i];
               sum_cost+=cost[i];
          }
        if(sum_gas<sum_cost){
             return -1;
        }
            int curr=0,ans=0;
         for(int i=0;i<n;++i){
             curr+=gas[i]-cost[i];
              if(curr<0){
                   ans=i+1;
                   curr=0;
              }
         }
         return ans;
    }
};

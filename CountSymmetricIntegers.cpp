class Solution {
public:
    bool symmetric(int x){
        string str= to_string(x);
        int n=str.length()/2;
        string first_half=str.substr(0,n);
        string second_half=str.substr(str.length()-n);
        int sum_first=0;
        int sum_second=0;
        for(char &digit:first_half){
            sum_first+=digit-'0';
        }
        for(char &digit:second_half){
            sum_second+=digit-'0';
        }
        return (sum_first==sum_second)?true:false;
    }
    int countSymmetricIntegers(int low, int high) {
        int cnt=0;
        for(int i=low;i<=high;i++){
            if(to_string(i).length()%2==0){
                if(symmetric(i))
                cnt++;
            }
        }
        return cnt;
    }
};

class Solution {
public:
    int minFlipsMonoIncr(string s) {
       int onescount=0;
       int zeroscount=0;
       for(auto it :s){
           if(it=='1')onescount++;
           else{
               zeroscount++;
               zeroscount=min(zeroscount,onescount);
           }
       } 
       return zeroscount;
    }
};

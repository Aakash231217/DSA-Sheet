class Solution {
public:
    bool repeatedSubstringPattern(string s) {
       int n=s.size();
       for(int l=n/2;l>0;l--){
           if(n%l==0){
               int times=n/l;
               string pattern=s.substr(0,l);
               string newstr="";
               while(times--){
                   newstr+=pattern;
               }
               if(newstr==s)return true;
           }
       }
       return false;
    }
};

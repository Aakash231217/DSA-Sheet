class Solution {
public:
    string customSortString(string order, string s) {
       int count[26]={0};
       for(char& ch:s){
        count[ch-'a']++;
       } 
       string result="";
       for(char &ch:order){
        while(count[ch-'a']>0){
            result.push_back(ch);
            count[ch-'a']--;
        }
       }
       for(char &ch:s){
        if(count[ch-'a']>0)
        result.push_back(ch);
       }
       return result;

    }
};

class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        // your code here
        string lower="";
        string upper="";
        string ans="";
        for(int i=0;i<n;i++){
            if(isupper(str[i]))upper+=str[i];
            else lower+=str[i];
            
        }
        sort(lower.begin(),lower.end());
        sort(upper.begin(),upper.end());
        int indxUpper=0;
        int indxLower=0;
        for(int i=0;i<n;i++){
            if(indxUpper<upper.size()){
                if(isupper(str[i])){
                    ans+=upper[indxUpper];
                    indxUpper++;
                }
            }
             if(indxLower < lower.size()){
                if(islower(str[i])){
                    ans += lower[indxLower];
                    indxLower++;
                }
            }
        }
        return ans;
    }
};

class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows<=1)return s;
        vector<string>rows(numRows);
        bool movedown=true;
        int rowIndex=0;
        for(auto &ch:s){rows[rowIndex]+=ch;
        if(rowIndex==numRows-1)movedown=false;
        else if(rowIndex==0) movedown=true;
        rowIndex+=(movedown?1:-1);
        }
        string result="";
        for(int i=0;i<numRows;i++)
        result+=rows[i];
        return result;
    }
};

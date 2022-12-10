string buildLowestNumber(string num, int k)
{
    int j=0,i;
    for(i=1;i<num.size();i++){
        while(k && j>=0 && num[j]>num[i])k--,j--;
        j++;
        num[j]=num[i];
    }
    j-=k;
    i=0;
    k=j;
    while(num[i]=='0' && i<k)i++,j--;
    return num.substr(i,j+1);
}

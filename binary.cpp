#include<iostream>
#include<string>
using namespace std;
class Binary{
    string s;
    void chk_bin(void);
public:
     void read(void);
     void one_compliment(void);
     void display(void);    
};
void Binary:: read(void){
    cout<<"enter a binary number"<<endl;
    cin>>s;
}
void Binary :: chk_bin(void){
    for(int i=0;i<s.length();i++){
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"incorrect binary"<<endl;
            exit(0);
            }
       }
}
void Binary::one_compliment(void){
    chk_bin();
    for(int i=0;i<s.length();i++){
        if(s.at(i)=='0')
        {
            s.at(i)='1';
        }
        else{
            s.at(i)='0';
        }
    }
}
void Binary:: display(void){
    cout<<"display"<<endl;
    for(int i=0;i<s.length();i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}
int main(){
    Binary b;
    b.read();
    b.display();
    b.one_compliment();
    b.display();
    return 0;
}
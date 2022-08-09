#include <iostream>  
using namespace std;  
int main()  
{  
int n, reverse=0, rem;    
cout<<"Enter a number: ";    
cin>>n;    
  while(n!=0)    
  {    
     rem=n%10;
     cout<<rem<<endl;      
     reverse=reverse*10+rem; 
     cout<<reverse<<endl;   
     n/=10; 
     cout<<n<<endl;   
  }    
 cout<<"Reversed Number: "<<reverse<<endl;     
return 0;  
}  
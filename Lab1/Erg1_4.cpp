#include <iostream>
using namespace std;

int main(){
    int i,j;
    string a = "*";
    cout<<"a)\n";
    for(i=1; i<6; i++){
        for(j=5; j>i; j--)
                 cout<<" ";
        
        cout<<a;
        a+="*";
        cout<<"\n";              
    }
    cout<<"\n\n\nb)\n";
    a="";
    for(i=1; i<6; i++){
        cout<<a;
        a+=" ";
        for(j=6; j>i; j--)
                 cout<<"*";
        
        cout<<"\n";              
    }
    
    cout<<"\n\n\nc)\n";
    a=" ";
    int k = 4;
    int f = 1;
    for(i=0; i<5; i++){
         for(j=0; j<k; j++)
              cout<<a;
         
         for(j=0; j<f; j++)     
              cout<<"*";         
         
         for(j=0; j<k; j++)
              cout<<a;
         k--;
         f=f+2;
         cout<<"\n";                  
    }
    
    system("pause");
    return(0);
}

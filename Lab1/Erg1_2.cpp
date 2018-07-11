#include <iostream>
using namespace std;

int main(){
    char c;
    cout<<"Dwse ena xaraktira : ";
    cin>>c;
    bool b1 = false;
    bool b2 = false;
    int athr = 0;
    int pp = 0;
    int pa = 0;
    while(c!='x' && c!='X'){
        cout<<c;
        system("pause");
        if(c=='R')
            continue;
        else if(c=='A' || c=='F' || c=='P')
            c = c-32;
        if(c>='0' && c<='9'){
            b1 = true;
            cout<<"\nO xaraktiras einai arithmitikos";
            athr += c-48;
            pa++;
        }
        if(c>='A' && c<='Z' || c>='a' && c<='z'){
            b2 = true;
            cout<<"\nO xaraktiras einai alfavitikos";
            if(c>='a' && c<='z') pp++;
        }
        if(!b1 && !b2)
            cout<<"\nO xaraktiras einai eidikos";
        if(c<32)
            cout<<"\nO xaraktiras einai xaraktiras elegxou";
            
        
        cout<<"\nDwse ena xaraktira : ";
        cin>>c;        
    }
    
    cout<<c;
    system("pause");
    cout<<"\nPlithos pezwn xaraktirwn : "<<pp;
    if(pa>0)
        cout<<"\nPlithos arithmitikwn : "<<pa<<" kai athroisma arithmwn : "<<athr;
    
        
    system("pause");
    return(0);
}

#include <iostream>
using namespace std;
void cps(char t[], char s[], int n);
void cps2(char *t, char *s, int n);
int main(){
    char t[20];
    char s[20];
    cout<<"Dwse ena string\n";
    cin>>s;
    cout<<"Dwse xaraktires pros antigrafh\n";
    int e;
    cin>>e;
    cps(t,s,e-1);
    cout<<endl<<t<<endl;
    cps2(t,s,(e-1)/2);
    cout<<endl<<t<<endl;
    system("pause");
    return(0);
}
void cps(char t[], char *s, int n){
    int i=0;
    while(i<n){
        t[i]=s[i];
        i++;
    }
    t[i+1] = '\0';    
}
void cps2(char *t, char *s, int n){
    int i=0;
    while(i<n){
        *(t+i)=*(s+i);
        i++;
    }
    *(t+i) = '\0';    
}

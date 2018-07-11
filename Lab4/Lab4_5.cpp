#include <iostream>
using namespace std;
void sct(char *t, char *s, int n);
int main(){
    char t[20];
    char s[20];
    cout<<"Dwse ena string\n";
    //cin>>s;
    gets(s);
    cout<<"|"<<s<<"|"<<endl;
    sct(t,s,20);
    cout<<"|"<<t<<"|"<<endl;
    system("pause");
    return(0);
}
void sct(char *t, char *s, int n){
    int i=0;
    int j=0;
    while(*(s+i)==' ')
        i++;
    while(j<n){
        *(t+j)=*(s+i);
        i++;
        j++;
    }
    *(t+j) = '\0';
}

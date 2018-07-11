#include <iostream>
using namespace std;
void sct(char *t, char *s);
int main(){
    char t[20];
    char s[20];
    cout<<"Dwse ena string\n";
    //cin>>s;
    gets(s);
    cout<<"|"<<s<<"|"<<endl;
    sct(t,s);
    cout<<"|"<<t<<"|"<<endl;
    system("pause");
    return(0);
}
void sct(char *t, char *s){
    int n = strlen(s);
    int i=n-1;
    int j=0;
    int k = 0;
    while(*(s+i)==' ')
        i--;
    k = i;
    i = 0;
    while(j<=k){
        *(t+j)=*(s+i);
        i++;
        j++;
    }
    *(t+j) = '\0';
}

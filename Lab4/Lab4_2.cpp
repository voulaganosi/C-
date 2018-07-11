#include <iostream>
using namespace std;
int syn(char s[], char ch, int n);
int syn2(char *s, char ch, int n);
int main(){
    char s[10];
    cout<<"Dwse ena string\n";
    cin>>s;
    cout<<"Dwse xaraktira pros anazitisi";
    char ch;
    cin>>ch;
    int f = syn(s,ch,10);
    cout<<endl<<f<<endl;
    int f2 = syn2(s, ch, 10);
    cout<<f2<<endl;
    system("pause");
    return(0);
}
int syn(char s[], char ch, int n){
    int m = 0;
    for(int i=0; i<n; i++)
        if(s[i]==ch)
            m++;
    return m;
}
int syn2(char *s, char ch, int n){
    int m = 0;
    for(int i=0; i<n; i++)
        if(*(s+i)==ch)
            m++;
    return m;
}

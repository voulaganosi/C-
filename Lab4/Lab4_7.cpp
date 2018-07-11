#include <iostream>
using namespace std;
char* ptoc(char *str, char ch);
int main(){
    char str[80];
    cout<<"Dwse ena string\n";
    gets(str);
    cout<<"Dwse xaraktira pros anazitisi\n";
    char ch;
    cin>>ch;
    char *p;
    p = ptoc(str, ch);
    system("pause");
    return(0);
}
char* ptoc(char *str, char ch){
    int l = strlen(str);
    char *ap;
    int n=0;
    while(*str!='\0'){
        if(*str==ch){
            n = 1;
            ap = str;
        }
        str++;
    }
    if(n==0)
        ap = NULL;
    return (ap);
}

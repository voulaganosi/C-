#include <iostream>
using namespace std;
char ksp(char a);
void ksp(char a, char &b);
void ksp2(char &a);
void ksp2(char a, char *b);
int main(){
    char a = 'A';
    char b;
    b = ksp(a);
    cout<<b<<endl;
    ksp(a, b);
    cout<<b<<endl;
    ksp2(a);
    cout<<a<<endl;
    ksp2(a, &b);
    cout<<b<<endl;
    system("pause");
    return(0);
}
char ksp(char a){
     if(a>='A' && a<='Z')
               return (a+32);
     return a;
}
void ksp(char a, char &b){
     if(a>='A' && a<='Z')
         b = (a+32);
     else
         b = a;
}
void ksp2(char &a){
     if(a>='A' && a<='Z')
               a = a+32;                         
}
void ksp2(char a, char *b){
     if(a>='A' && a<='Z')
         *b = a+32;
     else
         *b = a;     
}

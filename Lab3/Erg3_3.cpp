#include <iostream>
using namespace std;
void abx(int x, int &a, char &flag);
void abx(int x, int *a, char *flag);
int main(){
    int a;
    char f;
    abx(4, a, f);
    cout<<a<<endl<<f<<endl;
    abx(-9, &a, &f);
    cout<<a<<endl<<f<<endl;
    system("pause");
    return(0);
}
void abx(int x, int &a, char &flag){
     if(x<0)
            a = x*(-1);
     else
            a = x;
     if(x%3==0)
            flag = 'Y';
     else
            flag = 'N';
}
void abx(int x, int *a, char *flag){
     if(x<0)
            *a = x*(-1);
     else
            *a = x;
     if(x%3==0)
            *flag = 'Y';
     else
            *flag = 'N';        
}

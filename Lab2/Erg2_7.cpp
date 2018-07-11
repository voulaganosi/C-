#include <iostream>
using namespace std;
float fmath(int x);
int main(){
    float g;
    g = fmath(4);
    cout<<g<<endl;
    system("pause");
    return(0);
}
float fmath(int x){
     float g;
     g = (x*x*x)+(5*x*x)+8.1*x+9;
     return g;
}

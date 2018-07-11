#include <iostream>
using namespace std;
void fmath(int x, float &y);
void fmath2(int x, float *y);
int main(){
    float g;
    fmath(4,g);
    cout<<g<<endl;
    fmath2(4,&g);
    cout<<g<<endl;
    system("pause");
    return(0);
}
void fmath(int x, float &y){
     y = (x*x*x)+(5*(x*x))+(8.1*x)+9.6;     
}
void fmath2(int x, float *y){
     *y = (x*x*x)+(5*(x*x))+(8.1*x)+9.6;     
}

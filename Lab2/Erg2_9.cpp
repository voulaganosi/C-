#include <iostream>
using namespace std;
float ypol(int x, float k);
int main(){
    float f;
    f = ypol(66, 0.15);
    cout<<f<<endl;
    int x = 67;
    float g = 0.11;
    f = ypol(x,g);
    cout<<f<<endl;
    system("pause");
    return(0);
}
float ypol(int x, float k){
      return (x*k); 
}

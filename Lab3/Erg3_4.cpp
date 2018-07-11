#include <iostream>
using namespace std;
float embadon(float m);
float embadon(float m, float p);
int main(){
    float emd;
    emd = embadon(4);
    cout<<"Embadon tetragwnou : "<<emd<<endl;
    emd = embadon(4,3);
    cout<<"Embadon orthogwniou : "<<emd<<endl;
    system("pause");
    return(0);
}
float embadon(float m){
      return m*m;      
}
float embadon(float m, float p){
      return m*p;
}

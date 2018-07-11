#include <iostream>
using namespace std;
void emfa(int n);
int main(){
    emfa(20);
    cout<<endl;
    emfa(7);
    system("pause");
    return(0);
}
void emfa(int n){
     for(int i=0; i<n; i++)
          cout<<"*";
}

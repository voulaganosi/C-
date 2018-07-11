#include <iostream>
using namespace std;

int main(){
    int pin[10];
    for(int i=0; i<10; i++){
        cout<<"Dwse arithmo\n";
        cin>>pin[i];
    }
    for(int i=10; i>0; i--)
        cout<<pin[i]<<" ";
    system("pause");
    return(0);
}

#include <iostream>
using namespace std;

int main(){
    int pin[3][4];
    int k = 0;
    for(int i=0; i<3; i++)
        for(int j=0; j<4; j++){
            cout<<"Dwse arithmo\n";
            cin>>pin[i][j];
            if(pin[i][j]%2==0)
                k++;
        }
        
    cout<<"Plithos zugwn : "<<k;
    system("pause");
    return(0);
}

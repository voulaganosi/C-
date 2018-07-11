#include <iostream>
using namespace std;

int main(){
    int N;
    cout<<"Dwse theseis pinaka\n";
    cin>>N;
    int pin[N];
    srand(time(NULL));
    int max = 0;
    for(int i=0; i<N; i++){
        pin[i] = rand();
        cout<<"\n"<<pin[i];
        if(pin[i]>max)
            max = pin[i];
    }
    cout<<"\n\n\nMax = "<<max;
                
    
    system("pause");
    return(0);
}

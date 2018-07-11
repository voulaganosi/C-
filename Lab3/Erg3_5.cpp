#include <iostream>
using namespace std;
void diav(int a[], int n);
float moa(int a[], int n1, int n2);
int main(){
    int n;
    int n1, n2;
    cout<<"Dwse megethos pinaka\n";
    cin>>n;
    int a[n];
    diav(a,n);
    cout<<"Ypologismos mesou orou apo : ";
    cin>>n1;
    cout<<" mexri :";
    cin>>n2;
    float m;
    m = moa(a,n1,n2);
    cout<<"\nMesos oros : "<<m;
    system("pause");
    return(0);
}
void diav(int a[], int n){
    for(int i=0; i<n; i++){
        cout<<"Eisagwgh stoixeiou\n";
        cin>>a[i];
    }
}
float moa(int a[], int n1, int n2){
    float f=0;
    int m=0;
    for(int i=n1; i<=n2; i++){
        f = f + a[i];
        m++;
    }
    f = f/m;
    return f;  
}

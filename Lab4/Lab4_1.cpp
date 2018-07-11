#include <iostream>
using namespace std;
int syn(char pc[], char ch, int n);
int syn2(char *pc, char ch, int n);
int main(){
    char pc[10];
    for(int i=0; i<10;i++){
        cout<<"\nDwse xaraktira\n";
        cin>>pc[i];
    }
    cout<<"Dwse xaraktira pros anazitisi";
    char ch;
    cin>>ch;
    int f = syn(pc, ch, 10);
    cout<<f<<endl;
    int f2 = syn(pc, ch, 10);
    cout<<f2<<endl;
    system("pause");
    return(0);
}
int syn(char pc[], char ch, int n){
    int m = 0;
    for(int i=0; i<n; i++)
        if(pc[i]==ch)
            m++;
    return m;
}
int syn2(char *pc, char ch, int n){
    int m = 0;
    for(int i=0; i<n; i++)
        if(*(pc+i)==ch)
            m++;
    return m;
}

#include <iostream>
using namespace std;
#define TOUPPER2(c)(c = c + 32)
inline void TOUPPER(char &c);
int main(){
    cout<<"Dwse xaraktira\n";
    char s;
    cin>>s;
    cout<<s<<endl;
    TOUPPER(s);
    cout<<s<<endl;
    TOUPPER2(s);
    cout<<s<<endl;
    system("pause");
    return(0);
}
inline void TOUPPER(char &c){
    c = c - 32;
}

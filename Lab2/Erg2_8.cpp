#include <iostream>
using namespace std;
int check(char ch);
int main(){
    char ch;
    cout<<"Dwse ena xaraktira\n";
    cin>>ch;
    int g;
    g = check(ch);
    cout<<g<<endl;
    system("pause");
    return(0);
}
int check(char ch){
     switch (ch)
      {
         case 'A':
            return 4;
            break;
         case 'B':
            return 4;
            break;
         case 'C':
            return 2;
            break;
         case 'D':
            return 1;
            break;
         case 'E':
            return 1;
            break;
         case 'F':
            return 1;
            break;
         default:
            return (-1);
      }
}

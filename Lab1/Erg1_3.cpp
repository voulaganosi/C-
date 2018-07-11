#include <iostream>
using namespace std;

int main(){
    int i;
    int sum;
    cout<<"a)\n";
    for(i=1; i<21; i++)
            cout<<i<<"   ";
            
    cout<<"\n\n\nb)\n";
    for(i=1; i<21; i++)
        if(i%2==0)
                  cout<<(-1)*i<<"   "; 
         else
                  cout<<i<<"   "; 
                  
              
    cout<<"\n\n\nc)\n";
    for(i=1; i<21; i++){
             cout<<i<<"   "; 
             cout<<(-1)*i<<"   ";                  
    }
    
    cout<<"\n\n\nd)\n";
    int n, c, first = 0, second = 1, next;
 
   cout << "Eisagete gia posous arithmous pou thelete na emfanistoun" << endl;
   cin >> n;
 
   cout << "Oi " << n << " oroi tis seiras fibonacci einai :- " << endl;
 
   for ( c = 0 ; c < n ; c++ )
   {
      if ( c <= 1 )
         next = c;
      else
      {
         next = first + second;
         first = second;
         second = next;
      }
      cout << next << endl;
   }
    
    system("pause");
    return(0);
}

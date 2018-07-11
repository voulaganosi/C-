#include <iostream>
using namespace std;

template <class X,class Y>
class AB
{
    X i;
    Y k;
    public:
           AB(X a, Y b);
           X geti(){ return(i); };
           Y getk();
};
///////////////////////////////////////////////////////////////
int main()
{
    AB<int,char> ob1(12,'Z');
    cout << ob1.geti() << " " << ob1.getk() << endl;
    
    AB<long,double> ob2(5L,3.1);
    cout << ob2.geti() << " " << ob2.getk() << endl;
    system("Pause");   
}
///////////////////////////////////////////////////////////////
//Sunartiseis meli tis genikis AB
template< class X, class Y > AB< X, Y >::AB(X a, Y b)
{
    i = a;
    k = b;
};
template< class X, class Y > Y AB< X, Y >::getk()
{
    return(k);
};

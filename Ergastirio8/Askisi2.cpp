#include <string.h>
#include <iostream>
using namespace std;

class AC
{
    int x;
    public:
           AC()
           {
               x = 5;
           }
           int readx()
           {
               return x;
           }
           virtual float FN()
           {
               return(3.14*x);
           }
};

class DAC1 : public AC
{
    public:
           virtual float FN()
           {
               return(readx()/4.0);
           }
};

class DAC2 : public DAC1
{
    int a,b,c;
    public:           
           DAC2() {}
           /*DAC2(int a, int b, int c)
           {
               this->a = a;
               this->b = b;
               this->c = c;
           }*/
           virtual float FN()
           {
               return(readx()*4);
           }
};
///////////////////////////////////////////////////////////////
int main()
{
    AC v;
    cout << v.readx() << endl;
    cout << v.FN() << endl;
    
    DAC1 w;
    cout << w.readx() << endl;
    cout << w.FN() << endl;
    
    DAC2 q;
    cout << q.FN() << endl;

    AC oa, *p;
    
    DAC1 oa1, *pc;
    DAC2 oa2;
     
    p = &oa;
    cout << p->FN() << endl;
    
    p = &oa1;
    cout << p->FN() << endl;
    
    p = &oa2;
    cout << p->FN() << endl;
    
    system("Pause");
}
///////////////////////////////////////////////////////////////

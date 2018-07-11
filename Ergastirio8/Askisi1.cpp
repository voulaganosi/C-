#include <string.h>
#include <iostream>
using namespace std;

class Bas
{
    int ib;
    public:
           float z;
           int getIb()
           {
               return ib;
           }
           Bas(int i)
           {
               ib = i;
           }
};

class Par1 : virtual public Bas
{
    int ip1;
    public:
           float z1;
           Par1(int i, int j) : Bas(i)
           {
               ip1 = j;
           }
};

class Par2 : virtual public Bas
{
    int ip2;
    public:
           float z2;
           Par2(int i, int j) : Bas(i)
           {
               ip2 = j;
           }
};

class Eng : public Par1, public Par2
{
    int ie;
    public:
           float sum;
           Eng(int x, int y, int z, int i) : Bas(i),Par1(x,y), Par2(x,z)
           {
               ie = i;
           }        
};

int main()
{
    int ib(3), ip1=4, ip2=5, ie=6;
    Bas b(ib);
    Par1 op1(ib,ip1);
    Par2 op2(ib,ip2);
    Eng ob(ib,ip1,ip2,ie);
    
    ob.z = 4.2;
    ob.z1 = 3.14;
    ob.z2 = 1.6;
    ob.sum = ob.z + ob.z1 + ob.z2;
    
    cout << ob.sum << endl;
    cout << b.getIb() << endl;
    system("Pause");
}

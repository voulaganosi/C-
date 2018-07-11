#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
class SH
{
    int x;
    int y;
    
    public:
           float z;
           //Askisi1
           SH();
           SH(int);
           SH(int,int);
           
           void setXY(int,int);
           void getXY(int&, int&);
           
           int emv(int, int);
           //Askisi2
           void pros(int);
           friend int pol(SH &ob, int k);
           
};

SH addobs(SH &ob1, SH &ob2);
////////////////////////////////////////////
int main()
{
    SH ob2(4,7), ob1(9), obj;

    obj.setXY(3,4);

    int a, b;
    obj.getXY(a,b);
    cout << "obj=" << a << " " << b << endl; // 3 4

    ob1.pros(5); // 
    ob1.getXY(a,b);
    cout << "ob1=" << a << " " << b << endl; // 14 14

    pol(obj,7); //
    obj.getXY(a,b);
    cout << "obj=" << a << " " << b << endl; // 21 4

    SH obX;
    obX = addobs(ob2,ob1); //
    obX.getXY(a,b);
    cout << "obX=" << a << " " << b << endl; // 18 21

    //system("pause");
    return(0);
}
////////////////////////////////////////////
void SH::setXY(int a, int b)
{
    x = a;
    y = b;
}
void SH::getXY(int &a, int &b)
{
    a = x;
    b = y;
}
//Domites
SH::SH()
{
    x = 0;
    y = 0;
}
SH::SH(int a)
{
    x = a;
    y = a;
}
SH::SH(int a, int b)
{
    x = a;
    y = b;
}
//Alles Sunartiseis
int SH::emv(int a, int b)
{
    return(a*b);
}
void SH::pros(int k)
{
    x = x + k;
    y = y + k;
}
int pol(SH &ob, int k)
{
    int a,b;
    ob.getXY(a,b);
    ob.setXY(a*k,b);
    return(a*k);
}
//sunartiseis mi melous
SH addobs(SH &ob1, SH &ob2)
{
    SH ob;
    int x1,x2,y1,y2;
    ob1.getXY(x1,y1);
    ob2.getXY(x2,y2);
    ob.setXY(x1+x2, y1+y2);
    return ob;
}

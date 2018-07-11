#include <iostream>
#include <fstream>
#include <string.h>
#include <math.h>
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
           void operator+(int);
           friend int operator*(SH &ob, int k);
           //Askisi3
           friend SH operator^(SH &ob, int k); 
           
};
//Askisi4
class DerW : public SH
{
    float w;
    public:
           void setW(float);
           void getW(float&);
           
           DerW()
           {
               setXY(0,0);
               w = 0;
           }
           DerW(int a, int b, float c) : SH(a,b)
           {
               setXY(a,b);
               w = c;
           }
               
};
//Askisi5
class DS : public SH
{
    char *s;
    int len;
    public:
           DS()
           {
               setXY(0,0);
               s = 0;
               len = 0;
           }
           DS(int a, int b, char *c) : SH(a,b)
           {
               setXY(0,0);
               strcpy(s,c);
               s = c;
               cout << len;
           }
           ~DS();
           
           void set(char *a);
           char* get();
           void emf()
           {
                int x, y;
                getXY(x,y);
                cout << *s << " " << " " << x << " " << y << endl;
           }
};

SH operator+(SH &ob1, SH &ob2);
////////////////////////////////////////////
int main()
{
    SH ob2(4,7), ob1(9), obj;

    obj.setXY(3,4);

    int a, b;
    obj.getXY(a,b);
    cout << "obj=" << a << " " << b << endl; // 3 4

    ob1.operator+(5); // 
    ob1.getXY(a,b);
    cout << "ob1=" << a << " " << b << endl; // 14 14

    operator*(obj,7); //
    obj.getXY(a,b);
    cout << "obj=" << a << " " << b << endl; // 21 4

    SH obX;
    obX = operator+(ob2,ob1); //
    obX.getXY(a,b);
    cout << "obX=" << a << " " << b << endl; // 18 21

    obX = obX^2;
    obX.getXY(a,b);
    cout << "obX=" << a << " " << b << endl;
    
    //Askisi4
    DerW G;
    int x,y;
    float z;
    G.setXY(2,3);
    G.setW(7.56);
    G.getXY(x,y);
    G.getW(z);
    cout << "DerW: " << x << " " << y << " " << z << endl;
    //Askisi5
    DerW H(4, 6, 16.72);
    H.getXY(x,y);
    H.getW(z);
    cout << "H: " << x << " " << y << " " << z << endl;
    
    DS obDS(3,3,"hahaha");
    
    /*DS o1;
    o1.set("Forrest Knight");
    //o1.emf();
    DS o2(4,5,"The string");
    //o2.emf();
    */
    system("Pause");
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
void SH::operator+(int k)
{
    x = x + k;
    y = y + k;
}
int operator*(SH &ob, int k)
{
    int a,b;
    ob.getXY(a,b);
    ob.setXY(a*k,b);
    return(a*k);
}
SH operator^(SH &ob, int k)
{
    int a, b;
    ob.getXY(a,b);
    a = (int)pow(a,k);
    b = (int)pow(b,k);
    ob.setXY(a,b);
    return(ob);
}
//sunartiseis mi melous
SH operator+(SH &ob1, SH &ob2)
{
    SH ob;
    int x1,x2,y1,y2;
    ob1.getXY(x1,y1);
    ob2.getXY(x2,y2);
    ob.setXY(x1+x2, y1+y2);
    return ob;
}
//Askisi4
void DerW::setW(float a)
{
    w = a;
}
void DerW::getW(float &a)
{
    a = w;
}
//Askisi5
DS::~DS(){}
void DS::set(char *a)
{
    strcpy(s,a);
}
char* DS::get()
{
    return s;
}

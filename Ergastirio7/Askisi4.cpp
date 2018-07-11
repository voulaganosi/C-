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
class DerW : public SH
{
    float w;
    public:
           void setW(float);
           void getW(float&);
};
//////////////////////////////////////////////////////
int main()
{
    DerW G;
    int a,b;
    float c;
    G.setXY(2,3);
    G.setW(7.56);
    G.getXY(a,b);
    G.getW(c);
    cout << "DerW: " << a << " " << b << " " << c << endl;
    system("pause");
}
//////////////////////////////////////////////////////
void DerW::setW(float a)
{
    w = a;
}
void DerW::getW(float &a)
{
    a = w;
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

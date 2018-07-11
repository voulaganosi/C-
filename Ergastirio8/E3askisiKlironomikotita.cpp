#include<iostream>
using namespace std;

class Basi {
    int x;
    public:
           void setx(int a) { x = a; };
           int getx() { return(x); };
};

class Paragomeni1 : public Basi {
    int y;
    public:
           void sety(int a) { y = a * getx(); };
           int gety() { return(y); };
};

class Paragomeni2 : public Paragomeni1 {
    int z;
    public:
           void setz(int a) { z = a - gety(); };
           int getz() { return(z); };
};

int main()
{
    Paragomeni2 ob;
    ob.setx(4);
    ob.sety(15);
    ob.setz(96);
    int a,b,c;
    a = ob.getx();
    b = ob.gety();
    c = ob.getz();
    cout << a << " " << b << " " << c << endl;
    
    system("Pause");
}

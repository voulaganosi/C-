#include <iostream>
using namespace std;

class A
{
    public:
           int x;
           float y;
           char c;
           char s[20];
           
           void swapx(A &a, A &b);
           A& operator=(const A &a);
};

void swapx(int &, int &);
void print(int &, int &);
/////////////////////////////////////////////////////////////////
int main()
{
    int a=5,b=6;
    A x,y;
    x.x = 5;
    y.x = 6;
    swapx(a,b);
    print(a,b);
    swap(x,y);
    cout << x.x << " " << y.x << endl;
    system("Pause");
}
/////////////////////////////////////////////////////////////////
void swapx(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void print(int &a, int &b)
{
    cout << a << " " << b << endl;
}
//Sunartiseis meli tis A
void swapx(A &a, A &b)
{
    A temp;
    temp = a;
    a = b;
    a = temp;
}
    
A& A::operator=(const A &a)
{
    x = a.x;
    y = a.y;
    c = a.c;
    strcpy(s, a.s);
}

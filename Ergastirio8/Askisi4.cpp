#include <iostream>
using namespace std;

class MyAr
{
    int *p;
    int len;
    public:
           MyAr();
           MyAr(int a);
           MyAr(const MyAr& ob);
           
           ~MyAr();
           
           MyAr& operator=(const MyAr &ox);
           int& operator[](int i){return p[i];}
           
           int length();
           int* begin();
           int* end();
           
           int* rbegin();
           int* rend();
};
///////////////////////////////////////////////////////////////
int main()
{
    MyAr a;
    MyAr b(10);
    for(int i=0; i< b.length(); ++i)
        b[i] = i;
    
    a = b; a.operator=(b);
    cout << a.length() << endl;
    cout << *a.end() << endl;
    MyAr c(b);
    system("Pause");
} 
///////////////////////////////////////////////////////////////
MyAr::MyAr()
{
    p = 0;
    len = 0;
}
MyAr::MyAr(int a)
{
    p = new int[a];
    len = a;
}
MyAr::MyAr(const MyAr &ob)
{
    p = ob.p;
    len = ob.len;
}
MyAr::~MyAr()
{
    delete[] p;
}
MyAr& MyAr::operator=(const MyAr &ox)
{
    p = ox.p;
    len = ox.len;
}
int MyAr::length()
{
    return len;
}
int* MyAr::begin()
{
    int* ptr;
    ptr = &p[0];
    return ptr;
}
int* MyAr::end()
{
    int* ptr;
    ptr = &p[len+1];
    return ptr;
}
int* MyAr::rbegin()
{
    int* ptr;
    ptr = &p[len];
    return ptr;
}
int* MyAr::rend()
{
    int* ptr;
    ptr = &p[-1];
    return ptr;
}

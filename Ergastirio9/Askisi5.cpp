#include <iostream>
using namespace std;

template<class X>
class stack
{
    private:
            int size;
            X *t, *v;
    public:
           stack(int sz=10);
           ~stack();
           void push (X val);
           X pop();
           inline bool empty() { return v==t; }
};

template<class X> stack<X>::stack(int sz)
{
    t=v=new X[size=sz]; 
}
template<class X> stack<X>::~stack()
{
    delete []v;
}
template<class X> void stack<X>::push(X val)
{
    if (t-v==size) return;
    *t++=val;
}
template<class X> X stack<X>::pop()
{
    if (t==v) return 0;
    return *--t;
}
///////////////////////////////////////////////////////////////
int main()
{
    stack<int> si(20);

    si.push(10);
    si.push(20);
    si.push(30);
    si.push(40);

    while (!si.empty()) cout << si.pop() << endl;
    stack<float> sf(20);

    sf.push(1.1);
    sf.push(2.2);
    sf.push(3.3);
    sf.push(4.4);
    sf.push(5.5);

    stack<float> g;
    cout << "sss" << sizeof(g) << endl;

    while (!sf.empty())
        cout << sf.pop() << endl;

    system("Pause");        
} 
///////////////////////////////////////////////////////////////

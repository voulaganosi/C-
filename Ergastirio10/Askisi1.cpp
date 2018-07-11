#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const int n = 10;
    int* pin, *beg, *end, *rbeg, *rend;
    typedef int* iter;
    iter it;
    iter rit;
    
    pin = new int[n];
    
    beg = pin;
    end = pin + n;
    rbeg = pin + n-1;
    rend = pin - 1;
    
    int rmath = 0;
    for(it=beg; it!=end; ++it)
    {
        rmath = rand()%100;
        *it = rmath;
    }
    cout << *beg << " " << *end << " " << *rbeg << " " << *rend << endl;
    
    cout << "Emfanisi twn stoixeiwn tou pinaka...anapoda" << endl;
    for(rit=rbeg; rit!=rend; --rit)
        cout << *rit << endl;
    system("Pause");
}

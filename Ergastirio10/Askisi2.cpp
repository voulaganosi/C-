#include <iostream>
#include <cmath>
using namespace std;

class iter
{
    int* p;
    
    public:
           iter()
           {
               p = 0;
           };
           iter(int*x);
           iter(const iter& mit);
           
           iter& operator=(int *x)
           {
               p = x;
               return *this;
           }
           iter& operator++()
           {
               ++p;
               return *this;
           }
           bool operator!=(const int* ptr)
           {
               return p != ptr;
           }
           int& operator*()
           {
               return *p;
           }
};

iter(int* x)

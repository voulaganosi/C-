#include <iostream>
using namespace std;

class Cx
{
    public:
           Cx(float a)
           {
               x = a;
           }
           
           void setxy(float a, float b)
           {
               x = a;
               y = b;
           }
           float readx(){return x;}
           float ready(){return y;}
           
           virtual float Func() = 0;
    private:
            float x;
            float y;
};

class DCx : public Cx
{
    public:
           DCx(float a) : Cx(a){}
           
           float Func()
           {
               float a = readx();
               float y = a * 33.3;
               return(y);
           }
};

class DCx2 : public Cx
{
    private:
            float c;
    public:
           DCx2(float a) : Cx(a) {}
           
           float Func()
           {
               float a = readx();
               float y = a*1.65;
               return(y);
           }
};
    
int main()
{
    Cx *p;
    DCx2 ob1(5);

    p = &ob1;
    
    cout << ob1.readx() << " Xiliometra se Milia " << p->Func() <<endl;
    system("Pause");
}

#include <iostream>
using namespace std;

class SH{
        int x;
        int y;
    public:
        float z;
        SH(){
            x=0;
            y=0;
        }
        SH(int a){
            x=a;
            y=a;
        }
        SH(int a, int b){
            x=a;
            y=b;
        }
        
        void setXY(int a, int b){
            x=a;
            y=b;
        }
        void getXY(int &a, int &b){
            a=x;
            b=y;    
        }
        
        double upEmb(int a, int b){
            return (a*b);
        }
        
        void pros(int k){
            x=x+k;
            y=y+k;
        }
        
        friend int pol(SH& ob,int k){
            ob.x=ob.x*k;
            return ob.x;     
        }
        
        void operator+(int k){
            x=x+k;
            y=y+k;    
        }
        friend int operator*(SH& ob,int k){
            ob.x=ob.x*k;
            return ob.x;    
        }
};
SH addobs(SH &ob1, SH &ob2);
SH operator+(SH& obA,SH& obB);
int main(){
    /*
    SH ob2(4,7), ob1(9), obj;
    obj.setXY(3,4);
    int a, b;
    obj.getXY(a,b);
    cout << "obj=" << a << " " << b << endl; 
    ob1.pros(5); 
    ob1.getXY(a,b);
    cout << "ob1=" << a << " " << b << endl; 
    pol(obj,7);
    obj.getXY(a,b);
    cout << "obj=" << a << " " << b << endl; 
    SH obX;
    obX = addobs(ob2,ob1); 
    obX.getXY(a,b);
    cout << "obX=" << a << " " << b << endl;
    */
    
    cout<<"\n---------------------------------\n";
    
    SH ob2(4,7), ob1(9), obj;
    obj.setXY(3,4);
    int a, b;
    obj.getXY(a,b);
    cout << "obj=" << a << " " << b << endl; 
    ob1.operator+(5); 
    ob1.getXY(a,b);
    cout << "ob1=" << a << " " << b << endl; 
    operator*(obj,7);
    obj.getXY(a,b);
    cout << "obj=" << a << " " << b << endl; 
    SH obX;
    obX = operator+(ob2,ob1); 
    obX.getXY(a,b);
    cout << "obX=" << a << " " << b << endl;
    
    cout<<"\n---------------------------------\n";
    
    /*
    ob1+5;
    int X = obj*8;
    obX = ob2 + ob1;
    */ 
    
    system("pause");
    return(0);
}
SH addobs(SH &ob1, SH &ob2){
    SH t;
    int k,m,n,o,w,l;
    ob1.getXY(k,m);
    ob2.getXY(n,o);
    w=k+n;
    l=m+o;
    t.setXY(w,l);
    return (t);   
}
SH operator+(SH& obA,SH& obB){
    SH t;
    int k,m,n,o,w,l;
    obA.getXY(k,m);
    obB.getXY(n,o);
    w=k+n;
    l=m+o;
    t.setXY(w,l);
    return (t);    
}

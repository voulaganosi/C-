#include <iostream>
using namespace std;

int main(){
    double thermokrasia = 0;
    double mesi = 0;
    int plithos = 0;
    int pz = 0;
    double mesiZ = 0;
    int pk = 0;
    double mesiK = 0;
    int idank = 0;
    double max = -50;
    double min = 60;
    //bool b = true;
    while(true){
       cout<<"Dwse thermokrasia...";
       cin>>thermokrasia;
       if(thermokrasia==-999)
            break;
       if(thermokrasia <-50 || thermokrasia >60)
            continue;
        plithos++;
        //min = thermokrasia;
        //max = thermokrasia;
        mesi += thermokrasia;
       if(thermokrasia>=17 && thermokrasia <=27){
            pz++;
            mesiZ += thermokrasia;
        }     
        else if(thermokrasia>=1 && thermokrasia<=17){
            pk++;
            mesiK += thermokrasia;
        }
        if(thermokrasia==22)
            idank++;
        if(thermokrasia>max)
            max = thermokrasia;
        if(thermokrasia<min)
            min = thermokrasia;
    }
    if(plithos>0){
        mesi = mesi/plithos;
        if(pz>0)
            mesiZ = mesiZ/pz;
        if(pk>0)
            mesiK = mesiK/pk;
        cout<<"\nPlithos thermokrasiwn : "<<plithos;
        cout<<"\nMesi thermokrasia : "<<mesi;
        if(pz>0)
            cout<<"\nPlithos zestwn imerwn : "<<pz<<" kai mesi thermokrasia : "<<mesiZ;
        if(pk>0)
            cout<<"\nPlithos kruwn imerwn : "<<pk<<" kai mesi thermokrasia : "<<mesiK;
        cout<<"\nPlithos idanikwn imerwn : "<<idank;
        cout<<"\nMax thermokrasia : "<<max;
        cout<<"\nMin thermokrasia : "<<min;
        cout<<"\n";
    }else
        cout<<"\nDen egine eisagwgh\n\n";
    system("pause");
    //cin.get();
    return(0);
}

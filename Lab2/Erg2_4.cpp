#include <iostream>
using namespace std;

int main(){
    int p, i=0, ak=0, ek=0; 
    int plz = 0, plk = 0, pli = 0;
    double mesi = 0, mesiz = 0, mesik = 0;
    double max = -20.0;
    double min = 30.0;
    double a;
    cout<<"Dwse plithos thermokrasiwn : ";
    cin>>p;
    double thr[p];
    srand(time(NULL));
    double f;
    while(i<p){
        f = (double)rand() / RAND_MAX;
        a = (-60.0) + f * (40.0 - (-60.0));
        cout<<"a="<< a<<"\n";
        //a = (rand()%(40.0-(-60.0))+(-60.0))/(double)RANDOM_MAX;
        
        ek++;
        if(a>-20.0 && a<30.0){
            mesi = mesi+a;
            thr[i] = a;
        }
        else{
            ak++;
            continue;
        }
        
        if(thr[i]>17 && thr[i]<28){
            plz++;
            mesiz = mesiz + thr[i];
        }
        if(thr[i]>1 && thr[i]<17){
            plk++;
            mesik = mesik + thr[i];
        }
        if(thr[i]==22)
            pli++;
        if(thr[i]>max)
            max = thr[i];
        if(thr[i]<min)
            min = thr[i];
        i++; 
    }
    
    mesi = mesi / (ek-ak);
    if(plz>0)
        mesiz = mesiz / plz;
    if(plk>0)
        mesik = mesik / plk;
    double posostoAk = (ak/ek)*100;
    cout<<"\nMesi thermokrasia : "<<mesi;
    if(plz>0)
        cout<<"\nPlithos zestwn : "<<plz<<"\n\tkai mesi thermokrasia autwn : "<<mesiz;
    if(plk>0)
        cout<<"\nPlithos kruwn : "<<plk<<"\n\tkai mesi thermokrasia autwn : "<<mesik;
    cout<<"\nPlithmos idanikwn : "<<pli;
    cout<<"\nMax : "<<max;
    cout<<"\nMin : "<<min;
    cout<<"\nPososto mi ekgurwn : "<<posostoAk<<"%";
    
    
    system("pause");
    return(0);
}

#include <iostream>
using namespace std;
float diav(float a[], int n);
float methe(float a[], int n);
void zekr(float a[], int n, int &pze, float *mkr);
int perf(float a[], int n);
int* ptomx(float a[], int n);
short thesi(float a[], int n);
int main(){
    cout<<"Dwse megethos pinaka\n";
    int n;
    float me, mesi;
    cin>>n;
    float a[n];
    me = diav(a, n);
    mesi = methe(a, n);
    int pze = 0;
    float mkr = 0;
    zekr(a,n,pze,&mkr);
    int idan = perf(a,n);
    int *x = ptomx(a,n);
    short th = thesi(a,n);     
    system("pause");
    return(0);
}
float diav(float a[], int n){
    int i=0;
    float f,g;
    float ak=0;
    srand(time(NULL));
    while(i<n){
        f = (float)rand() / RAND_MAX;
        g = (-60.0) + f * (40.0 - (-60.0));
        //cout<<"a="<<g<<"\n";
        if(g>-20.0 && g<30.0){
            i++;
            a[i] = g;
        }
        else{
            ak++;
            continue;
        }
    }
    return ak;
}
float methe(float a[], int n){
      float s = 0;
      for(int i=0; i<n; i++)
              s = s + a[i];
      s = s/n;
      return s;
}
void zekr(float a[], int n, int &pze, float *mkr){
     int j = 0;
     for(int i=0; i<n; i++){
             if(a[i]>17 && a[i]<=28)
                        pze++;
             if(a[i]>1 && a[i]<=17){
                       *mkr++;
                       j++;
             }
     }
     *mkr = *mkr / j;
}
int perf(float a[], int n){
    int k=0;
    for(int i=0; i<n; i++)
            if(a[i]==22)
                        k++;
    return k;                           
}
int* ptomx(float a[], int n){
     float max = -60;
     int *point;
     for(int i=0; i<n; i++)
             if(a[i]>max)
                        *point = a[i];
     point = new int;
     *point = (int)max;
     return point;
}
short thesi(float a[], int n){
      int min = 60;
      int th = 0;
      for(int i=0; i<n; i++)
             if(a[i]<min){
                          min = a[i];
                          th = i;
             }
      return th;
}

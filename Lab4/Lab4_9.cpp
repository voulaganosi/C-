#include <iostream>
using namespace std;
void eis(char pin[][100], int n);
void aon(char *s);
int main(){
    int n;
    cout<<"Dwse plithos strings\n";
    cin>>n;
    char a[n][100];
    char *pa[n];
    char **pp;
    for(int i=0; i<n; i++)
        pa[i] = a[i];
    pp = pa;
    system("pause");
    return(0);
}
void eis(char pin[][100], int n){
    int f,a,e,o;
    char c;
    int j=0;
    srand(time(NULL));
    for(int i=0; i<n; i++){
        f = (int)rand() / RAND_MAX;
        e = rand()%(20-6) + 6;
        o = rand()%(12-4) + 4;
        while(j<e){
            a = rand()%('Z'-'A') +'A';
            c = (char)a;
            pin[i][j] = c
            j++;
        }
        pin[n][j] = ' ';
        j++;
        while(j<o){
            a = rand()%('Z'-'A') +'A';
            c = (char)a;
            pin[i][j] = c
            j++; 
        }
        pin[n][j] = '\0';
    }
}

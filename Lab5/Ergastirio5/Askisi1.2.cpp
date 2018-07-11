#include <iostream>
#include <math.h>

using namespace std;

int len(char *s);
int at(char *s);
void F(char *mes,char *s,int (*fp)(char *)); 

int main()
{
    char s[100];
    int (*pf)(char *);
    cout << "Dwste ena String: " << endl;
    cin >> s;
    pf = len;
    F("Mikos tou String = ", s, len);
    cout << "-----------------------------" << endl;
    pf = at;
    F("Thesi tou G sto String = ", s, pf);
    
    system("Pause");
}

int len(char *s)
{
    int num = 0;
    while(*s != '\0')
    {
        num++;
        s++;
    }
    return num;
}

int at(char *s)
{
    int num = 1;
    while(*s != 'G')
    {
        num++;
        s++;
    }
    return num;
}

void F(char *mes,char *s,int (*fp)(char *))
{
    cout << mes << fp(s) << endl;
}

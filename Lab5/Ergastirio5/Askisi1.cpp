#include <iostream>
#include <math.h>

using namespace std;

int len(char *s);
int at(char *s);

int main()
{
    char s[100];
    int (*pf)(char *);
    cout << "Dwste ena String: " << endl;
    cin >> s;
    pf = len;
    cout << "Mikos tou String = " << pf(s) << endl;
    cout << "-----------------------------" << endl;
    pf = at;
    cout << "Thesi tou G sto String = " << pf(s) << endl;
    
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

#include <iostream>
#include <math.h>

using namespace std;
int zorp(int n);

int main()
{
    bool b = zorp(36);
    if(b == 0)
        cout << "Einai perittos!" << endl;
    else
        cout << "Einai zugos!" << endl;
    system("Pause");
}

int zorp(int n)
{
    int bin[100];
    int i = 0, f, s;
    f = n;
    while(f > 0)
    {
        s = f % 2;
        f = f / 2;       
        if(s == 1)
            bin[i] = s;
        else
            bin[i] = s;
        i++;
    }
    if(bin[0] == 1)
        return 0;
    else
        return 1;
}

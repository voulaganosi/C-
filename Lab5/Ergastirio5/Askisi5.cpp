#include <iostream>
#include <math.h>

using namespace std;
void emf(int n);

int main()
{
    emf(256);
    system("Pause");
}

void emf(int n)
{
    int bin[100];
    int i = 0, f, s;
    cout << "O ari9mos: " << f << " sto dekae3adiko sustima einai: " << endl;
    cout << std::hex << n << '\n';
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
    cout << std::dec << "O ari9mos: " << n << " sto duadiko sustima einai: " << endl;
    for(int j=i-1; j>=0; j--)
        cout << bin[j];
    cout << endl;
}

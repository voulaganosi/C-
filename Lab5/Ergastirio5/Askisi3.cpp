#include <iostream>
#include <math.h>

using namespace std;

int main(int ac, char *av[])
{
    for(int i=0; i<ac; i++)
        cout << av[i] << " ";
    cout << endl;
    int sum = 0;
    for(int i=1; i<ac; i++)
    {
        sum = sum + atoi(av[i]);
    }
    cout << sum << endl;
    system("Pause");
}

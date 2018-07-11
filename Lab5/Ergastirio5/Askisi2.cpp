#include <iostream>
#include <math.h>

using namespace std;

int main(int ac, char *av[])
{
    //av[1] = atoi("23");
    //av[2] = atoi("45");
    for(int i=0; i<ac; i++)
        cout << av[i] << " ";
    cout << endl;
    char **c;
    c = av;
    for(int i=0; i<ac; i++)
    {
        cout << *(*c+1) << endl;
        c++;
    }
    system("Pause");
}

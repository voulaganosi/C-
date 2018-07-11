#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char s[50], ch;
    ifstream is;
    cout << "Dwste onoma tou arxeiou: " << endl;
    cin >> s;
    strcat(s,".txt");
    cout << s;
    
    is.open(s);
    while(1)
    {
        ch = is.get();
        if(is.eof())
            break;
        cout << ch;
    }
    system("Pause");
}

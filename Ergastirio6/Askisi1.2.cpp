#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char s[50], ch[100];
    ifstream is;
    cout << "Dwste onoma tou arxeiou: " << endl;
    cin >> s;
    strcat(s,".txt");
    
    is.open(s);
    while(1)
    {
        is.getline(ch, sizeof(ch), '\n');
        if(is.eof())
            break;
        cout << ch << endl;
    }
    system("Pause");
}

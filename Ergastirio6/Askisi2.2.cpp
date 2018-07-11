#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char s1[50], s2[50], ch[100];
    ifstream is;
    ofstream os;
    cout << "Dwste onoma tou 1ou arxeiou: " << endl;
    cin >> s1;
    strcat(s1,".txt");
    cout << "Dwste onoma tou 2ou arxeiou: " << endl;
    cin >> s2;
    strcat(s2,".txt");
    
    is.open(s1);
    os.open(s2);
    while(1)
    {
        is.getline(ch, sizeof(ch), '\n');
        os.put(ch);
        if(is.eof())
            break;
        cout << ch;
    }
    is.close();
    os.close();
    system("Pause");
}

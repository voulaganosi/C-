#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    char dummy[100], fname[50], ch;
    char amount, price[4];
    cout << "Dwste to onoma tou arxeiou: " << endl;
    cin >> fname;
    ifstream is;
    ofstream os;
    strcat(fname, ".txt");
    
    is.open("Askisi3.txt");
    os.open(fname);
    
    is.getline(dummy, sizeof(dummy), '\n');
    
    int n = 3;
    is.seekg(5);
    while(1)
    {
        
        amount = is.get();
        if(is.eof())
            break;
        cout << amount << endl;
        is.seekg(5+n);
        n = n + 6;
    }
    system("Pause");
        
}

#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

int main()
{
    int code, amount;
    float price;
    int num;
    char name[50], fname[50];
    ofstream os;

    
    cout << "Dwste to onoma sas: " << endl;
    cin >> name;
    cout << "Dwste pli9os proiontwn: " << endl;
    cin >> num;
    cout << "Dwste onoma arxeiou: " << endl;
    cin >> fname;
    strcat(fname, ".txt");
    
    os.open(fname);
    int i = 0;
    os << name << " " << num << endl;
    while(i<num)
    {
        code = rand() % 9000 + 1000;
        amount = rand() % 9 + 1;
        price =(float)(rand() % 1900 + 200) / 100;
        os << code << " " << amount << " " << price << endl;
        i++;
    }
    os.close();
    
    system("Pause");
}

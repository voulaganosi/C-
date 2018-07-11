#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;
class Proion
{
    public:
    int kod;
    int pos;
    float timi;
    char perigrafi[40];    
};

int main()
{
    int k,p;
    float t;
    char per[40];
    fstream os;
    char kodikos[10];
    Proion pro;
    
    os.open("Askisi5.dat", ios::binary);
    
    for(int i=0; i<5; i++)
    {
        cout << "Dwste kwdiko: " << endl;
        cin >> k;
        pro.kod = k;
        cout << "Dwste posotita: " << endl;
        cin >> p;
        pro.pos = p;
        cout << "Dwste timi: " << endl;
        cin >> t;
        pro.timi = t;
        cout << "Dwste perigrafi: " << endl;
        cin >> per;
        strcpy(pro.perigrafi, per);
        
        os << '123' << " " << p << " " << t << " " << per << "\n";
        //os.write((char *) &pro, sizeof(Proion));
    }
    cout << "Dwste ton kwdiko pou psaxnete: " << endl;
    cin >> kodikos;
    string r = 
    "0";
    int i = 0;
    while(i<5)
    {
        if(os.read((char *) &pro, sizeof(Proion)) == kodikos)
        {
            cout << "Vrethike!";
            break; 
        }
        cout << r;
        i++; 
    }
    cout << r;
    
    os.close();
    system("Pause");
}
        
        

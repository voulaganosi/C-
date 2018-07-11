#include <fstream.h>
#include <iostream.h>
struct Date
{
    int mo, da, yr;
};
       
int main()
{
    Date dt = { 20, 7, 97 };
    ofstream tfile( "date.dat" , ios::binary );
    tfile.write( (char *) &dt, sizeof(dt));
    system("Pause");
    return(0);
}

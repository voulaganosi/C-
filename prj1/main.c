#include <stdio.h>
#include <stdlib.h>
void myfun(float x, float y[]);

int main(int argc, char *argv[])
{
    float x, y[1];
    printf("Askhsh 2.3\n");
    printf("Ypologismos tou 1/x^0+1/x^1+… \n");
    printf("\n");
    printf("Dose timh gia to x : ");
    scanf ("%f",&x);
    myfun(x,y);
    printf("x = %12.8f ---- y = %12.8f\n", x, y[0]);
    system("PAUSE");	
    return 0;
}

void myfun(float x, float y[])
{

    float oros = 1.0, sum = 1;
    while (oros > 0.0000001)
    {
        oros = oros / x; 
        sum = sum + oros; 
    
        printf("x = %12.8f myfun = %12.8f\n", x, sum);
    }
    
    y[0] = sum;
}

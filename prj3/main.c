#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    int i;
    int n;
    
    
    printf("Dwse ton vathmo tou poluwnymou : " );
    scanf("%i", &n);
    float ksi,p[n+1],q[n+1];
    printf("Megethos pinaka : %d\n", sizeof(p)/sizeof(p[0]));
    printf("Askhsh 3.1\n");
    printf("Ypologismos timhs Polywnymou me sxhma Horner\n");
    printf("\n");
    
    for ( i = 0; i<=n; i++ )
    {
        printf("Dose timh gia to p[%d ] : ",i);
        scanf ("%f",&p[i]);
    }
    
    for ( i = 0; i<=n; i++ )
    {
        printf("p[%d] = %f\n",i, p[i]);
    }
    
    printf("Dose timh gia to ksi : ");
    scanf ("%f",&ksi);
    
    q[0] = p[0];
    for ( i = 1; i<=n; i=i+1 )
        q[i] = p[i]+q[i-1]*ksi;
        
    for ( i = 0; i<=n-1; i+=1 )
        printf("q[ %d ] = %12.8f\n", i, q[i]);
        
    printf("Ypoloipo = q[ %d ] = %12.8f\n", n, q[n]);
    
    
  system("PAUSE");	
  return 0;
}

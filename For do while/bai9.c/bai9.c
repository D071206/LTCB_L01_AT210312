#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Nhap n: "); scanf("%d", &n);
    long long gt=1; 
    float s=0;
    for(int i=1; i<=n; i++)
    {
            gt*=i;
            s+=1.0/gt;
    } 
    printf("s=%.2f",s);
    
    return 0;
}
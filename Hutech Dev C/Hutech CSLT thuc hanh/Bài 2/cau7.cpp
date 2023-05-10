#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
	int n,Tien;

	printf("Nhap vao so KM:");
	scanf("%d",&n);
	Tien=0;
	if (n<=1)
        Tien = 5000;
        else if (n>1 && n<=30)
        Tien = 5000 + (n-1) + 1000;
    else if  (n>30)
        Tien = 5000+28*1000+(n-29)*3000;
        printf("\n So tien phai tra: %d VND", Tien);
    return 0;
}
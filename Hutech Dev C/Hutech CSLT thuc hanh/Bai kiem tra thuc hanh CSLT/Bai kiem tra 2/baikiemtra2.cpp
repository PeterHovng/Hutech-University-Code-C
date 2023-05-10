#include<stdio.h>  
#include<conio.h>  
int main()  
{  
    int a=0,b=1,i,t,n,j;  
    do 
	{
    printf ("nhap n: ");
    scanf ("%d",&n);
    if (n>10||n<=2)
    printf ("nhap sai,nhap lai");
	}
	while (n<2||n>10);
    for(i=1;i<=n;i++)  
    {  
        a=0;  
        b=1;  
        printf("%d\t",b);  
        for(j=1;j<i;j++)  
        {  
            t=a+b;  
            printf("%d\t",t);
            a=b;
            b=t;
        }  
        printf("\n");  
    }  
    getch();  
}
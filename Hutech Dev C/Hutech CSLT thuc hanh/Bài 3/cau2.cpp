#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int i,n;
do 
{
printf("\nNhap N: ");
scanf("%d",&n);
if (n<=0)
printf("Nhap sai, nhap lai");
}
while (n<=0);
//a
printf("Cac so trong pham vi 1 den N: ");
for(i=1;i<=n;i++)
printf("%d" " ",i);
//b
    printf("\n\nCac so chan trong pham vi 1 den N: ");
    for(i=1;i<=n;i++)
    if(i%2==0)
    {
    printf("%d " "",i);
}
//c
    printf("\n\nCac so le khong chia het cho 3 trong pham vi 1 den N: ");
    for(i=1;i<=n;i++)
    if(i%2!=0&&i%3!=0)
    {
printf("%d " "",i);
}	
//d
int S1=0;
printf("\n\nTinh S1=1+2+...+N");
    for(i=1;i<=n;i++)
S1=S1+i;
printf("\nS1=%d",S1);

    int S2=0;
printf("\n\nTinh S2=-1+2-3+4-...+((-1)^N)*N");
for(i=1;i<=n;i++)
S2=S2+pow(-1,i)*i;
printf("\nS2=%d",S2);

    float S3=0;
printf("\n\nTinh S3=1/2+2/3+3/4+...+N/(N+1)");
for(i=1;i<=n;i++)
S3=S3+(float) i/(i+1);
printf("\nS3=%f",S3);

    int S4=1,x;
printf("\n\nTinh S4=x^N");
printf("\nNhap x: ");
scanf("%d",&x);
for(i=1;i<=n;i++)
S4=S4*x;
printf("S4=%d",S4);

    int cs, tong=0;
while(n!=0)
{
cs=n%10;
tong=tong+cs;
n=n/10;
}
printf("\n\nTong cac chu so la %d", tong);	
return 0;	
}    
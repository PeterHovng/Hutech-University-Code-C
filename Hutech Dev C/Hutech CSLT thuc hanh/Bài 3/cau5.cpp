#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j;
    printf("\n=========Bang cuu chuong================");
    for(i = 1; i <= 9; i++)
    {
        for(j = 1; j <= 9; j++)
        {
            printf("\n%d x %d = %d", i, j, i*j);
        }
        printf("\n========================");
    }
    getch();
}

#include <stdio.h>
#include <conio.h>

int main()
{
    int num;
    printf("ent ");
    scanf("%d",&num);
    int mid = num/2 + 1;
    for(int i=1; i<=num; i++)
    {
        for(int j= 1; j<=num; j++)
        {
            if(j==mid || j == num - mid + 1)
                printf("*");
            else 
                printf(" ");
        }
        if(i<=num/2)
            mid--;
        else
            mid++;
        printf("\n");
    }
}
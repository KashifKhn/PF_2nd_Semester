#include <stdio.h>

int findFactorial(int num)
{
    int factorial = 1;
    for(int i = num; i > 1; i--)
        factorial *= i;
    return factorial;
}

int main()
{
    int row;
    printf("Enter numbers of Row: ");
    scanf("%d", &row);
    int s = row -1;
    int e = row -1;
    int sp = 0;
    int c = 0;
    for(int i = 0; i < row; i++)
    {
        c = 0;
        for(int j = 0; j < row*2-1; j++)
        {
            if(j >= s && j<= e && sp == 0){
                int toPrint = findFactorial(i) / (findFactorial(c) * findFactorial(i - c));
                printf("%d", toPrint);
                sp =1;
                c++;
            }
            else{
                printf(" ");
                sp = 0;
            }
        }

        s--;
        e++;
        printf("\n");
    }
}


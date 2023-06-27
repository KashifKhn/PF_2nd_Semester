#include <stdio.h>
#include <conio.h>
int main()
{
    char ch;
    int count = 0;
    while(1)
    {
        ch = getche();
        if(ch==13)
            break;
        if (ch != ' ')  
            count++;
    }
    printf("The total char = %d ", count);
}
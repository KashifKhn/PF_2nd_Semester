#include <stdio.h>

int main(){

    int count = 50;
    printf("Even Number Between 50 to 70 is \n");
    while (count <= 70)
    {
       if(count % 2 == 0)
         printf("%d\n",count);
        
        count++;
    }
    
}
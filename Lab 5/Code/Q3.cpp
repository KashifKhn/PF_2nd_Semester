#include <stdio.h>

int main(){

    int count = 1;
    printf("Odd Number Between 1 to 20 is \n");
    while (count <= 20)
    {
       if(count % 2)
         printf("%d\n",count);
        
        count++;
    }
    
}
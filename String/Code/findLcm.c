#include <stdio.h>
#include <stdbool.h>

void findLCM(int Number[], int size, int max);
int findMax(int Number[], int size);

void inputNumber(int Number[], int size);
void printNumber(int Number[], int size);


int main()
{
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int Number[size];
    inputNumber(Number, size);
    printNumber(Number, size);
    int max = findMax(Number, size);
    findLCM(Number, size, max);
}

void findLCM(int Number[], int size, int max)
{
    int lcm = max;
    int flag = false;
    while (flag == false)
    {
        int count = 0;
        for (int i = 0; i < size; i++)
        {
            if (lcm % Number[i] == 0)
                count++;
        }
        if (count == size)
            flag = true;
        else
            lcm += max;
    }
    printf("LCM is: %d\n", lcm);
}

void inputNumber(int Number[], int size)
{
    printf("Enter elements of array: \n");
    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &Number[i]);
    }
}

void printNumber(int Number[], int size)
{
    printf("Array is: ");
    for (int i = 0; i < size; i++)
        printf("%d ", Number[i]);
    printf("\n");
}

int findMax(int Number[], int size)
{
    int max = Number[0];
    for (int i = 1; i < size; i++)
    {
        if (Number[i] > max)
            max = Number[i];
    }
    return max;
}
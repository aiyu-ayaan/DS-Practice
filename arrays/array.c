
/**
 * @author aiyu
 *
 * Array in C
 *
 */

#include <stdio.h>

#define MAX_SIZE 5

int array[MAX_SIZE];

void input();
void display();
void findLargestAndSmallest();

void swap(int *, int *);
void sort();

void main()
{

    input();
    display();
    findLargestAndSmallest();
    sort();
}

void input()
{
    for (int i = 0; i < MAX_SIZE; i++)
    {
        printf("Enter the array element %d :- ", (i + 1));
        scanf("%d", &array[i]);
    }
}

void display()
{
    printf("Printing Array :-\n");
    for (int i = 0; i < MAX_SIZE; i++)
    {
        printf("%d \t", array[i]);
    }
}

void findLargestAndSmallest()
{
    int max = 0, min = 0;
    for (int i = 0; i < MAX_SIZE; i++)
        for (int j = 0; j < MAX_SIZE; j++)
        {
            if (array[i] < array[j])
                max = array[j];
            if (array[i] > array[j])
                min = array[j];
        }
    printf("\nLargest Element is %d", max);
    printf("\nSmallest Element is %d\n", min);
}

void sort()
{
    for (int i = 0; i < MAX_SIZE - 1; i++)
        for (int j = 0; j < MAX_SIZE - i - 1; j++)
        {
            if (array[j] > array[j + 1])
                swap(&array[j], &array[j + 1]);
        }
    display();
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
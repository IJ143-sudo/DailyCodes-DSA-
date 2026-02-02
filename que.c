/*Write a C program to delete an element x at a given 1-based position pos in an array of n integers. 
//shift existing elements to the left.*/

#include <stdio.h>

int main() 
{
    int n, pos, x;
    int arr[100];   // assuming max size is 100

    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("enter array elements: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Input position (1-based)
    printf("enter position: ");
    scanf("%d", &pos);

    // Convert to 0-based index
    int index = pos - 1;

    // Shift elements to the left
    for(int i = index; i < n-1; i++) 
        arr[i] = arr[i + 1];
    
    n--;

    // Print new array
    for(int i = 0; i < n; i++) 
        printf("%d ", arr[i]);
    


    return 0;
}
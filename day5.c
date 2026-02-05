//WAP a program to merge two sorted arrays 
//  return the answer in the first array in sorted way
#include <stdio.h>

int main()
 {
    int m, n;

    // Read size of first log
    scanf("%d", &m);
    int arr1[m];

    for(int i = 0; i < m; i++) 
        scanf("%d", &arr1[i]);
    

    // Read size of second log
    scanf("%d", n);
    int arr2[n];

    for(int i = 0; i < n; i++) 
        scanf("%d", &arr2[i]);
   
    int i = 0, j = 0;

    // Merge both arrays
    while(i < m && j < n) 
    {
        if(arr1[i] <= arr2[j])
         {
            printf("%d ", arr1[i]);
            i++;
        } else {
            printf("%d ", arr2[j]);
            j++;
        }
    }

    // Print remaining elements of arr1
    while(i < m)
     {
        printf("%d ", arr[i]);
        i++;
    }

    // Print remaining elements of arr2
    while(j < n) 
    {
        printf("%d ", arr2[j]);
        j++;
    }

    return 0;
}
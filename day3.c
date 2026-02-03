#include <stdio.h>

int main()
 {
    int n, k;
    
    // Read array size
    scanf("%d", &n);
    
    int arr[n];
    
    // Read array elements
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
   
    // Read key
    scanf("%d", &k);

    int comparisons = 0;
    int foundIdx = -1;

    // Linear Search
    for(int i = 0; i < n; i++)
    {
        comparisons++;
        
        if(arr[i] == k)
         {
            foundIdx = i;
            break;
         }
    }

    // Output result
    if(foundIdxx != -1) 
        printf("Found at index %d\n", foundIdx);
     else 
        printf("Not Found\n");

    printf("Comparisons = %d\n", comparisons);

    return 0;
}

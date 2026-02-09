#include <stdio.h>

int main() {
    char s[100];
    int start = 0, end = 0;
    char temp;

    scanf("%s", s);  

    // find length of string
    while (s[end] != '\0') 
        end++;
    
    end = end - 1;   // point to last character

    // reverse in place using two pointers
    while (start < end) 
    {
        temp = s[start];
        s[start] = s[end];
        s[end] = temp;

        start++;
        end--;
    }

    printf("%s", s); // print reversed string

    return 0;
}
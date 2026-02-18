//check if a string is palindrome.
/* ALGO:
take a string 
traverse the string from both front and end
if letter not matches -not a palindrome -> break
else  a palindrome 
*/

#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    int ispalindrome=1;

    printf("Enter a string: ");
    scanf("%s", &str);

  for(int start=0,end=strlen(str)-1;start<end;start++,end--)
  {
    if(str[start]!=str[end])
    {
     ispalindrome=0;
     break;
    }
   }

if(ispalindrome)
printf("YES");
else
printf("NO");


return 0;
}
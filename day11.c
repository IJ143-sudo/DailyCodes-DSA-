//MATRIX ADDITION
/* ALGO:
input dimensions for the matrices A and B
input matrix elements
ADDij = Aij+Bij
print add matrix*/

#include<stdio.h>
int main(){

    int m,n;
    printf("enter dimensions for matrices: ");
    scanf("%d %d",&m,&n);

   int A[m][n], B[m][n],ADD[m][n];

   printf("Enter elements for A(%d rows,%d columns):\n",m,n);
   for(int i =0;i<m;i++){
    for(int j =0;j<n;j++)
        scanf("%d",&A[i][j]);
   }

   printf("Enter elements for B(%d rows,%d columns):\n",m,n);
   for(int i =0;i<m;i++){
    for(int j =0;j<n;j++)
        scanf("%d",&B[i][j]);
   }

   for(int i =0;i<m;i++){
    for(int j =0;j<n;j++)

    ADD[i][j] = A[i][j] + B[i][j];
   }

   printf("Added resultant matrix is:\n");
   for(int i=0;i<m;i++){
    for(int j=0;j<n;j++)
    printf("%d ",ADD[i][j]);
    printf("\n");
   }
   return 0;
}












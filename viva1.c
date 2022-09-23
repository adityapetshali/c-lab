#include <stdio.h>
int main() {
   int rows,n,r,ncr,ans;
   printf("Enter the values: ");
   scanf("%d", &ncr);
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   
   for (n = 0; n < rows; n++) 
   {
     
      for (r = 0; r <= rows; r++) 
      {
         if (r==0||n==0||n== rows-1||r==rows)
             ans= ncr;
         else if(r==1||n==1||n==rows-2||r==rows-1)
            ans= ncr-1;
        else if(r==2||n==1||n==rows-3||r==rows-2)
        ans=ncr-2;
        else
        ans=1;
         printf(" %d", ans);
      }
      printf("\n");
   }
   return 0;
}
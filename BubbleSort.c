#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j,ar[1000],temp,k;
    scanf("%d",&n);
    for(i=0;i<n;i++){scanf("%d",&ar[i]);}
    i=n;
    while(i--)
    {   j=i-1;
        while(j<i&&j>=0)
        {
          if(ar[i]<ar[j])
          {   temp=ar[i];
              ar[i]=ar[j];
              ar[j]=temp;
          }
          j--;
        }
    for(k=0;k<n;k++){printf("%d",ar[k]);}
    printf("\n");
   }
   return 0;

}

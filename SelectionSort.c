#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j,ar[1000],k,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++){scanf("%d",&ar[i]);}
    i=0;
    while(i<n)
    {
        j=i+1;
        while(j<n)
        {   if(ar[i]>ar[j])
            {
                temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
            }
          j++;
        } i++;
    }
    return 0;
}

//Reverse.c
#include <stdio.h>
void main ()
{
    int a[]={1,5,7,9,4,2,4,5,6,0};
    int l=10;
    for(int i=0;i<l;i++)
    {
        printf("%d ",a[i]);
    }
    for(int i=0;i<l/2;i++)
    {
        int temp=a[i];
        a[i]=a[l-i-1];
        a[l-i-1]=temp;
    }
    printf("\n");
    
    for(int i=0;i<l;i++)
    {
        printf("%d ",a[i]);
    }
}

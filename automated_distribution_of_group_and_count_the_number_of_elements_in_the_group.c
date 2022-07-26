#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr,size;
    int i,j;

    printf("Enter Array size:: ");
    scanf("%d",&size);

    arr=(int*)malloc(size*sizeof(int));

    printf("Enter the array elements::\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    int max = arr[1];
    int min = arr[1];

    for(i=0;i<size;i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
        } 
        else if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    
    printf("\nmin_val is : %d",min);
    printf("\nmax_val is : %d",max);

    int b=min;
    int d=b%10;
    int e=b-d;
    printf("\nstaring rangeis : %d",e);

    int f=max;
    int g=f%10;
    int h=(f-g)+10;
    printf("\nending range is %d",h);

    int range=h-e;

    int no_of_group=range/10;
    printf("\nnumber of groups required : %d",no_of_group);

    int count = 0;

    printf("\nGroup    Freq\n");

    for(i=e;i<h;i+=10)
    {
        int start = i;
        int end = i+10;
        for(j=0;j<size;j++)
        {
           if(arr[j]>=start && arr[j]<=end-1)
           {
            count++;
           }
        }
        printf("%d - %d = %d\n",start,end,count);
        count=0;
    }
    return 0;
}
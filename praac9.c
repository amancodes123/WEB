#include<stdio.h>
void bubblesort(int arr[],int n)
{ int i,j;
	for(i=0;i<n-1;i++)
	{
		for( j=0;j<n-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[i];
				arr[i]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
int main()
{int i;
	int arr[20],n;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	for( i=0;i<n;i++)
	{
		printf("Enter %d element: ",i+1);
		scanf("%d",&arr[i]);
	}
	
	printf("original array: ");
	for(i=0;i<n;i++)
	{
		printf("%5d",arr[i]);
	}
	bubblesort(arr,n);
	printf("\nsorted array :");
	for( i=0;i<n;i++)
	{
		printf("%5d",arr[i]);
	}
	return 0;
}
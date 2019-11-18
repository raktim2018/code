#include<stdio.h>
#include<stdlib.h>
void insertion_sort(int arr[],int n);
void main()
{
	int arr[10],i,n;
	printf("\n Enter the number of elements in the array:");
	scanf("%d",&n);
	printf("\n Enter the elements in the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
insertion_sort(arr,n);
printf("\n The sorted array is: \n");
for(i=0;i<n;i++)
printf("%d\t",arr[i]);
}
void insertion_sort(int arr[],int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
{
	temp=arr[i];
	j=i-1;
	while((temp<arr[j]) && (j>=0))
{
arr[j+1]=arr[j];
j--;
}
arr[j+1]=temp;
}
}


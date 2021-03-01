#include<stdio.h>
#define size 5
int main()
{
	int arr[size]={3,2,2,3};
	int key, i, index = -1;
	printf("enter an element to delete\n");
	scanf("%d",&key);
	for(i=0;i<size;i++)
	{
		if(arr[i] == key)
		{
			index = i;
			break;
		}
	}
	if(index != -1)
	{
		for(i=index;i<size-1;i++)
		arr[i] = arr[i+1];
		printf("new array :");
		for(i=0;i<size-1;i++)
		printf("%d",arr[i]);
	}
	else
	printf("elements not found\n");
	
	return 0;
}

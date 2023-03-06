#include<stdio.h>
#include<stdlib.h>
int min()
{
	int n,i,*ptr,sum=0;
	printf("Enter the number of elements");
	scanf("%d",&n);
	ptr=(int*) malloc(n * sizeof(int));
	if(ptr==NULL)
	{
		printf("No memory allocated");
		exit(0);
	}
	printf("Elements invalid value");
	for(i=0;i<n;++i)
	{
		printf("%d,",*(ptr+i));
	}
	printf("/n Enter the elements:");
	for(i=0;i<n;++i)
	{
		scanf("%d",ptr+i);
		sum+=*(ptr+i);
	}
	printf("sum=%d",sum);
	free(ptr);
	return 0;
}
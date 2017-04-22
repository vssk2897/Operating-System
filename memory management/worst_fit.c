#include<stdio.h>
int main()
{
	int files[20],blocks[20],high,i,j,m,n,fragments[20],t;
	static int block_arr[20],file_arr[20];
	printf("Enter the no. of files : ");
	scanf("%d",&m);
	printf("\nEnter the size of files ");
	for(i=0;i<m;++i)
	{
		printf("\n\tFile [%d] : ",i+1);
		scanf("%d",&files[i]);
	}
	printf("\nEnter the no. of blocks : ");
	scanf("%d",&n);
	printf("\nEnter the size of blocks ");
	for(j=0;j<n;++j)
	{
		printf("\n\tBlock [%d] : ",j+1);
		scanf("%d",&blocks[j]);
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;++j)
		{
			high=0;
			if(block_arr[j]!=1)
			{
				t=blocks[j]-files[i];
				if(t>=high)
				{
					high=t;
					file_arr[i]=j;
				}
			}
		}
		fragments[i]=high;
		block_arr[file_arr[i]]=1;
	}
	printf("\nFile No. File Size Block Number Block Size Fragments");
	for(i=0;i<m;++i)
	{
		printf("\n %d\t\t%d\t\t%d\t\t%d\t\t%d",i+1,files[i],file_arr[i],blocks[file_arr[i]],fragments[i]);
	}
	printf("\n");
	return 0;
}

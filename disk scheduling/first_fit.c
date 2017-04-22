#include<stdio.h>
int main()
{
	int i,j,m,n,files[20],blocks[20],fragments[20],file_arr[20],t;
	static int flag[20];
	printf("Enter the num of blocks you want to enter : ");
	scanf("%d",&n);
	printf("\nEnter the num of Files you want to enter : ");
	scanf("%d",&m);
	printf("\nEnter the size of each block : ");
	for(i=0;i<n;++i)
	{
		printf("\n\tSize of block[%d] : ",i+1);
		scanf("%d",&blocks[i]);
	}
	printf("\nEnter the size of each file : ");
	for(j=0;j<m;++j)
	{
		printf("\n\tSize of block[%d] : ",j+1);
		scanf("%d",&files[j]);
	}
	for(i=0;i<m;++i)
	{
		for(j=0;j<n;++j)
		{
			if(flag[i]!=1)
			{
				t=blocks[i]-files[j];
				if(t>=0)
				{
					file_arr[i]=j;
				}
			}
		}
		fragments[i]=t;
		flag[file_arr[i]]=1;
	}
	printf("\n\nFile Number  File Size  Block Number  Block Size  Fragments ");
	for(i=0;i<m;i++)
	{
		printf("\n%d\t\t%d\t\t%d\t\t%d\t\t%d",i+1,files[i],file_arr[i],blocks[file_arr[i]],fragments[i]);
	}
	return 0;
}

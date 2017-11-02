#include<stdio.h>
int icnt=0;
void Bubbel_Sort(int arr[],int n)
{
	for (int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{ icnt++;
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}


void print_Original_Array(int arr[],int n)
{
		printf("{");
	for (int i=0;i<n;i++)
	{
		printf("%d  ",arr[i] );
	}
	printf("}\n");
}

int main(int argc, char const *argv[])
{
	int arr[]={10,1,2,5,0,40,50,11};
	int n=sizeof(arr)/sizeof(arr[0]);
	printf("size of array is :- %d\n",n);
	printf("Original Array Is:-\n");
	print_Original_Array(arr,n);
	printf("After Bubbel Sort :-\n");
	Bubbel_Sort(arr,n);
	print_Original_Array(arr,n);
	printf("for loop executed at:-%d\n", icnt);
	return 0;
}
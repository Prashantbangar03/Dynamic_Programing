#include<stdio.h>
int icnt=0;
void print_Original_Array(int arr[],int n)
{
		printf("{");
	for (int i=0;i<n;i++)
	{
		printf("%d  ",arr[i] );
	}
	printf("}\n");
}
void swap(int *x,int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}
int partion(int arr[],int low,int high)
{
	int pivot=arr[high];
	int j=low-1;
	for (int i=low;i<high;i++)
	{	icnt++;
		if(arr[i]<=pivot)
		{
			j++;
			swap(&arr[j],&arr[i]);
		}
	}
	swap(&arr[j+1],&arr[high]);
	return j+1;
}

void QuickSort(int arr[],int low,int high)
{
	if(low<high)
	{
		int pi=partion(arr,low,high);
		QuickSort(arr,low,pi-1);
		QuickSort(arr,pi+1,high);
	}


}

int main(int argc, char const *argv[])
{
	int arr[]={10,5,4,2,8,20};
	int n=sizeof(arr)/sizeof(arr[0]);
	printf("No fo Elements in Array:-%d\n",n );
	printf("Elements in Array:-\n");
	print_Original_Array(arr,n);
	QuickSort(arr,0,n-1);

	printf("After QickSort:-\n");
	print_Original_Array(arr,n);
	printf("For Loop executed at :%d times\n",icnt );
	return 0;
}
#include<stdio.h>
 int min( int a, int b)
{
	return (a>b)?b:a;
}

 int get_Ugly_Number( int number)
{
	 int ugly[number];
	 int i2=0,i3=0,i5=0;
	 int multiple_by_2=2;
	 int multiple_by_3=3;
	 int multiple_by_5=5;
	 int Ugly_Number=1;
	ugly[0]=1;
	for(int i=1;i<number;i++){
		printf("\nUgly_Number=%d\t\t\t",Ugly_Number );
		printf("multiple_by_2=%d\t\t\t",multiple_by_2 );
		printf("multiple_by_3=%d\t\t\t",multiple_by_3 );
		printf("multiple_by_5=%d\t\t\t",multiple_by_5 );
		Ugly_Number=min(multiple_by_2,min(multiple_by_5,multiple_by_3));
		ugly[i]=Ugly_Number;
		if(Ugly_Number==multiple_by_2)
		{
			i2=i2+1;
			multiple_by_2=ugly[i2]*multiple_by_2;
		}
		if(Ugly_Number==multiple_by_3)
		{
			i3=i3+1;
			multiple_by_3=ugly[i3]*multiple_by_3;
		}
		if(Ugly_Number==multiple_by_5)
		{
			i5=i5+1;
			multiple_by_5=ugly[i5]*multiple_by_5;
		}
	
	}

	return Ugly_Number;
}



int main(int argc, char const *argv[])
{
	 int number,uiRet;
	printf("Enter the Number\n");
	scanf("%d",&number);
	uiRet=get_Ugly_Number(number);
	printf("%d\n",uiRet );
	return 0;
}
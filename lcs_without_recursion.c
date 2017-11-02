#include<stdio.h>
#include<string.h>
int max(int a,int b)
{
	return (a>b)?a:b;
}
int lcs(char *string1,char *string2,int length1,int length2)
{
	int l[length1+1][length2+1];
	int i,j;
	for(i=0;i<=length1;i++)
	{
		for(j=0;j<=length2;j++)
		{
			if(i==0||j==0)
				l[i][j]=0;
			else if(string1[i]==string2[j])
			{

				l[i][j]=l[i-1][j-1]+1;
			}
			else
				l[i][j]=max(l[i-1][j],l[i][j-1]);

		}
	}
	return l[length1][length2];
}


int main(int argc, char const *argv[])
{
	char string1[]="hello";
	char string2[]="hel";
	int length1=strlen(string1);
	int length2=strlen(string2);
	printf("%d\n",lcs(string1,string2,length1,length2) );
	return 0;
}
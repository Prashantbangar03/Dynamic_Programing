#include<stdio.h>
#include<string.h>
int max(int a,int b)
{
	return (a>b)? a : b;
}

int longets_common_subsequnec(char *string1,char *string2,int length1,int length2)
{
	if((length1==0)||(length2==0))
		return 0;
	if(string1[length1-1]==string2[length2-1])
			return 1+longets_common_subsequnec(string1,string2,length1-1,length2-1);
	else
			return max(longets_common_subsequnec(string1,string2,length1,length2-1),longets_common_subsequnec(string1,string2,length1-1,length2));
}


int main(int argc, char const *argv[])
{
	char string1[]="abcd";
	char string2[]="abcdehd";
	int length1=strlen(string1);
	int length2=strlen(string2);
	printf("%d\n",longets_common_subsequnec(string1,string2,length1,length2) );
	return 0;
}
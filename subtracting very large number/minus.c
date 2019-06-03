# include <stdio.h>
# include <conio.h>
# include <string.h>
# include <stdlib.h>
int main()
{
	char str1[100],str2[100],str3[100],str4[100],result[100];
	int i,j,n,k,carry=0,l1,l2,sl,bl;
	printf("\n Enter 1st number: ");
	gets(str1);
	printf("\n Enter 2nd number: ");
	gets(str2);
	l1=strlen(str1);
	l2=strlen(str2);
	if(l1>=l2)
	{
		bl=l1;
		sl=l2;
		strcpy(str3,str1);
		strcpy(str4,str2);
	}
	else
	{
		bl=l2;
		sl=l1;
		strcpy(str4,str1);
		strcpy(str3,str2);
	}
	
	if(l1!=l2)
	{
		strrev(str4);
		for(i=sl;i<bl;++i)
		{
			str4[i]='0';
		}
		str4[i]='\0';
		strrev(str4);
	}
	carry=0;
	for(i=bl-1;i>=0;--i)
	{
		if((str3[i]<=str4[i]) && (carry==1))
		{
			j=str3[i]-48;
			j+=10;
			n=str4[i]-48;
			n+=1;
			k=j-n;
			result[i]=k+48;
			carry=1;
		}
		else if((str3[i]<str4[i]) && (carry==0))
		{
			j=str3[i]-48;
			j+=10;
			n=str4[i]-48;
			k=j-n;
			result[i]=k+48;
			carry=1;
		}
		else if((str3[i]>str4[i]) && (carry==1))
		{
			j=str3[i]-48;
			n=str4[i]-48;
			n+=1;
			k=j-n;
			result[i]=k+48;
			carry=0;
		}
		else
		{
			j=str3[i]-48;
			n=str4[i]-48;
			k=j-n;
			result[i]=k+48;
			carry=0;
		}
	}
	result[bl]='\0';
	if(l1>=l2)
	{
		printf("\n\a The subtraction of %s and %s is %s.",str1,str2,result);
	}
	else
	{
		printf("\n\a The subtraction of %s and %s is -%s.",str1,str2,result);
	}
	getch();
	return 0;
}






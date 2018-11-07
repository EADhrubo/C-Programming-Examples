# include <stdio.h>
# include <conio.h>
# include <string.h>
# include <stdlib.h>
int main()
{
	char str1[100],str2[100],str3[100],str4[100],result[100];
	int i,j,k,n,l1,l2,carry,bl,sl,a;
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
		strcpy(str3,str2);
		strcpy(str4,str1);
	}
	if(l1!=l2)
	{
		strrev(str3);
		strcpy(str3+bl,"0");
		strcpy(str3+bl+1,"\0");
		strrev(str3);
		strrev(str4);
		for(i=sl;i<=bl;++i)
		{
			str4[i]='0';
		}
		str4[i]='\0';
		strrev(str4);
	}
	else
	{
		strrev(str3);
		strcpy(str3+bl,"0");
		strcpy(str3+bl+1,"\0");
		strrev(str3);
		strrev(str4);
		strcpy(str4+bl,"0");
		strcpy(str4+bl+1,"\0");
		strrev(str4);
	}
	carry=0;
	for(i=bl;i>=0;--i)
	{
		if(carry==1)
		{
			j=str3[i]-48;
			n=str4[i]-48;
			k=j+n+1;
			if(k>=10)
			{
				k-=10;
				result[i]=k+48;
				carry=1;
			}
			else
			{
				result[i]=k+48;
				carry=0;
			}
		}
		else
		{
			j=str3[i]-48;
			n=str4[i]-48;
			k=j+n;
            if(k>=10)
			{
				k-=10;
				result[i]=k+48;
				carry=1;
			}
			else
			{
				result[i]=k+48;
				carry=0;
			}
		}
	}
    a=bl+1;
	result[a]='\0';
	printf("\n\a The addition of %s and %s is %s.",str1,str2,result);
	getch();
	return 0;
}

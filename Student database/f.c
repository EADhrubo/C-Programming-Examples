# include <stdio.h>
# include <conio.h>
# include <string.h>
struct student
{
	char name[20];
	char id[20];
	char phone_number[20];
};
int main ()
{
	int i;
	char str[20],str1[20],str2[20];
	struct student EEEb[3];
	FILE* fp;
	fp=fopen("F:\\Games\\programming\\file\\file1.txt","w");
	fputs(" NAME",fp);
	fclose(fp);
	fp=fopen("F:\\Games\\programming\\file\\file1.txt","a");
	fputs("\t\t ID",fp);
	fputs("\t\t PHONE NUMBER",fp);
	fputs("\n----\t\t----\t\t------------",fp);
	for(i=0;i<3;++i)
	{
		printf("\n %dth name: ",i+1);
		gets(str);
		strcpy(EEEb[i].name,str);
        fprintf(fp,"\n %s",str);
		printf("\n %dth id: ",i+1);
		gets(str1);
		strcpy(EEEb[i].id,str1);
		fprintf(fp,"\t\t %s",str1);
		printf("\n %dth phone number: ",i+1);
		gets(str2);
		strcpy(EEEb[i].phone_number,str2);
		fprintf(fp,"\t\t %s",str2);
	}
	fclose(fp);
	getch();
	return 0;
}


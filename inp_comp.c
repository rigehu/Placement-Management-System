/*#include<stdio.h>
#include<string.h>
#include<conio.h>*/

void insert_comp()
{
	typedef struct company
	{
		char details[1000];
		char eligible[1000];
		char h_proced[1000];
		char package[1000];
		int tot_placed;
		char terms[1000];
	} company;
	FILE *fp=fopen("comp_detail.dat","ab");
	company c;
	int ch;
	do
	{
		printf("\n");
		fflush(stdin);
		printf("Enter the company details: ");
		gets(c.details);
		fflush(stdin);
		//	fputs(c.details,fp);
		//	fputs("\n",fp);
		printf("Enter the elgibility: ");
		gets(c.eligible);
		fflush(stdin);
		//	fputs(c.eligible,fp);
		//	fputs("\n",fp);
		printf("Enter the hiring process: ");
		gets(c.h_proced);
		fflush(stdin);
		//	fputs(c.h_proced,fp);
		//	fputs("\n",fp);
		printf("Enter the package: ");
		gets(c.package);
		fflush(stdin);
		//	fputs(c.package,fp);
		//	fputs("\n",fp);
		printf("Enter the total placemnets: ");
		scanf("%d",&c.tot_placed);
		//	fprintf(fp,"%d",c.tot_placed);
		//	fputs("\n",fp);
		printf("Enter the terms: ");
		fflush(stdin);
		gets(c.terms);	
		fflush(stdin);
		fwrite(&c,sizeof(c),1,fp);
		//	fputs(c.terms,fp);
		//	fputs("\n",fp);
		printf("\n");
		printf("Continue? (Press 1 for yes): ");
		scanf("%d",&ch);
	}while(ch==1);
	printf("\n\t\t\t*******	Press ENTER to go back	*******\n\n");
	fflush(stdin);
	scanf("%c",&ch);
	if(ch=='\n')
		{
			system("cls");
			company_reg();
		}
	fclose(fp);
}

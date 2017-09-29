

//include<stdio.h>
//#include<string.h>
//#include"adminmenu.c"
void company_detail(int,int);
void company_reg();

typedef struct company
{
	char details[1000];
	char eligible[1000];
	char h_proced[1000];
	char package[1000];
	int tot_placed;
	char terms[1000];
}company;
void view_comp(int x)
{
	int choice;
	char c;
	wait("\n\n\n\n\t\t\t\t*********************************************************************************************");
	wait("\n\t\t\t\t*********************************     Menu for companies:   *********************************");
	wait("\n\t\t\t\t*********************************************************************************************");
	printf("\n\n\t\t\t\t\t Press 1 for details of 'Infosys'\n");
	printf("\t\t\t\t\t Press 2 for details of 'Wipro'\n");
	printf("\t\t\t\t\t Press 3 for details of 'TCS'\n");
	printf("\t\t\t\t\t Press 4 for details of 'Accenture'\n");
	printf("\t\t\t\t\t Press 0 for NOTIFICATIONS      \n");
	printf("\t\t\t\t\t Press 7 to go back.");
	wait("\n\n\t\t\t\t*********************************************************************************************");
	printf("\n\n\t\t\t\t\tEnter choice: ");
	scanf("%d",&choice);
	if(choice!=7)
	{
		system("cls");
		company_detail(choice,x);
	}
	else
	    if(x==-1)
	    {
		 system("cls");
		company_reg();
		}
		if(x==1)
		{
		system("cls");
		main();
		}
}

void company_detail(int ch,int y)
{
	FILE *fp;
	company c1;
	char c;
	fp=fopen("comp_detail.dat","rb");
	switch(ch)
	{
		case 1: printf("\n");
		        wait("\n\t\t\t**********************************************************************************");
				wait("\n\t\t\t*******************************   INFOSYS   **************************************");
				wait("\n\t\t\t**********************************************************************************");
				fread(&c1,sizeof(c1),1,fp);
				printf("\n\n\t\t\tAbout:\n\t\t\t%s\n\n",c1.details);
				printf("\t\t\tEligibility Criteria:\n\t\t\t%s\n\n",c1.eligible);
				printf("\t\t\tHiring Procedure:\n\t\t\t%s\n\n",c1.h_proced);
				printf("\t\t\tHighest Package:\n\t\t\t%s\n\n",c1.package);
				printf("\t\t\tTotal Placements per year:\n\t\t\t%d\n\n",c1.tot_placed);
				printf("\t\t\tTerms And Conditions:\n\t\t\t%s\n\n\n",c1.terms);
			    wait("\n\t\t\t*********************************************************************************");
				printf("\n\n\t\t\t  Press ENTER to go back.");
				fflush(stdin);
				scanf("%c",&c);
				if(c=='\n')
				{
					system("cls");
					view_comp(y);
				}
				else
				/*printf("%s",c1.eligible);
				fgets(c1.details,1000,fp);
				//s+=strlen(c1.details);
				puts(c1.details);
				fgets(c1.eligible,1000,fp);
				//s+=strlen(c1.eligible);
				puts(c1.eligible);
				fgets(c1.h_proced,1000,fp);
				//s+=strlen(c1.h_proced);
				puts(c1.h_proced);
				fgets(c1.package,1000,fp);
				//s+=strlen(c1.package);
				puts(c1.package);
				fscanf(fp,"%d\n",&c1.tot_placed);
				printf("%d\n",c1.tot_placed);
				fflush(stdin);
				fgets(c1.terms,1000,fp);
				//s+=(strlen(c1.terms)+4);
				puts(c1.terms);
				*/
				break;
		case 2: printf("\n");
			 wait("\n\t\t\t**********************************************************************************");
				wait("\n\t\t\t*********************************   WIPRO   **************************************");
				wait("\n\t\t\t**********************************************************************************");
				fread(&c1,sizeof(c1),1,fp);
				printf("\n\n\t\t\tAbout:\n\t\t\t%s\n\n",c1.details);
				printf("\t\t\tEligibility Criteria:\n\t\t\t%s\n\n",c1.eligible);
				printf("\t\t\tHiring Procedure:\n\t\t\t%s\n\n",c1.h_proced);
				printf("\t\t\tHighest Package:\n\t\t\t%s\n\n",c1.package);
				printf("\t\t\tTotal Placements per year:\n\t\t\t%d\n\n",c1.tot_placed);
				printf("\t\t\tTerms And Conditions:\n\t\t\t%s\n\n\n",c1.terms);
			    wait("\n\t\t\t*********************************************************************************");
				printf("\n\n\t\t\t  Press ENTER to go back.");
				fflush(stdin);
				scanf("%c",&c);
				if(c=='\n')
				{
					system("cls");
					view_comp(y);
				}
				else
				break;
		case 3: printf("\n");
				 wait("\n\t\t\t**********************************************************************************");
				wait("\n\t\t\t***************************   TATA CONSULTANCY   *********************************");
				wait("\n\t\t\t**********************************************************************************");
				fread(&c1,sizeof(c1),1,fp);
				printf("\n\n\t\t\tAbout:\n\t\t\t%s\n\n",c1.details);
				printf("\t\t\tEligibility Criteria:\n\t\t\t%s\n\n",c1.eligible);
				printf("\t\t\tHiring Procedure:\n\t\t\t%s\n\n",c1.h_proced);
				printf("\t\t\tHighest Package:\n\t\t\t%s\n\n",c1.package);
				printf("\t\t\tTotal Placements per year:\n\t\t\t%d\n\n",c1.tot_placed);
				printf("\t\t\tTerms And Conditions:\n\t\t\t%s\n\n\n",c1.terms);
			    wait("\n\t\t\t*********************************************************************************");
				printf("\n\n\t\t\t  Press ENTER to go back.");
				fflush(stdin);
				scanf("%c",&c);
				if(c=='\n')
				{
					system("cls");
					view_comp(y);
				}
				else
				break;
		case 4:  wait("\n\n\t\t\t**********************************************************************************");
				wait("\n\t\t\t*******************************   ACCENTURE  *************************************");
				wait("\n\t\t\t**********************************************************************************");
				fread(&c1,sizeof(c1),1,fp);
				printf("\n\n\t\t\tAbout:\n\t\t\t%s\n\n",c1.details);
				printf("\t\t\tEligibility Criteria:\n\t\t\t%s\n\n",c1.eligible);
				printf("\t\t\tHiring Procedure:\n\t\t\t%s\n\n",c1.h_proced);
				printf("\t\t\tHighest Package:\n\t\t\t%s\n\n",c1.package);
				printf("\t\t\tTotal Placements per year:\n\t\t\t%d\n\n",c1.tot_placed);
				printf("\t\t\tTerms And Conditions:\n\t\t\t%s\n\n\n",c1.terms);
			    wait("\n\t\t\t*********************************************************************************");
				printf("\n\n\t\t\t  Press ENTER to go back.");
				fflush(stdin);
				scanf("%c",&c);
				if(c=='\n')
				{
					system("cls");
					view_comp(y);
				}
				else
				break;
		case 0: printf("\n");
				printf("*********     Recently Added Companies With the University        *********\n\n");
				printf("			1. Sapient Razorfish\n");
				printf("			2. Delloyed\n\n");
				printf("!!!!!!!  You can go to their websites for more details and updates  !!!!!!!");
				printf("\n\nPress ENTER to go back.");
				fflush(stdin);
				scanf("%c",&c);
				if(c=='\n')
				{
					system("cls");
				view_comp(y);
				}
				else
				break;
		default:printf("\n"); 
				printf("\a\tWrong choice");
				printf("\n\nPress ENTER to go back.");
				fflush(stdin);
				scanf("%c",&c);
				if(c=='\n')
				{
					system("cls");
				view_comp(y);
				}
	}
}


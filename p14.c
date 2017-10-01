		
//#include<stdio.h>
//#include<windows.h>
//#include<stdlib>
int fileopen(FILE *);
void plac_stat()
{
	FILE *fp;
	char ch;
	int n,m,r;
	outer :
 	g1:
 	printf("\n\n\n");
	printf("\t\t\t\t\t\t$******************************************************************$\n\n");
	printf("\t\t\t\t\t\t$******************************************************************$\n\n");
	printf("\t\t\t\t\t\t\t1. Enter 1 to view the details of year -->  2015\n\n\n\n");
	printf("\t\t\t\t\t\t\t2. Enter 2 to view the details of year -->  2016\n\n\n\n");
	printf("\t\t\t\t\t\t\t3. Enter 3 to view the details of year -->  2017\n\n\n\n");
	printf("\t\t\t\t\t\t\t4. Enter 0 to exit\n\n\n\n");
	printf("\t\t\t\t\t\t$******************************************************************$\n\n");
	printf("\t\t\t\t\t\t$******************************************************************$\n\n\n");
	printf("\t\t\t\t\t\t\tInput :");
	scanf("%d",&m);
	system("cls");	
	switch(m)
	{	
		case 1:
			
			inner1 :
		//	system("cls");	
			printf("\t\t\t\t\t\t$******************************************************************$\n\n");
			printf("\t\t\t\t\t\t$******************************************************************$\n\n");
			printf("\t\t\t\t\t\t\t1. Enter 1 to view the details of -->  WIPRO\n\n\n\n");
			printf("\t\t\t\t\t\t\t2. Enter 2 to view the details of -->  TCS\n\n\n\n");
			printf("\t\t\t\t\t\t\t3. Enter 3 to view the details of -->  INFOYSIS\n\n\n\n");
			printf("\t\t\t\t\t\t\t4. Enter 4 to go back\n\n\n\n");
			printf("\t\t\t\t\t\t\t5. Enter 0 to exit\n\n\n\n");
			printf("\t\t\t\t\t\t$******************************************************************$\n\n");
			printf("\t\t\t\t\t\t$******************************************************************$\n\n\n");
			printf("\t\t\t\t\t\t\tInput :");
			scanf("%d",&n);
			system("cls");
			switch(n)
			{
				case 1:
					fp=fopen("w2015.txt","r");
					r=fileopen(fp);
					if(r==10)
					goto g1;
					fclose(fp);
					break;
				case 2:
					fp=fopen("T2015.txt","r");
					r=fileopen(fp);
					if(r==10)
					goto g1;
					fclose(fp);
					break;
				case 3:
					fp=fopen("I2015.txt","r");
					r=fileopen(fp);
					if(r==10)
					goto g1;
					fclose(fp);
					break;
				case 4:
					goto g1;
					break;
				case 0:	
					//system("cls");
				    //plac_stat();
					//break;		
					printf("\n\n\n\n\n\n\n");
					printf("\t\t\t\t\t\t$**************************THANK YOU*******************************$\n\n");
					printf("\t\t\t\t\t\t$******************************************************************$\n\n");
					break;	
				default:
				
				system("cls");
				printf("\t\t\t\t\t\t$******************************************************************$\n\n");
				printf("\t\t\t\t\t\t$******************************************************************$\n\n");
				printf("\t\t\t\t\t\tWrong input\n\n\n\t\t\t\t\t\tPlease enter given input:\n\n\n\n");
			
				goto inner1;
				
			}
			break;
			
		case 2:
			inner2 :
			
			printf("\t\t\t\t\t\t$******************************************************************$\n\n");
			printf("\t\t\t\t\t\t$******************************************************************$\n\n");
			printf("\t\t\t\t\t\t\t1. Enter 1 to view the details of -->  WIPRO\n\n\n");
			printf("\t\t\t\t\t\t\t2. Enter 2 to view the details of -->  TCS\n\n\n");
			printf("\t\t\t\t\t\t\t3. Enter 3 to view the details of -->  INFOYSIS\n\n\n");
			printf("\t\t\t\t\t\t\t4. Enter 4 to go back\n\n\n\n");
			printf("\t\t\t\t\t\t\t5. Enter 0 to exit\n\n\n\n");
			printf("\t\t\t\t\t\t$******************************************************************$\n\n");
			printf("\t\t\t\t\t\t$******************************************************************$\n\n\n");
			printf("\t\t\t\t\t\t\tInput :");
			scanf("%d",&n);
			system("cls");
			switch(n)
			{
				case 1:
					fp=fopen("w2016.txt","r");
					r=fileopen(fp);
					if(r==10)
					goto g1;
					fclose(fp);
					break;
				case 2:
					fp=fopen("T2016.txt","r");
					r=fileopen(fp);
					if(r==10)
					goto g1;
					fclose(fp);
					break;
				case 3:
					fp=fopen("I2016.txt","r");
					r=fileopen(fp);
					if(r==10)
					goto g1;
					fclose(fp);
					break;
				case 4:
					goto g1;
					break;
				case 0:
					//	system("cls");
				   // plac_stat();
				//	break;	
					printf("\n\n\n\n\n\n\n");
					printf("\t\t\t\t\t\t$**************************THANK YOU*******************************$\n\n");
					printf("\t\t\t\t\t\t$******************************************************************$\n\n");
					break;
				default:
				
				system("cls");
				printf("\t\t\t\t\t\t$******************************************************************$\n\n");
				printf("\t\t\t\t\t\t$******************************************************************$\n\n");
				printf("\t\t\t\t\t\tWrong input\n\n\n\t\t\t\t\t\tPlease enter given input:\n\n");
			
				goto inner2;
					
			}
			break;


		case 3:
			inner3 :
			//system("cls");
			printf("\t\t\t\t\t\t$******************************************************************$\n\n");
			printf("\t\t\t\t\t\t$******************************************************************$\n\n");
			printf("\t\t\t\t\t\t\t1. Enter 1 to view the details of -->  WIPRO\n\n\n");
			printf("\t\t\t\t\t\t\t2. Enter 2 to view the details of -->  TCS\n\n\n");
			printf("\t\t\t\t\t\t\t3. Enter 3 to view the details of -->  INFOYSIS\n\n\n");
			printf("\t\t\t\t\t\t\t4. Enter 4 to go back\n\n\n\n");
			printf("\t\t\t\t\t\t\t5. Enter 0 to exit\n\n\n\n");
			printf("\t\t\t\t\t\t$******************************************************************$\n\n");
			printf("\t\t\t\t\t\t$******************************************************************$\n\n\n");
			printf("\t\t\t\t\t\t\tInput :");
			scanf("%d",&n);
			system("cls");
			switch(n)
			{
				case 1:
					fp=fopen("w2017.txt","r");
					r=fileopen(fp);
					if(r==10)
					goto g1;
					fclose(fp);
					break;
				case 2:
					fp=fopen("T2017.txt","r");
					r=fileopen(fp);
					if(r==10)
					goto g1;
					fclose(fp);
					break;
				case 3:
					fp=fopen("I2017.txt","r");
					r=fileopen(fp);
					if(r==10)
					goto g1;
					fclose(fp);
					break;
				case 4:
					goto g1;
					break;
				case 0:
					//	system("cls");
				   // plac_stat();
				//	break;	
				printf("\n\n\n\n\n\n\n");
					printf("\t\t\t\t\t\t$**************************THANK YOU*******************************$\n\n");
				printf("\t\t\t\t\t\t$******************************************************************$\n\n");
					break;
				default:
				
				system("cls");
				printf("\t\t\t\t\t\t$******************************************************************$\n\n");
				printf("\t\t\t\t\t\t$******************************************************************$\n\n");
				printf("\t\t\t\t\t\tWrong input\n\n\n\t\t\t\t\t\tPlease enter given input:\n\n");
			
				goto inner3;
			}
			break;
			case 0:
			system("cls");
			main();break;
			//	printf("\n\n\n\n\n\n\n");
				//printf("\t\t\t\t\t\t$**************************THANK YOU*******************************$\n\n");
			//	printf("\t\t\t\t\t\t$******************************************************************$\n\n");
				break;
			default:
			
			system("cls");
			printf("\t\t\t\t\t\t$******************************************************************$\n\n");
			printf("\t\t\t\t\t\t$******************************************************************$\n\n");
			printf("\t\t\t\t\t\tWrong input\n\n\n\t\t\t\t\t\tPlease enter given input:\n\n\n\n");
		
			goto outer;
	}
}

int fileopen(FILE *p)
{
	int n;
	char ch[100];
	if(p==NULL)
			printf("Error in opening file\n");
			else
			{
			//	ch=getc(p);
				system("cls");
					printf("\t\t\t\t\t\t$******************************************************************$\n\n");
					printf("\t\t\t\t\t\t$******************************************************************$\n\n");
				//	printf("\t\t\t\t\t\t\t");
					hello:
				while((fgets(ch,100,p))!=NULL)	
					{	
						printf("\t\t\t\t\t\t");
						 while(ch!='\n')
						 {
						 puts(ch);
						 printf("\n");
						 goto hello;
						 }
				
					//ch=getc(p);
				}
				printf("\n\n");
				printf("\t\t\t\t\t\t$******************************************************************$\n\n");
				printf("\t\t\t\t\t\t$******************************************************************$\n\n");
				printf("\t\t\t\t\t\t\t4. Enter 4 to go back\n\n\n\n");
				printf("\t\t\t\t\t\t\t5. Enter 0 to exit\n\n\n\n");
				scanf("%d",&n);
				system("cls");
				switch(n)
				{
					case 4:
						return 10;
						break;
					case 0:
						printf("\n\n\n\n\n\n\n");
						printf("\t\t\t\t\t\t$************************* THANK YOU ******************************$\n\n");
						printf("\t\t\t\t\t\t$******************************************************************$\n\n");
						break;	
					default:
						system("cls");
						printf("\n\n");
						printf("\t\t\t\t\t\t$******************************* Wrong input **********************************$\n\n");
						printf("\t\t\t\t\t\t$*********************** Please enter given input *****************************$\n\n");
						return 10;	
				}
				//	printf("\t\t\t\t\t\t\t");
				//printf("\t\t\t\t\t\t$******************************************************************$\n\n");
				//printf("\t\t\t\t\t\t$******************************************************************$\n\n");
			}
	
		
}

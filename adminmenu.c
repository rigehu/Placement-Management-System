/*#include<stdio.h>
#include"inp_comp.c"
#include"company.c"*/
void admin_menu();
void stu_reg()
{
	char ch;
	wait("\n\n\t\t\t\t*****************************************************************");
	wait("\n\t\t\t\t************  Menu for Student Registration Process  ************");
	wait("\n\t\t\t\t*****************************************************************");
	wait("\n\n\t\t\t\t\t1.Insert records\n");
	wait("\t\t\t\t\t2.Delete records\n");
	wait("\t\t\t\t\t3.View Records\n");
	wait("\t\t\t\t\tPress ENTER to go back");
	wait("\n\n\t\t\t\t*****************************************************************");
	wait("\n\t\t\t\t Enter your choice: ");
	fflush(stdin);
	scanf("%c",&ch);
	system("cls");
	if(ch=='\n')
		admin_menu();
		else
	switch(ch)
	{
		case '1':	register_student(1);
		       		break;
	    case '2':	delete_student();
		     		break;
		case '3':   view_student();
		            break;
	}
}
void company_reg()
{
	char ch;
	wait("\n\n\n\n\n\t\t\t\t\t*************************************************************");
    printf("\n\t\t\t\t\t**********  Menu for Company Registration Process  **********");
    wait("\n\t\t\t\t\t*************************************************************");
	wait("\n\n\t\t\t\t\t  1.Insert records\n");
	wait("\t\t\t\t\t  2.View records\n\n");
    wait("\t\t\t\t\t  Press ENTER to go back");
    wait("\n\n\t\t\t\t\t*************************************************************");
	wait("\n\n\t\t\t\t\t Enter your choice: ");

	fflush(stdin);
	scanf("%c",&ch);
	system("cls");
	if(ch=='\n')
		admin_menu();
	else
	switch(ch)
	{
		case '1':	insert_comp();
		       		break;
		case '2':	view_comp(-1);
					break;
	}
}
void placement()
{
	char ch;
	printf("\n\t\t\t*******  Menu for  Placements Process  *******\n\n");
	printf("\t\t\t1.Insert records\n");
	printf("\t\t\t2.View records\n\n");
	printf("\t\t\tPress ENTER to go back\n\n");	
	printf("Enter your choice: ");
	fflush(stdin);
	scanf("%c",&ch);
	system("cls");
	if(ch=='\n')
		admin_menu();
	
}
void admin_menu()
{
	  int c;
	  wait("\n\n\n\n\n\t\t\t\t\t\t**********************************************************");
	  wait("\n\t\t\t\t\t\t**************    Administrator Section   ****************");
	  wait("\n\t\t\t\t\t\t**********************************************************");
	  wait("\n\n\t\t\t\t\t\t Press 1 for Student Registration\n");
	  wait("\t\t\t\t\t\t Press 2 for Companies Registration\n");
	  wait("\t\t\t\t\t\t Press 3 for Placements Process\n\n");
	  wait("\t\t\t\t\t\t Press 0 to go back\n");
	   wait("\n\t\t\t\t\t\t**********************************************************");
	   wait("\n\n\t\t\t\t\t\t  Enter your choice: ");
	  scanf("%d",&c);
	  system("cls");
	  switch(c)
	  {
	  	case 1: stu_reg();
	  	        break;
	  	case 2: company_reg();
	  	        break;
	    case 3: placement();
	  	        break;
	    case 0: main();
	            break;
	  }
	  
}

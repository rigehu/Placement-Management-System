#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include"register_students.c"
#include"company.c"
#include"inp_comp.c"
#include"adminmenu.c"
#include"p12.c"
#include"delete.c"
#include"stu_view.c"
//void admin_menu();
//void plac_stat();
void delay(int milliseconds)
{
	long pause;
	clock_t now,then;
	pause=milliseconds*(CLOCKS_PER_SEC/1000);
	now=then=clock();
	while((now-then)<pause)
	now=clock();
	
}
void wait(char str[300])
{
	int i=0;
	while(str[i]!='\0')
	{
		putchar(str[i]);
		usleep(2000);
		i++;
	}
}
int main()
{
	int choice;
	wait("\n\n\n\n\t\t\t\t\t***************************************************************************************");
	wait("\n\t\t\t\t\t********************     WELCOME TO PLACEMENT MANAGEMENT SYSTEM     *******************");
    wait("\n\t\t\t\t\t***************************************************************************************");
	wait("\n\n\n\t\t\t\t\t\tPress 1. for Student Registeration.");
    wait("\n\t\t\t\t\t\tPress 2. for Placement Statistics");
    wait("\n\t\t\t\t\t\tPress 3. for Company Details");
	wait("\n\t\t\t\t\t\tPress 4. for Admin Login");
    wait("\n\t\t\t\t\t\tPress 5. to EXIT");
	wait("\n\n\t\t\t\t\t****************************************************************************************");
	wait("\n\t\t\t\t\t****************************************************************************************");
	wait("\n\n\t\t\t\t\tEnter your option:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:system("cls");
		       register_student(-1);
		       break;
		case 2:system("cls");
		       plac_stat();
		       break;
		case 3: system("cls");
		        view_comp(1);
		        break;
		case 4:system("cls");
		       admin_menu();
		       break;
	    default: printf("wrong ");
    	case 5: exit(0);
	}
}

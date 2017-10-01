//header files
#include<stdio.h>
#include<conio.h>
#include<string.h>

//function declaration
void register_student();



//main
int main()
{
register_student();
return 0;
}


//function body
void register_student()
{
	FILE *fp;
	char stu_f_name[10],stu_l_name[10],sty_city[10],stu_email[40],stu_phone_number[12],stu_university[50],stu_degree[50],stu_job_title[60],stu_job_company[40],stu_job_timeperiod[10];
	printf("\n::::::::::::::PROFILE::::::::::::::::::");
	printf("\n\t\t First Name: "); 
	fflush(stdin);
	gets(stu_f_name);
	fflush(stdin);
	printf("\t\t Last Name: ",stu_l_name);
    gets(stu_l_name);
	printf("\n City: ");
	fflush(stdin); 
    gets(sty_city);
	fflush(stdin);
	printf("\n ::::::::::::Contact Information::::::::");
	printf("\n Email_Address:");fflush(stdin); gets(stu_email); 	fflush(stdin);
	printf("\n Phone Number:");fflush(stdin); gets(stu_phone_number); 	fflush(stdin);
	printf("\n\n :::::::::::EDUCATION::::::::::::::::::");
	printf("\n College or University:");fflush(stdin); gets(stu_university); 	fflush(stdin);
	printf("\nDegree:");fflush(stdin); gets(stu_degree);	fflush(stdin);
	printf("\n ****Filling out 2 or more work experience will double your chances of being contacted by an employer*** \n");
	printf("\n::::::::::::::Work Experience:::::::::::::");
	printf("\nJob Title:");fflush(stdin); gets(stu_job_title); fflush(stdin);
	printf("\nCompany:");fflush(stdin);  gets(stu_job_company);fflush(stdin);
	printf("\nTime Period:");  gets(stu_job_timeperiod);fflush(stdin);
	printf("\n**note that work experience is not mandatiory");
	if(strlen(stu_f_name)&&strlen(stu_l_name)&&strlen(sty_city)&&strlen(stu_email)&&strlen(stu_phone_number)&&strlen(stu_university)&&strlen(stu_degree)  )
	{
		fp=fopen("stu_record.txt","a+");
	
		fprintf(fp,"%s%s%s%s%s%s%s%s%s%s",stu_f_name,stu_l_name,sty_city,stu_email,stu_phone_number,stu_university,stu_degree,stu_job_title,stu_job_company,stu_job_timeperiod);
		fclose(fp);
	}
	else
	{
		register_student();
	}
	return;
}

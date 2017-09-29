void view_student()
{
	FILE *fp;
	student stu;
	int c=0;
	char choice;
	fp=fopen("student.dat","rb");
	while(fread(&stu,sizeof(student),1,fp)!=NULL)
	{
	printf("\n\t\t*************Details of Student%d***********",++c);
	printf("\n\n\t\t Student Id:%s",stu.id);
	printf("\n\t\t First Name: %s",stu.stu_f_name);
	printf("\n\t\t Last Name: %s",stu.stu_l_name);
	printf("\n\t\t First Name: %s",stu.stu_f_name);
	printf("\n \t\t City: %s",stu.sty_city);
	printf("\n\n \t\t::::::::::::Contact Information::::::::");
	printf("\n\n\t\t\tEmail_Address:%s",stu.stu_email);
	printf("\n \t\t\tPhone Number:%s",stu.stu_phone_number);
	printf("\n\n\t\t :::::::::::EDUCATION::::::::::::::::::");
	printf("\n \n\t\t\tCollege or University:%s",stu.stu_university);
	printf("\n\t\t\tDegree:%s",stu.stu_degree);
	printf("\n\n\t\t::::::::::::::Work Experience:::::::::::::");
	printf("\n\n\t\t\tJob Title:%s",stu.stu_job_title);
	printf("\n\t\t\tCompany:%s",stu.stu_job_company);
	printf("\n\t\t\tTime Period:%s",stu.stu_job_timeperiod); 
	printf("\n\t\t*************************************************************************************************************************************");
	}
	
	printf("\n\t\t\tPress ENTER to go back");
	fflush(stdin);
	scanf("%c",&choice);
	if(choice=='\n')
	{
		system("cls");
		company_reg();
	}
}

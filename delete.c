void delete_student()
{
   FILE *fp,*fp_tmp;
   int found=0;
   char num[10];
   char choice;
   student c;
   fp=fopen("student.dat","rb");
   fp_tmp=fopen("student1.dat","wb");
   printf("\n\n\t\t\t****************!!!!!!!!!!!!!!!!****************!!!!!!!!!!!!!!!!*****************");
    printf("\n\n\t\t\t   Enter the ID NO. of the student whose record is to be deleted:");
    scanf("%s",num);
    while(fread(&c,sizeof(student),1,fp)!=NULL)
    {
    	 
    	if(strcmp(num,c.id)==0)
    	{
    		printf("\n\t\t\t  ********The record  with Student Id=%s is being deletd*********",num);
    		delay(100);
    		found=1;
		}
		else{
			fwrite(&c,sizeof(student),1,fp_tmp);
		}
	}
	if(!found)
	{printf("\n\t\t*********No record found with that id*********");
	}
	fclose(fp);
	fclose(fp_tmp);
	remove("student.dat");
	rename("student1.dat","student.dat");
	printf("\n\n\t\t\t  Enter to go back");
	fflush(stdin);
	scanf("%c",&choice);
	if(choice=='\n')
    {
	   system("cls"); 
	   stu_reg();
    }
	
}

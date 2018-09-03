#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
main()


{    
        int i,l,j,k,key1,key2,key3,m,n,o,v;
		char r[50],s[50],x[50],y[50],a[50],b[50],c[50],d[50];
        char q[]="RAKESH TOP";
        char e[]="THIS BOOK IS ISSUED TO ";
        char f[]="YOUR ADDRESS IS ";
        char g[]=" NUMBER IS ";
        
		printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	printf("++++++++++++++++++++++++++++++++++++++++\n");
	
	printf("\t\t\t                                      +++++++++++++++++++++++++++++++++++++++++++++");
	printf("\n\t\t\t                                      +++++++++++++++++++++++++++++++++++++++++++++");
	printf("\n\t\t\t                                      ++                ELECTION                 ++");
	printf("\n\t\t\t                                      ++               COMMISSION                ++");
	printf("\n\t\t\t                                      ++                   OF                    ++");
	printf("\n\t\t\t                                      ++                  INDIA                  ++");
	printf("\n\t\t\t                                      +++++++++++++++++++++++++++++++++++++++++++++");
	printf("\n\t\t\t                                      +++++++++++++++++++++++++++++++++++++++++++++");
	
	
	printf("\n");
	printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t*********************************************\n");
	sleep(1);
	printf("\t\t\t\t\t\t\t\t**\t\t WELCOME\t\t\t   **\t\t\t\t\t\n");
	printf("\t\t\t\t\t\t\t\t**\t\t\t\t           **\n");
	sleep(1);
	printf("\t\t\t\t\t\t\t\t**\t\t   TO   \t\t   \t   **\n");
	printf("\t\t\t\t\t\t\t\t**\t\t\t\t\t   \t   **\n");
	sleep(1);
	printf("\t\t\t\t\t\t\t\t**\t\tELECTRONIC \t\t\t   **\n");;
	printf("\t\t\t\t\t\t\t\t**\t\t\t\t\t   \t   **\n");
	sleep(1);
	printf("\t\t\t\t\t\t\t\t**\t       VOTING MACHINE\t\t       **\n");
	printf("\t\t\t\t\t\t\t\t**\t\t\t\t\t   \t   **\n");
	sleep(1);
	/*printf("\t\t\t\t\t\t\t\t**\t\t    &\t\t\t\t   **\n");
	printf("\t\t\t\t\t\t\t\t**\t\t\t\t\t   \t   **\n");*/
	/*sleep(1);*/
	printf("\t\t\t\t\t\t\t\t**\t          PROJECT \t  \t       **\n");
	printf("\t\t\t\t\t\t\t\t**\t\t\t\t\t   \t   **\n");
	sleep(1);
	printf("\t\t\t\t\t\t\t\t*********************************************\n");
	
	getch();
	
	
	system("cls");
	puts("\n\n\n\t\tENTER YOUR USERNAME :-");
	gets(r);
	puts("\n\t\tENTER THE PASSWORD");
	gets(s);
	l=strlen(s);
	for(i=0;i<l;i++)
{
		
	 if(s[i]==q[i])
	 {  
	    //while(i=0)
//		printf("\n\t\tPASSWORD ACCEPTED");
		printf("\n\n\t\tPRESS ENTER TO CONTINUE");
	
		getch();
		b:
		system("cls");
		printf("\n\n\n\t\tENTER YOUR NAME  :-  ");
		gets(a);
		printf("\n\t\tENTER YOUR ADDRESS  :-  ");
		gets(b);
		//getch();
		system("cls");
		printf("\n\n\n\t\tENTER YOUR DATE OF BIRTH(in number)  :-  ");
		scanf("%d",&m);
		printf("\n\t\tENTER YOUR MONTH OF YEAR(in number)  :-  ");
		scanf("%d",&n);
		printf("\n\t\t ENTER YOUR YEAR OF BIRTH  :-  ");
		scanf("%d",&o);
		//getch();
		system("cls");
			for(i=o;i<=2016;i++)
		   	{
		   		v++;
		   	}
		   	printf("\n\n\n\t\t   b  :-   YOUR AGE IS =   %d",v);
		   	printf(" YEARS\n");
		   	if(v>=18)
		   	{
		   		printf("\n\n\t\tYOU ARE ELIGIBLE TO VOTE");
		    }
		    else
		    {
		    	printf("\n\n\t\tYOU ARE NOT ELIGIBLE TO VOTE");
			}
			getch();
			system("cls");
			
			
			

	
		
    }
	
	 else
	 {
		printf("\n\t\tPASSWORD DENIED");
	//	return(0);
	//	goto a;
	 }
}
}

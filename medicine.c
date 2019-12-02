#include<stdio.h>
#include<string.h>
#include<ctype.h>
typedef struct
{
	int id;
	char mname[20],company[20],mfg[20],exp[20];
	double qnty,cost;
}medicine;
void get_problem(medicine []);
void show();
void clear();
void new_entry(medicine []);
void issue();
void show_medicine(medicine []);
void main()
{
	medicine data[10];
	show();
	get_problem(data);
}
void get_problem(medicine data[])
{
	int ch,ch1,ch2;
	int i=0;
	printf("\t\t\t|**************************************|\n");
	printf("\t\t\t|               MAIN MENU              |\n");
	printf("\t\t\t|**************************************|\n");
	printf("\t\t\t|        1.FOR MASTER HANDLING         |\n");
	printf("\t\t\t|                                      |\n");
	printf("\t\t\t|        2.FOR TRANSACTION  HANDLING   |\n");
	printf("\t\t\t|                                      |\n");
	printf("\t\t\t|        3.FOR EXIT                    |\n");
	printf("\t\t\t|                                      |\n");
	printf("\t\t\t|**************************************|\n\n\n");
	printf("\t\t\tENTER YOUR CHOICE :....");
	scanf("%d",&ch);
	printf("\n\n");
	switch(ch)
	{
		case 1:
			printf("\t\t\t|**************************************|\n");
		        printf("\t\t\t|             MASTER MENU              |\n");
		        printf("\t\t\t|**************************************|\n");
		        printf("\t\t\t|        1.NEW ENTRY                   |\n");
		        printf("\t\t\t|                                      |\n");
		        printf("\t\t\t|        2.SHOW MEDICINE               |\n");
		        printf("\t\t\t|                                      |\n");
		        printf("\t\t\t|        3.RETURN DAMAGE               |\n");
	        	printf("\t\t\t|                                      |\n");
			printf("\t\t\t|        4.CHANGE ENTRY                |\n");
			printf("\t\t\t|                                      |\n");
			printf("\t\t\t|        5.BACK TO MAIN MENU           |\n");
		        printf("\t\t\t|**************************************|\n\n\n");
			printf("\t\t\tENTER YOUR CHOICE:....");
			scanf("%d",&ch1);
			switch(ch1)
			{
				case 1:
					new_entry(data);
					break;
				case 2:
					show_medicine(data);
					break;
				case 3:
				case 4:
				case 5:
					get_problem(data);
					break;
				default:
					printf("INVALID CHOICE!!\n\n");
					break;
			}
			printf("\n\n");

			break;
		case 2:

			        printf("\t\t\t|**************************************|\n");
			        printf("\t\t\t|           TRANSACTION MENU           |\n");
				printf("\t\t\t|**************************************|\n");
			        printf("\t\t\t|        1.ISSUING MEDICINE            |\n");
			        printf("\t\t\t|                                      |\n");
			        printf("\t\t\t|        2.BACK TO MAIN MENU           |\n");
				printf("\t\t\t|                                      |\n");
			        printf("\t\t\t|**************************************|\n");
				printf("\t\t\tENTER YOUR CHOICE:....");
				scanf("%d",&ch2);
				switch(ch2)
				{
					case 1:
						issue(data);
						break;
					case 2:
						get_problem(data);
						break;
					default :
						printf("Inavlid Entry");
						break;
				}
				printf("\n\n");
				break;
		case 3:
				clear();
				printf("\t\t\t******************************************************************\n");
				printf("\t\t\tTHIS PROJECT IS DEVELOPED BY :\n");
				printf("\t\t\t                        	 ADARSH PADHI\n");
				printf("\t\t\t				 JYOTI RANJAN SAHOO\n");
				printf("\t\t\t				 ANURADHA RANI CHOUDHRY\n");
				printf("\t\t\t				 SHRUTI MOHAPATRA\n");
				printf("\t\t\t******************************************************************\n");
				break;
		default:
				printf("INVALID INPUT !!!");
				break;
	}	
}
void clear()
{
        int i;
        for(i=1;i<=50;i++){
                printf("\n");
        }

}
void show()
{
        int i;
        clear();
        printf("\t\t\t|**************************************|\n");
        printf("\t\t\t|             WELCOME TO               |\n");
        printf("\t\t\t|                                      |\n");
        printf("\t\t\t|           MEDICINE RETAIL            |\n");
        printf("\t\t\t|                                      |\n");
        printf("\t\t\t|                 SHOP                 |\n");
        printf("\t\t\t|                                      |\n");
        printf("\t\t\t|**************************************|\n");
        for(i=1;i<=5;i++)
        {
                printf("\n");
        }
}
void new_entry(medicine data[])
{
	char ch;
	int i,n;
        clear();
	printf("\t\t\tHOW MANY ENTRIES:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
        printf("\t\t\t**************************************************\n");
        printf("\t\t\t                     NEW ENTRY                    \n");
        printf("\t\t\t**************************************************\n");
        printf("\t\t\t*****PLEASE  ENTER THE DETAIL OF THE MEDICINE*****\n");
        printf("\t\t\t**************************************************\n");
        printf("\t\t\t\n\n");
	printf("\t\t\tENTER THE MEDICINE ID:....");
	scanf("%d",&data[i].id);
	scanf("%c",&ch);
        printf("\t\t\tENTER THE NAME OF THE MEDICINE:....");
       	// scanf("%c",&ch);
        gets(data[i].mname);
        printf("\t\t\tENTER THE COMPANY OF THE MEDICINE:...");
        gets(data[i].company);
	printf("\t\t\tENTER THE MANUFACTURE DATE:....");
	gets(data[i].mfg);
	printf("\t\t\tENTER THE EXPIRE DATE:...");
	gets(data[i].exp);
        printf("\t\t\tENTER THE COST OF THE MEDICINE:....");
        scanf("%lf",&data[i].cost);
        printf("\t\t\tENTER THE QUANTITY RECIVED:....");
        scanf("%lf",&data[i].qnty);
        printf("\t\t\t**************************************************\n");
        printf("\n\n\n\n\t\t\tMEDICINE ADDED !!! \n");
        printf("\t\t\t**************************************************\n\n\n\n\n");
	}
        get_problem(data);
}
void show_medicine(medicine data[])
{
	int i;
        printf("\t\t\t***************************************************************\n");
        printf("\t\t\t*********************AVAILABLE MEDICINE************************\n");
        printf("\t\t\t***************************************************************\n");
        for(i=0;i<2;i++)
	{
       	printf("\t\t\t*MEDICINE ID:...%d\n",data[i].id);
	printf("\t\t\t*NAME:.........");
	puts(data[i].mname);
	printf("\t\t\t*COMPANY.........");
	puts(data[i].company);
	printf("\t\t\t*MANUFACTURE DATE:....");
	puts(data[i].mfg);
	printf("\t\t\t*EXPIRE DATE:....");
	puts(data[i].exp);
	printf("\t\t\t*COST:...%0.1lf\n",data[i].cost);
	printf("\t\t\t*QUANTITY:....%0.1lf\n",data[i].qnty);
	printf("\t\t\t***************************************************************\n");
	}
}
void issue(medicine data[])
{
	clear();
	show_medicine(data);
        char ch,cdate[20],cname[20],caddress[20],cmname[20];
        double eqnty;
        double total;
	int i;
        printf("\t\t\tENTER THE TODAY'S DATE :...");
	scanf("%c",&ch);
        gets(cdate);
        printf("\t\t\tENTER CUSTOMER NAME:...");
        gets(cname);
        printf("\t\t\tENTER CUSTOMER ADDRESS:...");
        gets(caddress);
        printf("\t\t\tENTER MEDICINE NAME:...");
        gets(cmname);
        printf("\t\t\tEnter the quantity Required:...");
        scanf("%d",&eqnty);
	for(i=0;i<2;i++)
	{
		if(strcmp(cmname,data[i].mname)==1)
		{
       		 if(data[i].qnty>eqnty)
       		 {
               		 total=eqnty*data[i].cost;
               		 data[i].qnty=data[i].qnty-eqnty;
       		 }
		}
	}
	printf("\t\t\t**********************YOUR RECEIPT************************\n");
	printf("\t\t\t**********************************************************\n");
	printf("\t\t\tNAME:");
	puts(cname);
	printf("\t\t\tADDRESS:");
	puts(caddress);
	printf("\t\t\t**********************************************************\n");
	printf("\t\t\t*  MEDICINE NAME           QUANTITY          COST         \n");
	printf("\t\t\t**********************************************************\n");
	printf("\t\t\t*");
	puts(cmname);
	printf("\t\t\t\t\t\t%.2lf%10c%8.2lf\n",eqnty,' ',total);
	printf("\t\t\t**********************************************************\n");
	get_problem(data);
}


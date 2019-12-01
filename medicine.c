#include<stdio.h>
#include<string.h>
#include<ctype.h>
typedef struct
{
	char mname[20],company[20];
	double qnty,cost;
}medicine;
void get_problem(medicine []);
void show();
void clear();
void new_entry();
void issue();
/* char mname[25],company[25];
        double cost,qnty;*/
void main()
{
	medicine data[10];
	show();
	get_problem(data);
}
void get_problem(medicine data[])
{
	int ch,ch1,ch2;
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
		        printf("\t\t\t|        2.RESTORE DAMAGE              |\n");
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
//						issue(data);
						break;
					case 2:
						break;
					default :
						printf("Inavlid Entry");
						break;
				}
				printf("\n\n");
				break;
		case 3:
				printf("\t\t\t******************************************************************");
				printf("\t\t\tTHIS PROJECT ID DEVELOPED BY :\n");
				printf("\t\t\t                         ADARSH PADHI\n");
				printf("\t\t\t******************************************************************");
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
//        char ch,mname[25],company[25];
//      double cost,qnty;
	char ch;
        clear();
        printf("\t\t\t**************************************************\n");
        printf("\t\t\t                     NEW ENTRY                    \n");
        printf("\t\t\t**************************************************\n");
        printf("\t\t\t*****PLEASE  ENTER THE DETAIL OF THE MEDICINE*****\n");
        printf("\t\t\t**************************************************\n");
        printf("\t\t\t\n\n");
        printf("\t\t\tENTER THE NAME OF THE MEDICINE:....");
        scanf("%c",&ch);
        gets(data[0].mname);
        printf("\t\t\tENTER THE COMPANY OF THE MEDICINE:...");
        gets(data[0].company);
        //fflush(stdin);
        printf("\t\t\tENTER THE COST OF THE MEDICINE:....");
        scanf("%lf",&data[0].cost);
        printf("\t\t\tENTER THE QUANTITY RECIVED:....");
        scanf("%lf",&data[0].qnty);
        printf("\t\t\t**************************************************\n");
        printf("\n\n\n\n\t\t\tMEDICINE ADDED !!! \n");
        printf("\t\t\t**************************************************\n\n\n\n\n");
        get_problem(data);
}
/*void issue()
{
        char date[20],name[20],address[20],mname[20];
        int eqnty;
        double total;
        clear();
        printf("ENTER THE TODAY'S DATE :..\n");
        gets(date);
        printf("ENTER CUSTOMER NAME:...\n");
        gets(name);
        printf("ENTER CUSTOMER ADDRESS:...\n");
        gets(address);
        printf("ENTER MEDICINE NAME:...\n");
        gets(mname);
        printf("Enter the quantity Required:\n");
        scanf("%d",&eqnty);
        if(qnty>eqnty)
        {
                total=eqnty*cost;
                qnty=qnty-eqnty;
        }
}*/


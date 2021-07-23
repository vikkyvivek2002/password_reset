#include<stdio.h>
int main()
{
	int a;
	printf("enter 1 for Fast withdrawal\n");
	printf("enter 2 for Mini Statemint\n");
	printf("enter 3 for Balance Enquiry\n");
	printf("enter 4 for Reset Password\n");
	
	scanf("%d",&a);
	switch(a)
	{
		case 1:
		{
			printf("fast withdrawal :");
		    break;
		}
		case 2:
		{
			printf("Mini Statemint :");
			break;
		}
		case 3:
		{
			printf("Balance Enquiry :");
			break;
		}
		case 4:
        {
        	printf("Reset password: New password:*****Confirm password:*****\n");
          	break;
        }
		default :
		{
			printf("invalid option :");
		}	
	}
	return 0;
}
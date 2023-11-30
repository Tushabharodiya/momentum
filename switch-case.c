#include<stdio.h>
main()
{
	char day;
	
	printf(" Press s for Sunday\n ");
	printf("Press m for Monday\n");
	printf(" Press t for Tuesday\n");
	printf(" Press w for Wednesday\n");
	printf(" Press T for Thursday\n");
	printf(" Press f for Friday\n");
	printf(" Press S for Saturday\n");

	printf(" Enter the day=");
	scanf("%c",&day);
	
	
	switch(day)
	{
		case 's':
			printf(" Sunday");
			break;
		case 'm':
			printf(" Monday");
			break;
		case 't':
			printf(" Tuesday");
			break;
		case 'w':
			printf(" Wednesday");
			break;
		case 'T':
			printf(" Thursday");
			break;
		case 'f':
			printf(" Friday");
			break;
		case 'S':
			printf(" Saturday");
			break;
		default:
			printf(" pelase Enter day between suggestion");
	}
	
}
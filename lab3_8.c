#include<stdio.h>

int main()
{
	int hour =0,minute =0,second =0,add=0,extra_hours = 0;

	scanf("%d:%d:%d",&hour,&minute,&second);
	printf("Hour:%d\n",hour);
	printf("Minute:%d\n",minute);
	printf("second:%d\n",second);
    printf("Next minutes : ");
    scanf("%d",&add);
	
	minute += add;
    
    extra_hours = minute / 60;

	minute = minute % 60; 
	
	hour = (hour + extra_hours) % 24;
	
	printf("Hour:%d\n",hour);
	printf("Minute:%d\n",minute);
	printf("second:%d\n",second);
}
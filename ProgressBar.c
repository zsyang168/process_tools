#include<stdio.h>
#include<string.h>
#include<unistd.h>
void ProgressBar()
{
	int rate=0;
	char str[50];
	memset(str,'-',50*sizeof(char));
	const char *ptr="|/-\\";
	while(rate<=100)
	{
		str[rate/2]='>';
		printf("[%-50s][%d\%][%c]\r",str,rate,ptr[rate%4]);
		usleep(100000);
		fflush(stdout);
		rate++;
	}
	printf("\n");
}
int main()
{
	ProgressBar();
	return 0;
}

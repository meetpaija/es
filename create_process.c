#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<sys/types.h>
main()
{
int id=fork();
	if(id==0)
	{
		printf("In child: child id: %d \n",getpid());
		printf("In child: parent id: %d \n",getppid());
	}
	else
	{
		
		printf("In parent:parent id: %d \n",getpid());
				printf("In parent:child id: %d \n",id);
	}
}

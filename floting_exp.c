#include<stdio.h>
#include<string.h>
#include<time.h>

main()
{

clock_t tic = clock();
printf("start: %f\n",(double)tic);

	float a=2764872.634,c=0;
	int i;
	for(i=0;i<999999999;i++)
	{
		c+=a;
	}

    clock_t toc = clock();
printf("end: %f\n",(double)toc);
    printf("Elapsed: %f seconds\n", (double)(toc - tic) / CLOCKS_PER_SEC);

    return 0;
}

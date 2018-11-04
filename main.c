#include <stdio.h>

#define STUCKCAPA 10 //スタックできるデータ数

int main(int argc, char *argv[])
{
	char str[7];
	int data;
	int stuck[STUCKCAPA];
	int stuckNum = 0;
	int i = 0;
    
	while (fgets(str, sizeof(str), stdin))
	{
		data = atoi(str);
		switch (data)
		{
		    case 0:	
			    i = stuckNum-1;
			    while (i >= 0)
			    {
			    	printf("%d", stuck[i]);
			    	i--;

			    	if (i >= 0)
			    		printf(",");
			    	else
			    		printf("\n");
			    }
			    break;

		    case -1:
		    	if (stuckNum > 0) 
		    	{
		    		stuckNum--;
		    		printf("%d\n", stuck[stuckNum]);	
		    	}
		    	else
                {
		    		printf("\n");
                }
		    	break;

	    	default:
	    		stuck[stuckNum] = data;
		    	stuckNum++;
		    	break;
		}
	}

	return 0;
}

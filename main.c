#include <stdio.h>
#define STACKCAPA 10
 int main(int argc, char *argv[])
{
	char str[7];
	int data;
	int stack[STACKCAPA];
	int stackNum = 0;
	int i = 0;
    
	while (fgets(str, sizeof(str), stdin))
 	{
 		data = atoi(str);
		switch (data)
		{
			case 0:
				if(stackNum > 0)
				{
			   		i = stackNum-1;
			   		while (i >= 0)
			    	{
			    		
			    		printf("%d", stack[i]);
			    		i--;
 			    		if (i >= 0){
 			    			printf(",");
					}
 			    		else{
 			    			printf("\n");
					}
 			    	}
 				}
 				else
 				{
 					printf("\n");	
 				}
			    break;
 		    case -1:
		    	if (stackNum > 0) 
		    	{
		    		printf("%d\n", stack[stackNum]);	
		    	}
		    	else
               	{
 		    		printf("\n");
               	}
		    	break;
 	    	default:
				if(stackNum < STACKCAPA)
				{
	    			stack[stackNum] = data;
		    		stackNum++;
				}
		    	break;
		}
 	}
 
 	return 0;
 }

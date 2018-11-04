#include <stdio.h>
 #define STUCKCAPA 10 
#define STACKCAPA 10
 int main(int argc, char *argv[])
{
	char str[7];
	int data;
	int stuck[STUCKCAPA];
	int stuckNum=0;
	int stack[STACKCAPA];
	int stackNum=0;
	int i;
    
	while (fgets(str, sizeof(str), stdin))
 	{
 		data = atoi(str);
		switch (data){
		    case 0:
				if(stuckNum > 0)
				if(stackNum > 0){
			   		i = stuckNum-1;
			   		i = stackNum-1;
			   		while (i >= 0){
			    		printf("%d", stuck[i]);
			    		printf("%d", stack[i]);
			    		i--;
 			    		if (i >= 0)
@@ -37,10 +37,10 @@ int main(int argc, char *argv[])
			    break;
 		    case -1:
		    	if (stuckNum > 0) 
		    	if (stackNum > 0) {
		    		stuckNum--;
		    		printf("%d\n", stuck[stuckNum]);	
		    		stackNum--;
		    		printf("%d\n", stack[stackNum]);	
		    	}
		    	else{
 		    		printf("\n");
               	}
		    	break;
 	    	default:
				if(stuckNum < STUCKCAPA)
				if(stackNum < STACKCAPA){
	    			stuck[stuckNum] = data;
		    		stuckNum++;
	    			stack[stackNum] = data;
		    		stackNum++;
				}
		    	break;
		}
 	}
 
 	return 0;
 }

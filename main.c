#include <stdio.h>

int main(int argc, char *argv[]) 
{
    char str[7];
    int i=0,a[100],x;
    while(fgets(str, sizeof(str), stdin)){
        x=atoi(str);
        if(x==0){
            
        printf("%s", str);
    }

    return 0;
}

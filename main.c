#include <stdio.h>

int main(int argc, char *argv[]) 
{
    char str[100];
    int i=0,j,a[10],x;
    for(j=0;j<10;j++)
        a[j]='\0';
    while(fgets(str, sizeof(str), stdin)){
        x=atoi(str);
        if(x==0){
            for(j=i-1;j>=0;j--){
                printf("%d",a[j]);
                if(j>0)
                    printf(",");
            }
            printf("\n");
        }
        else if(x==-1){
            printf("%d\n",a[i-1]);
            a[i-1]='\0';
            i--;
        }
        else if(i<10){
            a[i]=x;
            i++;
        }
    }
    return 0;
}

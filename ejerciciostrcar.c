#include<stdio.h>
#include<string.h>
int main(){
    int len, i;
    char origen[20];
    char destino[20];
    printf("Introduce una plabra\n");
    scanf("%s", destino);
    len=strlen(destino);
    printf("Introduce la segunfda palabra\n");
    scanf("%s", origen);
    for ( i = 0; i <=len; i++){
        strcat(destino, origen);
       
    }
     printf("Destino: %s\n", destino);
    return 0;
    
}
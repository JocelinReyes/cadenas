#include<stdio.h>
#include<string.h>
int main(){
    int len;
    char origen[]="Origen";
    char destino[7];
    strcpy(destino, origen);
    printf("destino: %s\n ", destino);
    return 0;
}
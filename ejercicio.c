#include<stdio.h>
#include<string.h>
int main(){
    char cad[20];
    char cad2[20];
    char des[20];
    char des1[20];
    printf("Introduce una palabra \n");
    scanf("%s", cad);
    printf("Introduce la segunda plabra\n");
    scanf("%s", cad2);
    printf("Palabra 1: %s\n", cad);
    printf("Palabra 2: %s\n", cad2);
    strcpy(des, cad2);
    printf("Palabra 1: %s\n ", cad2);
    strcpy(des1, cad);
    printf("Palabra 2: %s\n ", cad);
    return 0;
}
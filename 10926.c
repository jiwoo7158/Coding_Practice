#define _CRT_SECURE_NO_WARNINGSd
#include<stdio.h>
#include <string.h>

int main(){
    char id[100];
    char add[100] = "??!";

    scanf("%s", id);
    strcat(id, add);

    printf("%s", id);
    return 0;
}
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include"phonebook.h"

void regist(struct phonebook* pbp){
    char password[30];
    char phone[30];
    char name[30];
    char pss[30] = "qwerty1234";
    printf("Password:");
    scanf("%s",password);
    if(strcmp(pss,password)){
         printf(">>Not matched!!!\n");
         printf("Password:");
         scanf("%s",password);
    }

    if(strcmp(pss,password)){
        printf(">>Not matched!!!(twice)\n");
        printf("Password:");
        scanf("%s",password);
    }
    if(strcmp(pss,password)){
        printf(">>Not matched!!!(3times)\n");
        printf("Password:");
        scanf("%s",password);
    }

    if(strcmp(pss,password)){
         printf(">>you are not allow to phonebook\n");
         return;
    }

    printf("New User Name:");
    scanf("%s",name);
    printf("PhoneNumber:");
    scanf("%s",phone);
    printf("Registered...\n");
    strcpy((pbp+makeIndex)->name,name);
    strcpy((pbp+makeIndex)->phoneNum,phone);
    makeIndex++;


}

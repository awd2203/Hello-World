#include<stdio.h>
#include"phonebook.h"

void print(struct phonebook* pbp){
    for(int i=0;i<makeIndex;++i){
        printf("%s %s\n",(pbp+i)->name,(pbp+i)->phoneNum);

    }
}

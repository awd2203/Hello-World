


void del(struct phonebook* pbp){
    char fstring[30];
    //bool flag=false;
    printf(">>Enter name to delete:");
    scanf("%s",fstring);
    for(int i=0;i<makeIndex;++i){
        if(!strcmp((pbp+i)->name,fstring)){
            for(int j=i;j<makeIndex;++j){
                strcpy((pbp+j)->name,(pbp+j+1)->name);
                strcpy((pbp+j)->phoneNum,(pbp+j+1)->phoneNum);
            }
            makeIndex--;
            printf("%s is deleted...\n",fstring);
            return;
        }
    }
    printf("oops!! %s is not in the phonebook\n",fstring);

}

void serch(struct phonebook* pbp){
    char fstring[30];
    bool flag=false;
    printf(">>Enter name to serch:");
    scanf("%s",fstring);
    for(int i=0;i<makeIndex;++i){
        if(!strcmp((pbp+i)->name,fstring)){
            printf("%s\n",(pbp+i)->phoneNum);
            flag = true;
        }
    }
    if(flag==true)
        return;
    printf("oops!! %s is not in the phonebook\n",fstring);

}

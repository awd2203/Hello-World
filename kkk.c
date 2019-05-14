#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int makeIndex=0;
struct phonebook{
    char name[30];
    char phoneNum[30];
};

void regist(struct phonebook* pbp){
    char password[30];
    char phone[30];
    char name[30];
    char pss[30] = "1";
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

void print(struct phonebook* pbp){
    for(int i=0;i<makeIndex;++i){
        printf("%s %s\n",(pbp+i)->name,(pbp+i)->phoneNum);

    }
}

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

int main(){
    int select;
    bool exitFlag=false;
    struct phonebook pb[50];
    struct phonebook* pbp = pb;

    while(1){
        printf("\n============== Telephone Book Management ============\n");
        printf(" <<1.Register 2.Print All 3.Serach 4.Delete 5.Exit>> \n");
        printf("Plese enter your service number (1-5)>");
        scanf("%d",&select);

        switch(select){
            case 1:
                regist(pbp);
                break;
            case 2:
                print(pbp);
                break;
            case 3:
                serch(pbp);
                break;
            case 4:
                del(pbp);
                break;
            case 5:
                exitFlag=true;
                break;
            default:
                getchar();
                printf("please select 1~5\n");
                break;
        }
        if(exitFlag==true)
            break;
    }


    return 0;
}


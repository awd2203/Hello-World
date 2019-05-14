#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "register.h"
#include "serch.h"
#include "print.h"
#include "delete.h"

int makeIndex=0;
struct phonebook{
    char name[30
    ];
    char phoneNum[30];
};

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


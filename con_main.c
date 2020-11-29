#include<stdio.h>

int who_are_you();



int main()
{
    int signal = 1;
    int choose;
    int choose2;


    struct student {
        char name;
        int score;
    };

    const char *start_menu[] = {
        "1.학생 점수 출력",
        "2.평균 점수",
        "3.프로그램 종료",
    };

    

    if(who_are_you == 1)
        printf("접속 완료!!\n");
    else return 0;

    char class_name;
    int class_num;
    printf("반 이름:");
    scanf("%s",&class_name);

    printf("총 명수:");
    scanf("%d",&class_num);

    struct student slist[class_num];
    for(int i = 0;  i< class_num; i++){
        printf("%d번 학생 이름:",i+1);
        scanf("%s",&slist[i].name);

        printf("%d번 학생 점수:",i+1);
        scanf("%d",&slist[i].score);  
    }

    printf("%s반 %d명 저장 완료!",class_name,class_num);











    while(signal){
        int i;
        for (i=0; i<4; i++){
            printf("%s\n" , start_menu[i]);
        }

        printf("1 / 2 / 3 / 4 입력:");
        scanf("%d" , &choose);

        switch(choose){
            case 1:
                printf("1.출력\n2.점수 순서대로 출력\n3.이름 순서대로 출력");
                scnaf("%d", &choose2);

                switch(choose2){
                    case 1:
                        printf("출력 실행!\n");
                        print_1(slist,class_num);
                        break;
                    case 2:
                        printf("점수 순서대로 출력 실행! \n");
                        break;
                    case 3:
                        printf("이름 순서대로 출력 실행! \n");
                        break;
                }


                break;
            case 2:
                printf("2번 실행!");
                break;
            case 3:
                printf("3번 실행!");
                printf("프로그램 종료!");
                signal = 0;
                break;
            default:
                printf("잘못 입력하셨습니다.");
        }

    

    }
}
int who_are_you(void)
{
    
    struct user {
        char name[10];
        int pass;    
    };

    struct user master = {"Jinseok05",0505};
    struct user guest;

    printf("사용자 이름 입력:");
    scanf("%s",&guest.name);
    if(master.name != guest.name){
        printf("이름 불일치!\n");
        printf("프로그램을 종료합니다!\n");
        return 0;
    }
    
    printf("비밀번호 입력:");
    scanf("%d", &guest.pass);

    if(master.pass != guest.pass){
        printf("비밀번호 불일치!\n");
        printf("프로그램을 종료합니다!\n");
        return 0;
    }
    
    return 1;
}

void print_1(struct student **slist, int size)
{
    for(int i = 0; i < size; i++){
        printf("%d. 이름: %s, 점수: %d\n",i+1, slist[i]->name,  slist[i]->score);
    }



}








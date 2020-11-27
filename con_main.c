#include<stdio.h>

int who_are_you();

int main()
{
    int signal = 1;
    int choose;

    if(who_are_you == 1)
        printf("접속 완료!!");
    else return 0;


    while(signal){
        printf("1.연락처 출력\n");
        printf("2.연락처 추가\n");
        printf("3.연락처 삭제\n");
        printf("4.프로그램 종료\n");

        printf("1 / 2 / 3 / 4 입력:");
        scanf("%d" , &choose);

        switch(choose){
            case 1:
                printf("1번 실행!");
                break;
            case 2:
                printf("2번 실행!");
                break;
            case 3:
                printf("3번 실행!");
                break;
            case 4:
                printf("4번 실행!");
                printf("프로그램 종료!");
                return 0;
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








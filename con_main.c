#include<stdio.h>
#include<string.h>
struct student{
	char name[20];
	int score;
};


int who_are_you();
void base_pr(struct student *, int);
void num_sequence_pr(struct student [], int);
int  get_average(struct student [], int);

int main()
{
    int signal = 1;
    int choose;
    int choose2;
    

    if(who_are_you() == 1)
        printf("접속 완료!!\n\n\n");
    else return 0;

    char class_name[20]={0};
    int class_num;
    printf("반 이름:");
    scanf("%s", class_name);

    printf("총 명수:");
    scanf("%d",&class_num);

    struct student slist[class_num];
    for(int i = 0;  i< class_num; i++){
        printf("%d번 학생 이름:",i+1);
        scanf("%s",slist[i].name);

        printf("%d번 학생 점수:",i+1);
        scanf("%d",&slist[i].score);  
    }

    printf("%s반 %d명 저장 완료!\n\n\n", class_name, class_num);











    while(signal){

        printf("1.출력\n");
		printf("2.평균 구하기\n");
		printf("3.프로그램 종료!\n");
        printf("1 / 2 / 3 입력:");
        scanf("%d" , &choose);
		printf("\n\n");

        switch(choose){
            case 1:
                printf("1.기본출력\n2.점수 순서대로 출력\n3.이름 순서대로 출력\n");
				printf("1 / 2 / 3 입력:");
                scanf("%d", &choose2);
				printf("\n\n\n");
                switch(choose2){
                    case 1:
                        printf("기본출력 실행!\n");
                        base_pr(slist,class_num);
                        break;
                    case 2:
                        printf("점수 순서대로 출력 실행! \n");
						num_sequence_pr(slist,class_num);
                        break;
                    case 3:
                        printf("이름 순서대로 출력 실행! \n");
                        break;
                }
                break;
            case 2:
                printf("2번 실행!\n");
                break;
            case 3:
                printf("3번 실행!\n");
                printf("프로그램 종료!\n");
                signal = 0;
                break;
            default:
                printf("잘못 입력하셨습니다.\n");
        }

    

    }
}
int who_are_you(void)
{
    
    struct user {
        char name[7];
        int pass;    
    };

    struct user master = {"Jinseok" ,5555};
    struct user guest;

    printf("사용자 이름 입력:");
	scanf("%s",guest.name);
	for(int i =0; i<7; i++){
   		if(master.name[i] != guest.name[i]){
    		printf("이름 불일치!\n");
        	printf("프로그램을 종료합니다!\n");
        	return 0;
    	}
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

void base_pr(struct student *slist, int size)
{
	printf("-------------------------------------\n");
    for(int i = 0; i < size; i++){
        printf("%d. 이름: %s, 점수: %d\n",i+1, (slist+i)->name, (slist+i)->score);
    }
	printf("-------------------------------------\n");



}

void num_sequence_pr(struct student slist[], int size){
	
	struct student prlist[size];
	int maxi;
	char temp_ch[10];
	int temp_in;	

	for(int i = 0; i < size -1; i++){
		maxi = i;
		for(int j = i+1; j < size; j++){
			if (slist[j].score > slist[maxi].score){
				maxi = j;
			}
		

		
		strcpy(temp_ch, slist[i].name);
		temp_in = slist[i].score;

		strcpy(slist[i].name, slist[maxi].name);
		slist[i].score = slist[maxi].score;

		strcpy(slist[maxi].name, temp_ch);
		slist[maxi].score = temp_in;
		}
	}
	

	printf("--------------------------------------\n");
	for(int k = 0; k < size; k++){
		printf("%d.이름: %s   점수: %d\n",k+1,slist[k].name,slist[k].score); 

	}
	printf("--------------------------------------\n");
}

int get_average(struct student slist[], int size){



}















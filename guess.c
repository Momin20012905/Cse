#include<stdio.h>
#include<time.h>
int main(){
    int mynum,usernum;
    srand(time(NULL));
    mynum=rand()%10;
    printf("guess a number from 0-9\n");
    while(1){
        printf("guess a number: ");
        scanf("%d",&usernum);
        if(mynum==usernum){
            printf("correct\n");
            break;
        }
        else if(mynum>usernum){
            printf("my number is greater than %d.try again\n",usernum);
        }
        else{
            printf("my number is smaller than %d.try again\n",usernum);
        }
    }
}

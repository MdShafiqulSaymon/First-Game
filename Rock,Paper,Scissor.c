//Bishmillahir Rahmanir Rahim
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define rock 1
#define paper 2
#define scissor 3
#define saymon_win 1
#define pc_win 2
#define DRAW 0
int game(int saymon,int pc){
    int result;
 if(saymon==rock&&pc==paper){
    result=pc_win;
 }
else if(saymon==rock&&pc==scissor){
    result=saymon_win;
 }
 else if(saymon==paper&&pc==rock){
    result=saymon_win;
 }
 else if(saymon==paper&&pc==scissor){
    result=pc_win;
 }
else if(saymon=scissor&&pc==rock){
    result=pc_win;
 }
else if(saymon==scissor&&pc==paper){
    result=saymon_win;
 }
else{
    result=DRAW;
}
return result;
}

 int get_user_input(){
 int choice;
 do{
        printf("1.rock\n");
        printf("2.paper\n");
        printf("1.scissor\n");
        printf("Please input  [1,2,3]:");
        scanf("%d",&choice);
        if(!(choice>=1&&choice<=3)){
            printf("ERROR___Invalid Input,Should Be 1 or 2 or 3");
        }
  }while(!(choice>=1&&choice<=3));
  return choice;
}

void print_word(int v){
 if(v==rock){
    printf("Rock\n");
 }
 else if(v==scissor){
    printf("Scissor\n");
 }
 else if(v==paper){
    printf("Paper\n");
 }

}



int main()
{
    int saymonscore=0;
    int pcscore=0;
    char respond;
    srand(time(NULL));
    int quit=0;
    while(!quit){
        int user_input=get_user_input();
        int pc_input=(rand()%3)+1;
        printf("Saymon choice:");
        print_word(user_input);
        printf("PC input:");
        print_word(pc_input);
        int result=game(user_input,pc_input);
        if(result==DRAW){
            printf("It is draw\n");
        }
        else if(result==saymon_win){
            printf("saymon wins and pc lost the game\n");
            saymonscore++;
        }
        else if(result==pc_win){
            printf("pc wins and saymon lost the game\n");
            pcscore++;
        }
        printf("\n");
        printf("-----------------------------------------\n");
        printf("saymon's score:%d\n",saymonscore);
        printf("PC's score:%d\n",pcscore);
        printf("------------------------------------------\n");
        printf("\n\n");
        printf("Do yo want to continue...plese respond press any number without 0\n");
        scanf("%d",&respond);
        if(respond==0){
            quit=1;
        }
    }
    printf("Fainal score-------\n");
     printf("\n\n");
        printf("-----------------------------------------\n");
        printf("saymon's score:%d\n",saymonscore);
        printf("PC's score:%d\n",pcscore);
        printf("------------------------------------------\n");
        printf("\n\n");
        if(saymonscore==pcscore){
            printf("THE GAME IS DRAW\n");
        }
        else if(saymonscore>pcscore){
            printf("SAYMON WINS THE GAME\n");
        }
        else{
            printf("PC WINS THE GAME\n");
        }

}

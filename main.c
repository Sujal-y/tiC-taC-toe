#include<stdio.h>
char version[] ="v0.52";
char r1[3]={' ',' ',' '}; //board
char r2[3]={' ',' ',' '}; //board
char r3[3]={' ',' ',' '}; //board
int game_status = 1 ;//If match in progress value = 1
char current_player ='X'; //current player

void printInstructions(){//outputs the numbers corresponding to the positions
printf("\t1|2|3\n");
printf("\t4|5|6\n");
printf("\t7|8|9\n");
}

void outputarray(){//displays array
int i=0,j=0;
    printf("\t");
    while (i<3)
    {
    while(j== 0||j==1){
    printf("%c|",r1[j]);
    j++;
    i++;
    }
    printf("%c",r1[i]);
    i+=1;
    }

    printf("\n\t");
    i=0; j=0;

    while (i<3)
    {
    while(j== 0||j==1)
    {
    printf("%c|",r2[j]);
    j++; i++;
    }
    printf("%c",r2[i]);
    i+=1;
    }

    printf("\n\t");
    i=0; j=0;
    while (i<3)
    {
    while(j== 0||j==1)
    {
    printf("%c|",r3[j]);
    j++; i++;
    }
    printf("%c",r3[i]);
    i+=1;
    }
    printf("\n");
}

void switchPlayer() {//switches the current player
if (current_player == 'X') current_player = 'O';
else current_player = 'X';
}

int checkTie() { //checks tie
int empty = 0; //default the board has no empty space
for(int i=0;i<3;i++){
if(r1[i]== ' ') empty=1;
if(r2[i]== ' ') empty=1;
if(r3[i]== ' ') empty=1;
}
if (empty == 1) return 1;//has empty space
else {printf("its a tie!");return 0;}

}

int checkwin(){//checks weather match is finished or not
//just hardcoded shit
if (r1[0]=='X' && r1[1]=='X' && r1[2]=='X')
{
printf("X won the game!!\n"); return 0;game_status =0;
}
else if (r2[0]=='X' && r2[1]=='X' && r2[2]=='X')
{
printf("X won the game!!\n"); return 0;game_status =0;
}
else if (r3[0]=='X' && r3[1]=='X' && r3[2]=='X')
{
printf("X won the game!!\n"); return 0;game_status =0;
}
else if (r1[0]=='X' && r2[0]=='X' && r3[0]=='X')
{
printf("X won the game!!\n"); return 0;game_status =0;
}
else if (r1[1]=='X' && r2[1]=='X' && r3[1]=='X')
{
printf("X won the game!!\n"); return 0;game_status =0;
}
else if (r1[2]=='X' && r2[2]=='X' && r3[2]=='X')
{
printf("X won the game!!\n"); return 0;game_status =0;
}
else if (r1[0]=='X' && r2[1]=='X' && r3[2]=='X')
{
printf("X won the game!!\n"); return 0;game_status =0;
}
else if (r1[2]=='X' && r2[1]=='X' && r3[0]=='X')
{
printf("X won the game!!\n"); return 0;game_status =0;
}
else if (r1[0]=='O' && r1[1]=='O' && r1[2]=='O')
{
printf("O won the game!!\n"); return 0;game_status =0;
}
else if (r2[0]=='O' && r2[1]=='O' && r2[2]=='O')
{
printf("O won the game!!\n"); return 0;game_status =0;
}
else if (r3[0]=='O' && r3[1]=='O' && r3[2]=='O')
{
printf("O won the game!!\n"); return 0;game_status =0;
}
else if (r1[0]=='O' && r2[0]=='O' && r3[0]=='O')
{
printf("O won the game!!\n"); return 0;game_status =0;
}
else if (r1[1]=='O' && r2[1]=='O' && r3[1]=='O')
{
printf("O won the game!!\n"); return 0;game_status =0;
}
else if (r1[2]=='O' && r2[2]=='O' && r3[2]=='O')
{
printf("O won the game!!\n"); return 0;game_status =0;
}
else if (r1[0]=='O' && r2[1]=='O' && r3[2]=='O')
{
printf("O won the game!!\n"); return 0;game_status =0;
}
else if (r1[2]=='O' && r2[1]=='O' && r3[0]=='O')
{
printf("O won the game!!\n"); return 0;game_status =0;
}
else //if match not over it continues and changes current player
{
switchPlayer();
return 1;
}
}

int makeMove(){//new play
int input;
reenter:
printf("%c where do you want to place it? \n",current_player);
scanf("%d",&input);
if (input>0 && input<=9)
{
if (input==1 && r1[0]!=current_player && r1[0]!='O')
{
r1[0]=current_player;return 1;
}
else if (input==2 && r1[1]!='X' && r1[1]!='O')
{
r1[1]=current_player;return 1;
}
else if (input==3 && r1[2]!='X' && r1[2]!='O')
{
r1[2]=current_player;return 1;
}
else if (input==4 && r2[0]!='X' && r2[0]!='O')
{
r2[0]=current_player;return 1;
}
else if (input==5 && r2[1]!='X' && r2[1]!='O')
{
r2[1]=current_player;return 1;
}
else if (input==6 && r2[2]!='X' && r2[2]!='O')
{
r2[2]=current_player;return 1;
}
else if (input==7 && r3[0]!='X' && r3[0]!='O')
{
r3[0]=current_player;return 1;
}
else if (input==8 && r3[1]!='X' && r3[1]!='O')
{
r3[1]=current_player;return 1;
}
else if (input==9 && r3[2]!='X' && r3[2]!='O')
{
r3[2]=current_player;return 1;
}
else{printf("\talready there, try again\n");goto reenter;}
}
else printf("%c did not enter a valid value, GAME OVER...\n",current_player);
return 0;

}

int main(){

 printf("TiC TaC Toe %s   ~ hardcoded by SonicX1829//made way better by -_-\n",version);
 printInstructions();//displays the number corresponding to the position
 printf("X starts first!\n");

 while (game_status)
 {
    if (checkTie()==0) break;//checks tie
    if (makeMove()==0) break; //input
    outputarray(); // print the array
    if (checkwin() == 0) break;//evaluate if the person won the game
 }
 return 0;
}
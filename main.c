#include<stdio.h>
//variable declaration
int i=0,t=1;
char r1[3]={'1','2','3'};
char r2[3]={'4','5','6'};
char r3[3]={'7','8','9'};
int a,b,g=1,co=0;

// function to print the array
void arr()
{
     i=0;
     while (i<3)
     {
         printf("%c|",r1[i]);
         i+=1;
     }
     printf("\n");
     i=0;
     while (i<3)
     {
         printf("%c|",r2[i]);
         i+=1;
     }
     printf("\n");
     i=0;
     while (i<3)
     {
         printf("%c|",r3[i]);
         i+=1;
     }
     printf("\n");
}

// function for X's move
int Xturn()
{
    restartX:
         printf("X where do you want to place it? \n");
         scanf("%d",&a);
         if (a>0 && a<=9)
         {
             if (a==1)
             {
                 if (r1[0]!='X' && r1[0]!='O')
                 {
                     r1[0]='X';
                     return 1;
                 }
                 else
                 {
                     goto restartX;
                 }
             }
             else if (a==2)
             {
                 if (r1[1]!='X' && r1[1]!='O')
                 {
                     r1[1]='X';
                     return 1;
                 }
                 else
                 {
                     goto restartX;
                 }
             }
             else if (a==3)
             {
                 if (r1[2]!='X' && r1[2]!='O')
                 {
                     r1[2]='X';
                     return 1;
                 }
                 else
                 {
                     goto restartX;
                 }
             }
             else if (a==4)
             {
                 if (r2[0]!='X' && r2[0]!='O')
                 {
                     r2[0]='X';
                     return 1;
                 }
                 else
                 {
                     goto restartX;
                 }
             }
             else if (a==5)
             {
                 if (r2[1]!='X' && r2[1]!='O')
                 {
                     r2[1]='X';
                     return 1;
                 }
                 else
                 {
                     goto restartX;
                 }
             }
             else if (a==6)
             {
                 if (r2[2]!='X' && r2[2]!='O')
                 {
                     r2[2]='X';
                     return 1;
                 }
                 else
                 {
                     goto restartX;
                 }
             }
             else if (a==7)
             {
                 if (r3[0]!='X' && r3[0]!='O')
                 {
                     r3[0]='X';
                     return 1;
                 }
                 else
                 {
                     goto restartX;
                 }
             }
             else if (a==8)
             {
                 if (r3[1]!='X' && r3[1]!='O')
                 {
                     r3[1]='X';
                     return 1;
                 }
                 else
                 {
                     goto restartX;
                 }
             }
             else if (a==9)
             {
                 if (r3[2]!='X' && r3[2]!='O')
                 {
                     r3[2]='X';
                     return 1;
                 }
                 else
                 {
                     goto restartX;
                 }
             }
         }
         else
         {
             printf("X did not enter a valid value, GAME OVER...\n");
             return 0;
         }
}

// function for O's move
int Oturn()
{
    restartO:
         printf("O where do you want to place it? \n");
         scanf("%d",&b);
         if (b>0 && b<=9)
         {
             if (b==1)
             {
                 if (r1[0]!='X' && r1[0]!='O')
                 {
                     r1[0]='O';
                     return 1;
                 }
                 else
                 {
                     goto restartO;
                 }
             }
             else if (b==2)
             {
                 if (r1[1]!='X' && r1[1]!='O')
                 {
                     r1[1]='O';
                     return 1;
                 }
                 else
                 {
                     goto restartO;
                 }
             }
             else if (b==3)
             {
                 if (r1[2]!='X' && r1[2]!='O')
                 {
                     r1[2]='O';
                     return 1;
                 }
                 else
                 {
                     goto restartO;
                 }
             }
             else if (b==4)
             {
                 if (r2[0]!='X' && r2[0]!='O')
                 {
                     r2[0]='O';
                     return 1;
                 }
                 else
                 {
                     goto restartO;
                 }
             }
             else if (b==5)
             {
                 if (r2[1]!='X' && r2[1]!='O')
                 {
                     r2[1]='O';
                     return 1;
                 }
                 else
                 {
                     goto restartO;
                 }
             }
             else if (b==6)
             {
                 if (r2[2]!='X' && r2[2]!='O')
                 {
                     r2[2]='O';
                     return 1;
                 }
                 else
                 {
                     goto restartO;
                 }
             }
             else if (b==7)
             {
                 if (r3[0]!='X' && r3[0]!='O')
                 {
                     r3[0]='O';
                     return 1;
                 }
                 else
                 {
                     goto restartO;
                 }
             }
             else if (b==8)
             {
                 if (r3[1]!='X' && r3[1]!='O')
                 {
                     r3[1]='O';
                     return 1;
                 }
                 else
                 {
                     goto restartO;
                 }
             }
             else if (b==9)
             {
                 if (r3[2]!='X' && r3[2]!='O')
                 {
                     r3[2]='O';
                     return 1;
                 }
                 else
                 {
                     goto restartO;
                 }
             }
         }
         else
         {
             printf("O did not enter a valid value, GAME OVER...\n");
             return 0;
         }
}

// function for checking win conditions
int win()
{
         if (r1[0]=='X' && r1[1]=='X' && r1[2]=='X')
         {
             printf("X won the game!!\n"); return 0;
         }
         else if (r2[0]=='X' && r2[1]=='X' && r2[2]=='X')
         {
             printf("X won the game!!\n"); return 0;
         }
         else if (r3[0]=='X' && r3[1]=='X' && r3[2]=='X')
         {
             printf("X won the game!!\n"); return 0;
         }
         else if (r1[0]=='X' && r2[0]=='X' && r3[0]=='X')
         {
             printf("X won the game!!\n"); return 0;
         }
         else if (r1[1]=='X' && r2[1]=='X' && r3[1]=='X')
         {
             printf("X won the game!!\n"); return 0;
         }
         else if (r1[2]=='X' && r2[2]=='X' && r3[2]=='X')
         {
             printf("X won the game!!\n"); return 0;
         }
         else if (r1[0]=='X' && r2[1]=='X' && r3[2]=='X')
         {
             printf("X won the game!!\n"); return 0;
         }
         else if (r1[2]=='X' && r2[1]=='X' && r3[0]=='X')
         {
             printf("X won the game!!\n"); return 0;
         }
         else if (r1[0]=='O' && r1[1]=='O' && r1[2]=='O')
         {
             printf("O won the game!!\n"); return 0;
         }
         else if (r2[0]=='O' && r2[1]=='O' && r2[2]=='O')
         {
             printf("O won the game!!\n"); return 0;
         }
         else if (r3[0]=='O' && r3[1]=='O' && r3[2]=='O')
         {
             printf("O won the game!!\n"); return 0;
         }
         else if (r1[0]=='O' && r2[0]=='O' && r3[0]=='O')
         {
             printf("O won the game!!\n"); return 0;
         }
         else if (r1[1]=='O' && r2[1]=='O' && r3[1]=='O')
         {
             printf("O won the game!!\n"); return 0;
         }
         else if (r1[2]=='O' && r2[2]=='O' && r3[2]=='O')
         {
             printf("O won the game!!\n"); return 0;
         }
         else if (r1[0]=='O' && r2[1]=='O' && r3[2]=='O')
         {
             printf("O won the game!!\n"); return 0;
         }
         else if (r1[2]=='O' && r2[1]=='O' && r3[0]=='O')
         {
             printf("O won the game!!\n"); return 0;
         }
         else
         {
            return 1;
         }
}

// function checking for tie
int tie()
{
    co=0;
         for (int i=0;i<=2;i++)
         {
            if ((r1[i]=='X' || r1[i]=='O') && (r2[i]=='X' || r2[i]=='O') && (r3[i]=='X' || r3[i]=='O'))
            {
                co+=1;
            }
         }
         if (co==3)
         {
            printf("Game Ended in a Tie !!\n");
            return 0;
         }
         else
         {
            return 1;
         }
}

// main function
int main(){
     printf("TiC TaC Toe v1.0   ~ SonicX1829\n");

     printf("X starts first!\n");
     while (g==1)
     {
         //prints the array
         arr();
         //checks for turns
         if (t%2==0)
        {
             if (Oturn()==0)
             {
                 break;
              }
        }
         else
         {
             if (Xturn()==0)
             {
                 break;
             }
         }
         //evaluate if the person won the game
         if (win()==0)
         {
            break;
         }
         //checks for tie
         if (tie()==0)
         {
            break;
         }
         //changes turns
         t+=1;
     }
     return 0;
 
 }
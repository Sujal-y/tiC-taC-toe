#include<stdio.h>
int main(){
     printf("TiC TaC Toe v0.4   ~ SonicX1829\n");
     char r1[3]={' ',' ',' '};
     char r2[3]={' ',' ',' '};
     char r3[3]={' ',' ',' '};
     printf("1|2|3\n");
     printf("4|5|6\n");
     printf("7|8|9\n");
     printf("X starts first!\n");
     int a,b,g=1;
     while (g==1)
     {
         printf("X where do you want to place it? \n");
         scanf("%d",&a);
         if (a>0 && a<=9)
         {
             if (a==1 && r1[0]!='X' && r1[0]!='O')
             {
                 r1[0]='X';
             }
             else if (a==2 && r1[1]!='X' && r1[1]!='O')
             {
                 r1[1]='X';
             }
             else if (a==3 && r1[2]!='X' && r1[2]!='O')
             {
                 r1[2]='X';
             }
             else if (a==4 && r2[0]!='X' && r2[0]!='O')
             {
                 r2[0]='X';
             }
             else if (a==5 && r2[1]!='X' && r2[1]!='O')
             {
                 r2[1]='X';
             }
             else if (a==6 && r2[2]!='X' && r2[2]!='O')
             {
                 r2[2]='X';
             }
             else if (a==7 && r3[0]!='X' && r3[0]!='O')
             {
                 r3[0]='X';
             }
             else if (a==8 && r3[1]!='X' && r3[1]!='O')
             {
                 r3[1]='X';
             }
             else if (a==9 && r3[2]!='X' && r3[2]!='O')
             {
                 r3[2]='X';
             }
         }
         else
         {
             printf("X did not enter a valid value, GAME OVER...\n");
             break;
         }
         //print the array
         int i=0;
         while (i<3)
         {
             printf("%c|",r1[i]);
             i+=1;
         }
         printf("\n");
         i=0;
         while (i<3)
         {
             printf("%c|",r2[i],"|");
             i+=1;
         }
         printf("\n");
         i=0;
         while (i<3)
         {
             printf("%c|",r3[i],"|");
             i+=1;
         }
         printf("\n");
         //evaluate if the person won the game
         if (r1[0]=='X' && r1[1]=='X' && r1[2]=='X')
         {
             printf("X won the game!!\n"); break;
         }
         else if (r2[0]=='X' && r2[1]=='X' && r2[2]=='X')
         {
             printf("X won the game!!\n"); break;
         }
         else if (r3[0]=='X' && r3[1]=='X' && r3[2]=='X')
         {
             printf("X won the game!!\n"); break;
         }
         else if (r1[0]=='X' && r2[0]=='X' && r3[0]=='X')
         {
             printf("X won the game!!\n"); break;
         }
         else if (r1[1]=='X' && r2[1]=='X' && r3[1]=='X')
         {
             printf("X won the game!!\n"); break;
         }
         else if (r1[2]=='X' && r2[2]=='X' && r3[2]=='X')
         {
             printf("X won the game!!\n"); break;
         }
         else if (r1[0]=='X' && r2[1]=='X' && r3[2]=='X')
         {
             printf("X won the game!!\n"); break;
         }
         else if (r1[2]=='X' && r2[1]=='X' && r3[0]=='X')
         {
             printf("X won the game!!\n"); break;
         }
         else if (r1[0]=='O' && r1[1]=='O' && r1[2]=='O')
         {
             printf("O won the game!!\n"); break;
         }
         else if (r2[0]=='O' && r2[1]=='O' && r2[2]=='O')
         {
             printf("O won the game!!\n"); break;
         }
         else if (r3[0]=='O' && r3[1]=='O' && r3[2]=='O')
         {
             printf("O won the game!!\n"); break;
         }
         else if (r1[0]=='O' && r2[0]=='O' && r3[0]=='O')
         {
             printf("O won the game!!\n"); break;
         }
         else if (r1[1]=='O' && r2[1]=='O' && r3[1]=='O')
         {
             printf("O won the game!!\n"); break;
         }
         else if (r1[2]=='O' && r2[2]=='O' && r3[2]=='O')
         {
             printf("O won the game!!\n"); break;
         }
         else if (r1[0]=='O' && r2[1]=='O' && r3[2]=='O')
         {
             printf("O won the game!!\n"); break;
         }
         else if (r1[2]=='O' && r2[1]=='O' && r3[0]=='O')
         {
             printf("O won the game!!\n"); break;
         }
         printf("O where do you want to place it? \n");
         scanf("%d",&b);
         if (b>0 && b<=9)
         {
             if (b==1 && r1[0]!='X' && r1[0]!='O')
             {
                 r1[0]='O';
             }
             else if (b==2 && r1[1]!='X' && r1[1]!='O')
             {
                 r1[1]='O';
             }
             else if (b==3 && r1[2]!='X' && r1[2]!='O')
             {
                 r1[2]='O';
             }
             else if (b==4 && r2[0]!='X' && r2[0]!='O')
             {
                 r2[0]='O';
             }
             else if (b==5 && r2[1]!='X' && r2[1]!='O')
             {
                 r2[1]='O';
             }
             else if (b==6 && r2[2]!='X' && r2[2]!='O')
             {
                 r2[2]='O';
             }
             else if (b==7 && r3[0]!='X' && r3[0]!='O')
             {
                 r3[0]='O';
             }
             else if (b==8 && r3[1]!='X' && r3[1]!='O')
             {
                 r3[1]='O';
             }
             else if (b==9 && r3[2]!='X' && r3[2]!='O')
             {
                 r3[2]='O';
             }
         }
         else
         {
             printf("O did not enter a valid value, GAME OVER...\n");
             break;
         }
         //print the array
         i=0;
         while (i<3)
         {
             printf("%c|",r1[i],"|");
             i+=1;
         }
         printf("\n");
         i=0;
         while (i<3)
         {
             printf("%c|",r2[i],"|");
             i+=1;
         }
         printf("\n");
         i=0;
         while (i<3)
         {
             printf("%c|",r3[i],"|");
             i+=1;
         }
         printf("\n");
         //evaluate if the person won the game
         if (r1[0]=='X' && r1[1]=='X' && r1[2]=='X')
         {
             printf("X won the game!!\n"); break;
         }
         else if (r2[0]=='X' && r2[1]=='X' && r2[2]=='X')
         {
             printf("X won the game!!\n"); break;
         }
         else if (r3[0]=='X' && r3[1]=='X' && r3[2]=='X')
         {
             printf("X won the game!!\n"); break;
         }
         else if (r1[0]=='X' && r2[0]=='X' && r3[0]=='X')
         {
             printf("X won the game!!\n"); break;
         }
         else if (r1[1]=='X' && r2[1]=='X' && r3[1]=='X')
         {
             printf("X won the game!!\n"); break;
         }
         else if (r1[2]=='X' && r2[2]=='X' && r3[2]=='X')
         {
             printf("X won the game!!\n"); break;
         }
         else if (r1[0]=='X' && r2[1]=='X' && r3[2]=='X')
         {
             printf("X won the game!!\n"); break;
         }
         else if (r1[2]=='X' && r2[1]=='X' && r3[0]=='X')
         {
             printf("X won the game!!\n"); break;
         }
         else if (r1[0]=='O' && r1[1]=='O' && r1[2]=='O')
         {
             printf("O won the game!!\n"); break;
         }
         else if (r2[0]=='O' && r2[1]=='O' && r2[2]=='O')
         {
             printf("O won the game!!\n"); break;
         }
         else if (r3[0]=='O' && r3[1]=='O' && r3[2]=='O')
         {
             printf("O won the game!!\n"); break;
         }
         else if (r1[0]=='O' && r2[0]=='O' && r3[0]=='O')
         {
             printf("O won the game!!\n"); break;
         }
         else if (r1[1]=='O' && r2[1]=='O' && r3[1]=='O')
         {
             printf("O won the game!!\n"); break;
         }
         else if (r1[2]=='O' && r2[2]=='O' && r3[2]=='O')
         {
             printf("O won the game!!\n"); break;
         }
         else if (r1[0]=='O' && r2[1]=='O' && r3[2]=='O')
         {
             printf("O won the game!!\n"); break;
         }
         else if (r1[2]=='O' && r2[1]=='O' && r3[0]=='O')
         {
             printf("O won the game!!\n"); break;
         }
     }
     return 0;
 
 }
 

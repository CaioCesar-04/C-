#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<time.h>
#define dim 11
#define rands 10
int main()
{
    int linha,coluna,contador;
    char tabuleiro[dim][dim],navios[dim][dim];
    tabuleiro[0][0]='  ';
    navios[0][0]='  ';
    tabuleiro[0][1]='0',tabuleiro[0][2]='1',tabuleiro[0][3]='2',tabuleiro[0][4]='3',tabuleiro[0][5]='4',tabuleiro[0][6]='5',tabuleiro[0][7]='6',tabuleiro[0][8]='7',tabuleiro[0][9]='8',tabuleiro[0][10]='9';
    tabuleiro[1][0]='0',tabuleiro[2][0]='1',tabuleiro[3][0]='2',tabuleiro[4][0]='3',tabuleiro[5][0]='4',tabuleiro[6][0]='5',tabuleiro[7][0]='6',tabuleiro[8][0]='7',tabuleiro[9][0]='8',tabuleiro[10][0]='9';
    navios[0][1]='0',navios[0][2]='1',navios[0][3]='2',navios[0][4]='3',navios[0][5]='4',navios[0][6]='5',navios[0][7]='6',navios[0][8]='7',navios[0][9]='8',navios[0][10]='9';
    navios[1][0]='0',navios[2][0]='1',navios[3][0]='2',navios[4][0]='3',navios[5][0]='4',navios[6][0]='5',navios[7][0]='6',navios[8][0]='7',navios[9][0]='8',navios[10][0]='9';

    for(int i=1;i<dim;i++)
        for(int j=1;j<dim;j++)
        {
            tabuleiro[i][j]='~';
            navios[i][j]='~';

        }
    mostratabuleiro(tabuleiro);
    posicionaNavios(navios);
    for(int i=0;i<25;i++)
     {
       printf("Digite a linha do tiro:\n");
       scanf("%i",&linha);
       printf("Digite a coluna do tiro:\n");
       scanf("%i",&coluna);
       tiro(tabuleiro,navios,linha,coluna);
       mostratabuleiro(tabuleiro);
     }
     for(int i=0;i<dim;i++)
     {
         for(int j=0;j<dim;j++)
         {
             if(tabuleiro[i][j]=='X')
             {
                 contador=contador+1;
             }
         }
     }
     if(contador==17)
     {
         printf("\nPARABENS VOCE GANHOU!\n");
     }
     else
     {
        printf("\n QUE PENA, ACABOU A MUNICAO ;-;");
     }
}
void posicionaNavios(char navios[][dim])
{
    int i,j;
    srand(time(NULL));
    i=1+(rand()%rands);
    j=1+(rand()%rands);
    for(int k=0;k<4;k++)
    {
        navios[i][j]='W';
        i=i+1;
    }
    i=1+(rand()%rands);
    j=1+(rand()%rands);
    for(int k=0;k<3;k++)
    {
        navios[i][j]='W';
        i=i+1;
    }
    i=1+(rand()%rands);
    j=1+(rand()%rands);
    for(int k=0;k<3;k++)
    {
        navios[i][j]='W';
        i=i+1;
    }
    i=1+(rand()%rands);
    j=1+(rand()%rands);
    for(int k=0;k<2;k++)
    {
        navios[i][j]='W';
        i=i+1;
    }
    i=1+(rand()%rands);
    j=1+(rand()%rands);
    for(int k=0;k<2;k++)
    {
        navios[i][j]='W';
        i=i+1;
    }
    i=1+(rand()%rands);
    j=1+(rand()%rands);
    navios[i][j]='W';
    i=1+(rand()%rands);
    j=1+(rand()%rands);
    navios[i][j]='W';
    i=1+(rand()%rands);
    j=1+(rand()%rands);
    navios[i][j]='W';
    i=1+(rand()%rands);
    j=1+(rand()%rands);
    navios[i][j]='W';
    i=1+(rand()%rands);
    j=1+(rand()%rands);
    navios[i][j]='W';
}
//Confere se acertou
void tiro(char tabuleiro[][dim],char navios[][dim],int linha,int coluna)
{
    system("cls");
    if(navios[linha+1][coluna+1]=='W')
    {
    tabuleiro[linha+1][coluna+1]='X';
    }
    else
    {
    tabuleiro[linha+1][coluna+1]='O';
    }
}

//Mostra o tabuleiro
void mostratabuleiro(char tabuleiro[][dim])
{
    for(int i=0;i<dim;i++)
    {
        for(int j=0;j<dim;j++)
        {
            printf("\t%c",tabuleiro[i][j]);
        }
        printf("\n\n\n");
    }

}

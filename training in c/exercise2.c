#include <stdio.h>
#include <stdlib.h>

int main()
{
    float massai, massaf,massai2;
    int tempo,horas,minutos,segundos;
    massaf=0.0;
    tempo=0.0;
    massai=0.0;
    massai2=0.0;
    printf("Digite a massa:\n");
    scanf("%f",&massai);
    fflush(stdin);
    massai2=massai;
    while(massai>0.5)
    {
        massai=massai/2;
        tempo=tempo+50;
    }
    massaf=massai;
    horas=tempo/3600;
    minutos=(tempo%3600)/60;
    segundos=(tempo%3600)%60;
    printf("A massa inicial foi: %.2f gramas\n", massai2);
    printf("A massa final foi: %.2f gramas\n",massaf);
    printf("O tempo gasto foi %d horas, %d minutos e %d segundos",horas,minutos,segundos);
}



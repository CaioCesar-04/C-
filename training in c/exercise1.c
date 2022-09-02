
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valorCompra,valorVenda,menor,entre,maior,lucro,tvalorc,tvalorv,flag;
    float plucro;
    char nome;
    tvalorc=0;
    tvalorv=0;
    valorCompra=0;
    valorVenda=0;
    menor=0;
    entre=0;
    maior=0;
    lucro=0;
    plucro=0.0;
    flag=0;
    while(flag!=1)
    {
        printf("Digite o nome da mercadoria:\n");
        scanf("%c",&nome);
        fflush(stdin);
        printf("Digite o preco de compra:\n");
        scanf("%i",&valorCompra);
        fflush(stdin);
        printf("Digite o preco de venda:\n");
        scanf("%i",&valorVenda);
        fflush(stdin);
        tvalorc=tvalorc+valorCompra;
        tvalorv=tvalorv+valorVenda;
        lucro=lucro+(valorVenda-valorCompra);
        plucro=(valorVenda-valorCompra)/valorCompra;
        if(plucro<0.1)
        {
            menor=menor+1;
        }
        if(plucro>=0.1 && plucro<=0.2)
        {
            entre=entre+1;
        }
        if(plucro>0.2)
        {
            maior=maior+1;
        }
        printf("Digite 0 para continuar e 1 para encerrar");
        scanf("%i",&flag);
    }
    printf("%i mercadoria(s) tiveram lucro menor que 10 porcento\n%i mercadoria(s) tiveram lucro entre 10 e 20 porcento\n%i mercadoria(s) tiveram lucro maior que 20 porcento\n",menor,entre,maior);
    printf("Valor total de compra:R$%i\n",tvalorc);
    printf("Valor total de venda:R$%i\n",tvalorv);
    printf("O lucro total foi R$%i",lucro);
}

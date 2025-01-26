#include<stdio.h>

#define as cidades 100

//estrutura ppara representar as informaçoes de uma cidade 
    typedef struct{
        int codigo;
        char nome;
        int populaçao;
        float area;
        float pib;
        int pontos_turisticos;
    }cidade;

    //funcao para cadastrar as cartas de cidades 
    void cadastrarCartas(Cidade cidades[]),int*quantidades de cidades {printf
    ("quantas cidades deseja cadastrar?(maximo %d):",
    MAX_CIDADES);}
        scanf("%d"qtd);

        if(*qtd_cidades>N_CIDADES){
            printf("Erro:numeros de cidades excede o limite permitido.\n");

            return;
        }
        for(int i =0;i<*qtd_cidades;i++){
            printf("\ncadastro da cidade %d:\n",i+1);

            printf("codigo da cidade:");
            scanf("%d",&cidades[i].codigo);

            printf("nome da cidade:");
            scanf("%[^\n]",cidades[i].nome);//captura a string com espaços

            printf("populacao.");
            scanf("%d",&cidades[i].populacao);

            printf("Area(em km²):");
            scanf("%f",&cidades[i].area);

            printf("")


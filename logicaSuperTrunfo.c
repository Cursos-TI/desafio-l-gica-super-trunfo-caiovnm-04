#include <stdio.h>

struct carta
{
       char estado[20];
       char codigo[15];
       char cidade[50];
       unsigned long int populacao;
       float area;
       float PIB;
       int pontos_turisticos;
       float densidade_popu;
       float PIB_percapita;
       float super_poder;
};

int main()
{

       // declaração das 2 cartas;
       struct carta carta1, carta2;

       // cadastrar carta-1
       printf(">>>> digite os dados da carta 1 <<<<\n");

       printf("estado: \n");
       scanf(" %19[^\n]", carta1.estado);
       getchar();

       printf("codigo: \n");
       scanf(" %14[^\n]", carta1.codigo);

       printf("cidade: \n");
       scanf(" %49[^\n]", carta1.cidade);

       printf("populacao: \n");
       scanf("%lu", &carta1.populacao);

       printf("Área: \n");
       scanf("%f", &carta1.area);

       printf("PIB: \n");
       scanf("%f", &carta1.PIB);

       printf("Pontos Turísticos \n");
       scanf("%d", &carta1.pontos_turisticos);

       carta1.densidade_popu = (float)carta1.populacao / carta1.area;
       carta1.PIB_percapita = carta1.PIB / (float)carta1.populacao;

       // calculo do Super poder carta 1
       carta1.super_poder = (float)carta1.populacao + carta1.area + carta1.PIB +
                            (float)carta1.pontos_turisticos + carta1.densidade_popu + carta1.PIB_percapita;

       //  casdastrar carta-2
       printf(">>>> digite os dados da carta 2 <<<<\n");

       printf("estado: \n");
       scanf(" %19[^\n]", carta2.estado);

       printf("codigo: \n");
       scanf(" %14[^\n]", carta2.codigo);

       printf("cidade: \n");
       scanf(" %49[^\n]", carta2.cidade);

       printf("populacao: \n");
       scanf("%lu", &carta2.populacao);

       printf("Área: \n");
       scanf("%f", &carta2.area);

       printf("PIB: \n");
       scanf("%f", &carta2.PIB);

       printf("Pontos Turísticos \n");
       scanf("%d", &carta2.pontos_turisticos);

       carta2.densidade_popu = (float)carta2.populacao / carta2.area;
       carta2.PIB_percapita = carta2.PIB / (float)carta2.populacao;

       // calculo do Super poder carta 2
       carta2.super_poder = (float)carta2.populacao + carta2.area + carta2.PIB +
                            (float)carta2.pontos_turisticos + carta2.densidade_popu + carta2.PIB_percapita;

       // dados cadastrados da carta-1
       printf("\n==== dados da carta 01 ====\n");

       printf("\nestado: %s\n", carta1.estado);
       printf("codigo: %s\n", carta1.codigo);
       printf("cidade: %s\n", carta1.cidade);
       printf("populacao: %lu\n", carta1.populacao);
       printf("Área: %.2f\n", carta1.area);
       printf("PIB: %.2f\n", carta1.PIB);
       printf("pontos turisticos: %d\n", carta1.pontos_turisticos);
       printf("Densidade Populacional: %.2f\n", carta1.densidade_popu);
       printf("PIB per Capita: %.2f\n", carta1.PIB_percapita);
       printf("Super Poder : %2.f\n", carta1.super_poder);

       // dados cadastrados da carta-2
       printf("\n==== dados da carta 02 ====\n");

       printf("estado: %s\n", carta2.estado);
       printf("codigo: %s\n", carta2.codigo);
       printf("cidade: %s\n", carta2.cidade);
       printf("populacao: %lu\n", carta2.populacao);
       printf("Área: %.2f\n", carta2.area);
       printf("PIB: %.2f\n", carta2.PIB);
       printf("pontos turisticos: %d\n", carta2.pontos_turisticos);
       printf("Densidade Populacional: %.2f\n", carta2.densidade_popu);
       printf("PIB per Capita: %.2f\n", carta2.PIB_percapita);
       printf("Super Poder : %.2f\n", carta2.super_poder);

       //==== COMPARAÇÃO DAS CARTAS (ATRIBUTO) ====
       printf("\n==== Comparação de Atributo ====\n");

       printf("### Escolha o Atributo ###\n");
       printf("1. população\n");
       printf("2. Área\n");
       printf("3. PIB\n");
       printf("4. Pontos turísticos\n");
       printf("5. Densidade Demográfica\n");

           int opcao;
       printf("digite sua opção: \n");
       scanf("%d", &opcao);

       switch (opcao)
       {
       case 1:
              printf("(Nome do Estado 1: %s) - (Nome do Estado 2: %s)\n", carta1.estado, carta2.estado);

              if (carta1.populacao > carta2.populacao)
              {
                     printf("Comparação das Cartas: populacão\n");
                     printf("Carta 1 Venceu\n");
                     printf("Comparação das Cartas: (Carta 1: %lu) - (Carta 2: %lu)\n", carta1.populacao, carta2.populacao);
              }
              else if (carta1.populacao < carta2.populacao)
              {
                     printf("Comparação das Cartas: população\n");
                     printf("Carta 2 Venceu\n");
                     printf("Comparação das Cartas: (Carta 1: %lu) - (Carta 2: %lu)\n", carta1.populacao, carta2.populacao);
              }
              else
              {
                     printf("Impate (Carta 1: %lu) - (Carta 2: %lu)\n", carta1.populacao, carta2.populacao);
              }
              break;

       case 2:
              if (carta1.area > carta2.area)
              {
                     printf("Comparação das Cartas: Área\n");
                     printf("Carta 1 Venceu\n");
                     printf("Comparação das Cartas: (Carta 1: %.2f) - (Carta 2: %.2f)\n", carta1.area, carta2.area);
              }
              else if (carta1.area < carta2.area)
              {
                     printf("Comparação das Cartas: Área\n");
                     printf("Carta 2 Venceu\n");
                     printf("Comparação das Cartas: (Carta 1: %.2f) - (Carta 2: %.2f)\n", carta1.area, carta2.area);
              }
              else
              {
                     printf("Impate (Carta 1: %.2f) - (Carta 2: %.2f)\n", carta1.area, carta2.area);
              }
              break;

       case 3:
              if (carta1.PIB > carta2.PIB)
              {
                     printf("Comparação das Cartas: Área\n");
                     printf("Carta 1 Venceu\n");
                     printf("Comparação das Cartas: (Carta 1: %.2f) - (Carta 2: %2.f)\n", carta1.PIB, carta2.PIB);
              }
              else if (carta1.PIB < carta2.PIB)
              {
                     printf("Comparação das Cartas: Área\n");
                     printf("Carta 2 Venceu\n");
                     printf("Comparação das Cartas: (Carta 1: %.2f) - (Carta 2: %.2f)\n", carta1.PIB, carta2.PIB);
              }
              else
              {
                     printf("Impate (Carta 1: %.2f) - (Carta 2: %.2f)\n", carta1.PIB, carta2.PIB);
              }
              break;

       case 4:
              if (carta1.pontos_turisticos > carta2.pontos_turisticos)
              {
                     printf("Comparação das Cartas: Pontos Turisticos\n");
                     printf("Carta 1 Venceu\n");
                     printf("Comparação das Cartas: (Carta 1: %d) - (Carta 2: %d)\n", carta1.pontos_turisticos, carta2.pontos_turisticos);
              }
              else if (carta1.pontos_turisticos < carta2.pontos_turisticos)
              {
                     printf("Comparação das Cartas: Pontos Turisticos\n");
                     printf("Carta 2 Venceu\n");
                     printf("Comparação das Cartas: (Carta 1: %d) - (Carta 2: %d)\n", carta1.pontos_turisticos, carta2.pontos_turisticos);
              }
              else
              {
                     printf("Impate (Carta 1: %d) - (Carta 2: %d)\n", carta1.pontos_turisticos, carta2.pontos_turisticos);
              }
              break;

       case 5:
              if (carta1.densidade_popu < carta2.densidade_popu)
              {
                     printf("Comparação das Cartas: Densidade Populacional (Menor vence!)\n");
                     printf("Carta 1 Venceu\n");
                     printf("Comparação das Cartas: (Carta 1: %.2f) - (Carta 2: %.2f)\n", carta1.densidade_popu, carta2.densidade_popu);
              }
              else if (carta1.densidade_popu > carta2.densidade_popu)
              {
                     printf("Comparação das Cartas: Densidade Populacional (Menor vence!)\n");
                     printf("Carta 2 Venceu\n");
                     printf("Comparação das Cartas: (Carta 1: %.2f) - (Carta 2: %.2f)\n", carta1.densidade_popu, carta2.densidade_popu);
              }
              else
              {
                     printf("Impate (Carta 1: %.2f) - (Carta 2: %.2f)\n", carta1.densidade_popu, carta2.densidade_popu);
              }
              break;

       default:
              printf("Opção Incorreta!");
              break;
       }

       return 0;
}

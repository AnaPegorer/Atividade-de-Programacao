#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

const int mult;
int vet[];
int num=0;
void preenchevetor();
void mostravet();
void mostravetinverso();
void multiplo();
void ordenavet();

preenchevetor()
{
    int i;
    printf("Informe o tamanho do Vetor:\n");
    scanf("%i", &num);

    for(i=0;i<num;i++)
        {
            printf("Insira um valor:\n");
            scanf("%i", &vet[i]);
        }
        return 0;
}

mostravet()
{
    int i;
    for(i=0;i<num;i++)
        {
            printf("%i \n", vet[i]);

        }
        return 0;
}

mostravetinverso()
{
    int i;
    for(i=num-1;i>=0;i--)
        {
            printf("%i \n",vet[i]);

        }

    return 0;
}

multiplo(int mult)
{
     int i;
     for(i=0;i<num;i++)
        {
            if(vet[i]%mult==0)
            printf("%i \n", vet[i]);


        }

    return 0;
}

ordenavet()
{
    int i, j, min, aux;
    for(i=0 ; i<num-1; i++)

		{
			min=i;
		for(j=(i+1); j<num; j++)
			{
			if(vet[j]<vet[min])
			min=j;
			}
		if(vet[i] != vet[min] )
			{
				aux=vet[i];
				vet[i] = vet[min];
				vet[min] = aux;
			}
		}

mostravet();
       return 0;
}




int main()
{

    setlocale(LC_ALL,"Portuguese");
    int opcao;


    preenchevetor();

    do
    {
      printf("|-------------------------Menu------------------------|\n");
      printf("| 1 - Preencher Vetor                                 |\n");
      printf("| 2 - Mostrar Vetor                                   |\n");
      printf("| 3 - Mostrar vetor na ordem inversa                  |\n");
      printf("| 4 - Mostrar valores multiplos de 2                  |\n");
      printf("| 5 - Mostrar valores multiplos de 5                  |\n");
      printf("| 6 - Ordenar Vetor                                   |\n");
      printf("| 7 - Sair                                            |\n");
      printf("|-----------------------------------------------------|\n");
      printf(" Insira uma opção:   ");
      scanf("%d", &opcao);
      fflush(stdin);


     switch(opcao)
     {
           case 1: preenchevetor(); break;

           case 2: mostravet(); break;

           case 3: mostravetinverso(); break;

           case 4: multiplo(2); break;

           case 5: multiplo(5); break;

           case 6: ordenavet(); break;

           case 7: break;

           default: printf("Opcao invalida\n");
     }

    }

    while(opcao!=7);

    return 0;
}

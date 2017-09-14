#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    double Ppm, Temperatura, Mg_MetroCubico, Massa_Molecular;
    int Escolha=0, Recomecar=0;
    //Apresentacao do programa
    printf("#############BEP - ENGENHARIA DE PRODUCAO (3 SEMESTRE)#############\n");

    printf("####################CALCULADORA DE COMVERSSAO######################\n\n");
    do{

      do{
        printf("\n");
        printf("Converter\n");
        printf("(1) ppm para Mg/m\n");
        printf("(2) Mg/m para ppm\n");
        printf("Escolha uma Opcao: ");
        scanf("%d", &Escolha);   //Escolhe uma opcao para comecar a calcular

        if((Escolha != 1) && (Escolha != 2)){
            printf("Numero incorreto !!\n");
            printf("Por Favor escolha (1) ou (2)!!\n\n");
        }

    }while((Escolha != 1) && (Escolha != 2));
         //apos ecolher a opcao o programa vai pedir alguns dados
        switch(Escolha){

            case 1:     printf("\n");
                        printf("ppm para Mg/Metrocubico\n");
                        printf("Informe a Temperatura: ");
                        scanf("%lf", &Temperatura);
                        printf("Informe a Massa Molecular: ");
                        scanf("%lf", &Massa_Molecular);
                        printf("Informe o ppm: ");
                        scanf("%lf", &Ppm);

                        Mg_MetroCubico = (Ppm * Massa_Molecular) / Temperatura;

                        printf("Mg/m: %f\n", Mg_MetroCubico);
                        break;

            case 2:     printf("\n");
                        printf("Mg/m para ppm\n");
                        printf("Informe a Temperatura: ");
                        scanf("%lf", &Temperatura);
                        printf("Informe a Massa Molecular: ");
                        scanf("%lf", &Massa_Molecular);
                        printf("Informe o Mg/m: ");
                        scanf("%lf", &Mg_MetroCubico);

                        Ppm = (Mg_MetroCubico * Temperatura) / Massa_Molecular;

                        printf("Ppm: %f\n", Ppm);
                        break;
        }
    //Programa pergunta se quer continuar
    volta:
    printf("\n");
    printf("Deja Fazer um Novo Calculo?\n");
    printf("(1)Sim!\n(2)Nao!\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &Recomecar);

    if((Recomecar != 1) && (Recomecar != 2)){
            printf("Numero incorreto !!\n");
            printf("Por Favor escolha (1) ou (2)!!\n\n");
            goto volta;
        }


    }while(Recomecar == 1);

    printf("OBRIGADO!!!!!!!\n");
    system("pause");
}


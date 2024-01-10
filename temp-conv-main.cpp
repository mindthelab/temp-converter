#include <iostream>
#include <string>

//inclusão do arquivo das variaveis
#include "func.h"


//simplificação do uso dos comandos não será feita por boas praticas
//using namespace std;

//inicio da função main
int main(){

    //limpeza de console inicial
    system("cls");

    //declaração de variaveis
    std::string escolha = "";
    bool repeat = true;
    float temp;
    float tempf;
    float tempc;
    float tempk;

    //começo do laço de repetição de operação
    while (repeat == true){
        tempf = 0;
        tempc = 0;
        tempk = 0;
        temp = 0;

        //prints de inicialização
        std::cout<<"Conversor de medidas de temperatura v0.2\n";
        std::cout<<"-h > Comandos\n";

        std::cin>>escolha;
        system("cls");
        
        //opção celsius
        if (escolha == "-c"){
            std::cout<<"Celsius para Fahrenheit e Kelvin\n";
            std::cout<<"Temperatura em Celsius: ";
            std::cin>>temp;

            //calculo celsius > fahrenheit
            tempf = ctof(temp);
            std::cout<<"Fahrenheit > "<<tempf<<"\n";

            //calculo celsius > kelvin
            tempk = ctok(temp);
            std::cout<<"Kelvin > "<<tempk<<"\n";

            system("pause");
            system("cls");

        }
        
        //opção fahrenheit
        if (escolha == "-f"){
            std::cout<<"Fahrenheit para Celsius e Kelvin\n";
            std::cout<<"Temperatura em Fahrenheit: ";
            std::cin>>temp;

            //calculo fahrenheit > celsius
            tempc = ftoc(temp);
            std::cout<<"Celsius > "<<tempc<<"\n";
            
            //calculo fahrenheit > kelvin
            tempk = ftok(temp);
            std::cout<<"Kelvin > "<<tempk<<"\n";

            system("pause");
            system("cls");

        }

        //opção kelvin
        if (escolha == "-k"){
            std::cout<<"Kelvin para Celsius e Fahrenheit\n";
            std::cout<<"Temperatura em Kelvin: ";
            std::cin>>temp;

            //calculo kelvin > celsius
            tempc = ktoc(temp);
            std::cout<<"Celsius > "<<tempc<<"\n";

            //calculo kelvin > fahrenheit
            tempf = ktof(temp);
            std::cout<<"Fahrenheit > "<<tempf<<"\n";

            system("pause");
            system("cls");

        }

        //opção sair
        if (escolha == "-e"){
            std::cout<<"Obrigado pela chance!\n";
            std::cout<<"Feito por mindthelab\n";
            system("pause");
            repeat = false;
        }

        //ajuda de comandos
        if (escolha == "-h"){
            std::cout<<"-c > Celsius para Fahrenheit e Kelvin\n";
            std::cout<<"-f > Fahrenheit para Celsius e Kelvin\n";
            std::cout<<"-k > Kelvin para Celsius e Fahrenheit\n";
            std::cout<<"-e > Encerrar programa\n";
            std::cout<<"-h > Comandos\n";
            std::cout<<"\n";

            system("pause");
            system("cls");
        }

    }
    return(0);
    
}

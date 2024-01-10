#include <iostream>
#include <string>

//simplificação do uso dos comandos da biblioteca iostream
using namespace std;

//inicio da função main
int main(){

    //limpeza de console inicial
    system("cls");

    //declaração de variaveis
    string escolha = "";
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
        cout<<"Conversor de medidas de temperatura v0.1\n";
        cout<<"-h > Comandos\n";

        cin>>escolha;
        system("cls");
        
        //opção celsius
        if (escolha == "-c"){
            cout<<"Celsius para Fahrenheit e Kelvin\n";
            cout<<"Temperatura em Celsius: ";
            cin>>temp;

            //calculo celsius > fahrenheit
            tempf = (temp * 9 / 5) + 32;
            cout<<"Fahrenheit > "<<tempf<<"\n";

            //calculo celsius > kelvin
            tempk = (temp + 273.15);
            cout<<"Kelvin > "<<tempk<<"\n";

            system("pause");
            system("cls");

        }
        
        //opção fahrenheit
        if (escolha == "-f"){
            cout<<"Fahrenheit para Celsius e Kelvin\n";
            cout<<"Temperatura em Fahrenheit: ";
            cin>>temp;

            //calculo fahrenheit > celsius
            tempc = (temp - 32) * 5 / 9;
            cout<<"Celsius > "<<tempc<<"\n";
            
            //calculo fahrenheit > kelvin
            tempk = (temp - 32) * 5 / 9 + 273.15;
            cout<<"Kelvin > "<<tempk<<"\n";

            system("pause");
            system("cls");

        }

        //opção kelvin
        if (escolha == "-k"){
            cout<<"Kelvin para Celsius e Fahrenheit\n";
            cout<<"Temperatura em Kelvin: ";
            cin>>temp;

            //calculo kelvin > celsius
            tempc = (temp - 273.15);
            cout<<"Celsius > "<<tempc<<"\n";

            //calculo kelvin > fahrenheit
            tempf = (temp - 273.15) * 9 / 5 + 32;
            cout<<"Fahrenheit > "<<tempf<<"\n";

            system("pause");
            system("cls");

        }

        //opção sair
        if (escolha == "-e"){
            cout<<"Obrigado pela chance!\n";
            cout<<"Feito por mindthelab\n";
            system("pause");
            repeat = false;
        }

        //ajuda de comandos
        if (escolha == "-h"){
            cout<<"-c > Celsius para Fahrenheit e Kelvin\n";
            cout<<"-f > Fahrenheit para Celsius e Kelvin\n";
            cout<<"-k > Kelvin para Celsius e Fahrenheit\n";
            cout<<"-e > Encerrar programa\n";
            cout<<"-h > Comandos\n";
            cout<<"\n";

            system("pause");
            system("cls");
        }

    }
    return(0);
    
}

#include<iostream>
#include<random>
using namespace std; 

//Var
int cima = 0, lado = 0, pontos = 0;
int valorAnterior[2] = {0, 0};
int posicaoMoeda[2];
string arr[20][20];
char comando;

//Retorno de Variaveis da Moeda
int retornoPosicao(){
    return rand() % 19;
}
main(){  
    //Campo inicial:
	for(int i=0;i<20;i++)
	{
		for(int j=0;j<20;j++)
		{
            arr[i][j] = "#";
			cout<<"   "<<arr[i][j];
		}
        if(i == 10){
            cout << "       Pontos: 0";
        }
		cout<<endl;
        cout<<endl;
	}
    cout << endl << "        Controles : [w] [a] [s] [d] -> ";

    posicaoMoeda[0] = retornoPosicao();
    posicaoMoeda[1] = retornoPosicao();

    while(comando != '0' && pontos < 20){

        //controles
        cin >> comando;
        if(comando == 'w' && cima >= 0){
            cima++;
        }
        if(comando == 's' && cima > 0){
            cima--;
        }
        if(comando == 'd' && lado >= 0){
            lado++;
        }
        if(comando == 'a' && lado > 0){
            lado--;
        }

        //Localização do player
        arr[cima][lado] = "O";
        arr[valorAnterior[0]][valorAnterior[1]] = "#";

        //Pontuar
        if((cima == posicaoMoeda[0]) && (lado == posicaoMoeda[1])){
            pontos++;
            posicaoMoeda[0] = retornoPosicao();
            posicaoMoeda[1] = retornoPosicao();
        }

        //Moeda
        arr[posicaoMoeda[0]][posicaoMoeda[1]] = "C";

        //Exposição do campo
	    for(int i = 19; i > 0 ; i--)
	    {
		    for(int j = 0 ; j < 20 ; j++)
		    {
	    		cout<<"   "<<arr[i][j];
    		}
            if(i == 10){
                cout << "       Pontos: " << pontos;
            }
		    cout<<endl;
            cout<<endl;
        }
        valorAnterior[0] = cima;
        valorAnterior[1] = lado;
    }
}
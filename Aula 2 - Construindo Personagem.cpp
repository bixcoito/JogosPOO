//Continuação do Primeiro Código em C++ [Aula 1] - POO Aulas
#include <iostream>
#include <string> 
using namespace std;

int main()
{	//Declarando os 2 Jogadores e sua Respectiva Vida
	string jog1, jog2;
	int vida1 = 20, vida2 = 20;

	//Digitando e Salvando Nome do(a) Jogador(a) na Váriavel Corespondente
	cout << "Digite o nome do jogador 1:" << endl;
	cin >> jog1;

	cout << "Digite o nome do jogador 2:" << endl;
	cin >> jog2;
	
	//Imprimindo na tela o Personagem e sua Vida
	cout << " o                                 o" << endl;
	cout << ".T./                             \\.T." << endl;
	cout << " ^                                 ^" << endl;
	cout << jog1 << "                              " << jog2 << endl;
	cout << "vida:" << vida1 << "                        " << "vida: " << vida2 << endl;

	int dado6;

	srand(1234);
	//gera um numero aleatorio entre 1 e 6
	dado6 = rand() % 8 + 1;
	//Causando dano igual o Valor Gerado no dDado
	vida1 = vida1 - dado6;
	
	//Mesmo Procedimento para Jogador 2
	dado6 = rand() % 8 + 1;
	vida2 = vida2 - dado6;

	//Imprimindo o Valor da Vida depois do Dano
	cout << "vida:" << vida1 << "                   " << "vida: " << vida2 << endl;



	return 0;
}

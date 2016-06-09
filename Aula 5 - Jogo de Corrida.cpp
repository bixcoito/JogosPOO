//Tema 3 - Jogo de Corrida
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void imprimir_espacos(int total);

int main (){
	//Quantidade total de espaços
	int total_espacos = 50;
	string car1, car2;
			
	//Salvando o Nome dos(as) Jogadores(as) na Variável
	cout << "Digite o nome do 1º Jogador" << endl;
	cin >> car1;
	
	cout << "Digite o nome do 2º Jogador" << endl;
	cin >> car2;
	
	//Variáveis Correspondente ao Espaço que irá ser Imprimido para o Car1 e Car2
	int primeiro_dado=0, segundo_dado=0;
	
		//Laço 'Enquanto'
		while (primeiro_dado< total_espacos && segundo_dado < total_espacos){
			cout << "Jogo de Corrida:" << endl;
			cout << "                                          CHEGADA" << endl; 
			
			
			//Gerando Número Aleatório
			srand((int) time (0));
			primeiro_dado = rand() % 3 + 1 + primeiro_dado;
	
			cout << car1 << endl;
			//Tranformando num carrinho
			imprimir_espacos(primeiro_dado);
			cout << "  __  " << endl;
			imprimir_espacos(primeiro_dado);
			cout << " -o---o" << endl;
			
			//Gerando Número Aleatório
			segundo_dado = rand() % 3 + 1 + segundo_dado;
		
			//2º Carrinho
			cout << car2 << endl; 
			imprimir_espacos(segundo_dado);
			cout << "  __  " << endl;
			imprimir_espacos(segundo_dado);
			cout << " -o---o" << endl;
		
			system("cls"); //Limpa a Tela
			
		}
		//Coferindo que Ganhou o Jogo
		if (primeiro_dado > segundo_dado){
			cout << "O (A) Jogador(a) " << car1 << " Venceu! Parabéns!!!"<< endl;
		}
		else if (segundo_dado > primeiro_dado){
			cout << "O (A) Jogador(a) " << car2 << " Venceu! Parabéns!!!" << endl;
		}
		else cout << "Os dois Carros Empataram!" << endl;	
	
	return 0;
}
//Função mostra espaços em Branco na Tela, Fazendo o Carrinho Andar
void imprimir_espacos(int total){
		
	//Imprime Espaços	
	for (int quantidade_atual=0; quantidade_atual < total; quantidade_atual++){
			
		cout << " " ;	
	}
}

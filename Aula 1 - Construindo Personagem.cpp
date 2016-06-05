//Meu Primeiro CÛdigo em c++
#include <iostream>
#include <string> 
using namespace std;

int main(int argc, char* args[])
{	//Declarando as Vari√°veis
	char inicial;
	string nome;
	string classe;
	
	//Salva a Linha como Nome do Personagem, por Causa do Getline
	cout << "Digite o Nome do Personagem:" << endl;
	getline(cin, nome);
	inicial = nome[0];
	cout << "digite a classe do personagem:" << endl;
	getline(cin, classe);
	
	//Imprime na Tela o nome do Personagem Juntamente com a Classe escolhida pelo Jogador(a)
	cout << "personagem " << inicial << ". " << nome.substr( nome.find(" ") ) << endl;
	cout << "classe: " << classe << endl; 
	
	//Declarando Poderes do Personagem
	int ataque = 10;
	int defesa = 8, magica = 2, def_magica = 4;
	
	int vida = 65, vida_maxima = 110;
	double porc_vida = (vida * 100) / vida_maxima ; //Calculando Porcentagem do Personagem
	
	//Imprindo o Status do Personagem na Tela
	cout << "Status " << endl;
	cout << "Ateque : " << ataque << " Defesa : " << defesa << endl;
	cout << "Magica : " << ataque << " Def. Magica : " << def_magica << endl;
	//O Comendo 'Precision' mostra Quantas Casas Decimais Pusermos
	cout.precision (2); //Mostra Apenas 2 Casas Decimais
	cout << "Vida : " << vida << " / " << vida_maxima << " P. Vida " << fixed << porc_vida << "%" << endl;

}

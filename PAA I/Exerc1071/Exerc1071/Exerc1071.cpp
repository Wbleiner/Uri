// Exerc1071.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>

using namespace std;
int somaImpar(int x, int y)
{
	if (x - y >= 1)
	{
		if (x % 2 != 0)
		{
			return somaImpar(x-2, y ) + x;
		}
		return somaImpar(x - 1, y) + (x -1);
	}
	return 0;
}
int main()
{
	int x, y, soma;
	cin >> x;
	cin >> y;
	if (x > y)
	{
		cout << somaImpar(x, y) << endl;
	}
	else
	{
		cout << somaImpar(y, x) << endl;
	}
}
// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln

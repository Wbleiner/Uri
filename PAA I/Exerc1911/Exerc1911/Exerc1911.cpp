// Exerc1911.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
	map<string, string> alunos;
	string assinatura, nome;
	int n, m, count=0, k=0;
	cin >> n;
	while (n)
	{
		for (int i = 0; i < n; i++)
		{
			cin >> nome >> assinatura;
			alunos[nome] = assinatura;
		}
		cin>>m;
		for (int i = 0; i < m; i++)
		{
			cin >> nome >> assinatura;
			string aux = alunos[nome];
			for (int j = 0; j < aux.size(); j++)
			{
				if (aux[j] != assinatura[j])
				{
					k++;
				}
			}
			if (k > 1)
			{
				count++;
			}
			k = 0;
		}
		cout << count << endl;
		count = 0;
		cin >> n;
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

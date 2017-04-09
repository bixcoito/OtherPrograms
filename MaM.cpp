#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <stdlib.h>


using namespace std;

void imprimir();

int main(){
	int numero = 0;
	int linha1 = 0, coluna1 = 0, linha2 = 0, coluna2 = 0;
	int resut_lc;
	int matriz1 [50] [50];
	int matriz2 [50] [50];
	int matriz3 [50] [50];
	//Semente do números aleatorios
	srand((int) time(0));
	int opcao;
	bool enquanto = false;
	
		
		imprimir();
		system("pause");
		system("cls");
	
	while(enquanto == false){
		
		cout << "O usuario deseja multiplicar: " << endl;
		cout << "1 - Numero x Matriz" << endl;
		cout << "2 - Matriz x Matriz" << endl;
		cout << "3 - Sair" << endl;
		cin >> opcao;
		system("cls");
		
		switch(opcao){
			case 1:
				cout << "Digite qual a ordem da matriz: " << endl;
				cout << "Linha: " << endl;
				cin >> linha1;
				cout << "Coluna: " << endl;
				cin >> coluna1;
				cout << "Digite qual valor quer multiplicar a matriz: " << endl;
				cin >> numero;
				system("cls");
				
				cout << "Escolha entre digitar os valores da matriz ou o preenchimento com numeros aleatorios: " << endl;
				cout << "1 - Digitar" << endl;
				cout << "2 - Preenchimento Automatico" << endl;
				cin >> opcao;
				system("cls");
				switch(opcao){
					case 1:
						//Preenchimento da matriz pelo usuario
						for(int l = 0; l < linha1; l++){
							for(int c = 0; c < coluna1; c++){
								cout << l + 1 << " linha " << c + 1 << " coluna" << endl;
								cin >> matriz1 [l] [c];
							}
						}
						system("pause");
						system("cls");
						//Imprimendo na tela o resultado da Multiplicacao
						for(int l = 0; l < linha1; l++){
							for(int c = 0; c < coluna1; c++){
								cout << matriz1 [l] [c] * numero << " | ";
							}
							cout << endl;
						}
						system("pause");
						break;
					case 2:
						//Preenchendo a matriz1 com numeros Aleatorios
						for(int l = 0; l < linha1; l++){
							for(int c = 0; c < coluna1; c++){
								matriz1 [l] [c] = rand() % 10 + 0;
							}
						}
						system("cls");
						cout << "O usuario deseja: " << endl;
						cout << "1 - Ver a matiz gerada aleatoriamente" << endl;
						cout << "2 - Continuar com a multiplicação" << endl;
						cin >> opcao;
						system("cls");
						//Ver se o usario quer ver a matriz gerada aleatoriamente
						switch(opcao){
							case 1:
								//Imprimindo a matriz de numeros aleatorios na tela
								for(int l = 0; l < linha1; l++){
									for(int c = 0; c < coluna1; c++){
										cout << matriz1 [l] [c] << " | ";
									}
									cout << endl;
								}
								system("pause");
								system("cls");
								
								//Imprimendo na tela o resultado da Multiplicacao
								for(int l = 0; l < linha1; l++){
									for(int c = 0; c < coluna1; c++){
										cout << matriz1 [l] [c] * numero << " | ";
									}
									cout << endl;
								}
								system("pause");
								system("cls");
								break;
							case 2:
								//Imprimendo na tela o resultado da Multiplicacao
								for(int l = 0; l < linha1; l++){
									for(int c = 0; c < coluna1; c++){
										cout << matriz1 [l] [c] * numero << " " << endl;
									}
									cout << endl;
								}
								system("pause");
								system("cls");
							default:
								cout << "Alternativa Invalida " << endl;	
						}					
						break;
					default:
						cout << "Alternativa Invalida " << endl;
				}
				system("cls");
				break;
			case 2:
				cout << "OBS: a matrizes so poderam ser multiplicadas se o numero de colunas da 1º (primeira) matriz for igual ao numero de linhas da 2º (segunda) matriz" << endl;
				cout << endl;
				system("pause");
				system("cls");
					
				//Pede para digitar a ordem das duas matrizes que iao ser multiplicadasno programa
				cout << "Digite qual a ordem da primeira matriz: " << endl;
				cout << "Linha: " << endl;
				cin >> linha1;
				cout << "Coluna: " << endl;
				cin >> coluna1;
				cout << "Digite qual a ordem da segunda matriz: " << endl;
				cout << "Linha: " << endl;
				cin >> linha2;
				cout << "Coluna: " << endl;
				cin >> coluna2;
				system("cls");
				
				//Testa a condicao: o numero de colunas da primeira matriz igual ao numero de linhas da segunda matriz
				if(coluna1 == linha2){
	
	
					//Escolhe o preenchimento (digitada ou automatico) das matrizes 1 e 2
					cout << "Escolha entre digitar os valores da matriz ou o preenchimento com numeros aleatorios: " << endl;
					cout << "1 - Digitar" << endl;
					cout << "2 - Preenchimento Automatico" << endl;
					cin >> opcao;
					system("cls");
					
					
					
					switch(opcao){
						case 1:
							//Preenchimento da matriz pelo usuario
							//Da primeira matriz
							cout << "1º Matriz " << endl;
							for(int l = 0; l < linha1; l++){
								for(int c = 0; c < coluna1; c++){
									cout << l + 1 << " linha " << c + 1 << " coluna" << endl;
									cin >> matriz1 [l] [c];
								}						
							}
							system("cls");
							//Da segunda matriz
							cout << "2º Matriz " << endl;
							for(int l = 0; l < linha2; l++){
								for(int c = 0; c < coluna2; c++){
									cout << l + 1 << " linha " << c + 1 << " coluna" << endl;
									cin >> matriz2 [l] [c];
								}						
							}
							break;
						case 2:
							//Preenchendo da primeira matriz1 com numeros Aleatorios
							for(int l = 0; l < linha1; l++){
								for(int c = 0; c < coluna1; c++){
									matriz1 [l] [c] = rand() % 10 + 0;
								}
							}
							
							//Preenchendo a segunda matriz2 com numeros aleatorios
							for(int l = 0; l < linha2; l++){
								for(int c = 0; c < coluna2; c++){
									matriz2 [l] [c] = rand() % 10 + 0;
								}
							}
							break;
						default:
							cout << "Alternativa Invalida " << endl;
					}
					resut_lc = linha1 * coluna1 + linha2 * coluna2;
					
					//Fazendo a multiplicacao das duas matrizes e salvando na matriz3
					for(int percorre = 0; percorre < linha1; percorre++){
						for(int l = 0; l < coluna2; l++){
		            		for(int c = 0; c < coluna1; c++){
		            			//Multiplica a linha pela coluna e salva-os na matriz3
			                	matriz3 [percorre][l] += matriz1 [percorre][c] * matriz2[c][l];
							}
						}
					}
					system("cls");
					system("pause");
					//Imprime o resultado da multiplicação das matrizes (matriz1 x matriz2) na tela
					for(int l = 0; l < linha1; l++){
						for(int c = 0; c < coluna2; c++){
					    	cout << matriz3 [l][c] << " | ";
					 	}
					   cout << endl;
					}
					system("pause");
					system("cls");
				}
				//Caso a condicao do if nao seja verdadeira ira imprimir
				else{
					cout << "ERRO: O numero de colunas da 1º matriz nao esta igual ao numero de linhas da 2º matriz" << endl;
					system("pause");
					system("cls");
				}
				break;
			//Para sair do laço while
			case 3:
				enquanto = true;
				break;
			//Caso aperte qualquer outra tecla ira imprimir
			default:
				cout << "Alternativa Invalida " << endl;
				break;
		}
	}
}
void imprimir(){
	cout << "		------------- -- --------" << endl;
	cout << "	    	MULTIPLICACAO DE MATRIZES" << endl;
	cout << "	    	------------- -- --------" << endl;
	
	cout << "   _____      _            _           _                 " << endl;
	cout << " / ____|    | |          | |         | |                " << endl;
	cout << "| |     __ _| | ___ _   _| | __ _  __| | ___  _ __ __ _ " << endl;
	cout << "| |    / _` | |/ __| | | | |/ _` |/ _` |/ _ \| '__/ _` |" << endl;
	cout << "| |___| (_| | | (__| |_| | | (_| | (_| | (_) | | | (_| |" << endl;
	cout << " \_____\__,_|_|\___|\__,_|_|\__,_|\__,_|\___/|_|  \__,_| \\__,_|" << endl;
	cout << "													by Joao, Marcelo, Mychellangello, Tailson" << endl;
	cout << "														       	    PJD 2M" << endl;
}

#ifndef Level_h
#define Level_h
#include <vector>
#include <string>
using namespace std;
#include <ctime>

class Level{

	private:

		int linhas; //<! quantidade de linhas do level
		int colunas;//<! quantidade de colunas do level
		int comida;	//<! quantas comidas serao geradas nesse nivel
		std::vector<std::string> maze_; //<! o labirinto do nivel
		pair<int, int> snakePos; //<! posiçao onde a cobra sera gerada
		pair<int, int> foodPos; //<! posicao onde a comida sera gerada

	public:
	 	/*! @brief construtor 
            	@param alt a quantidade de linhas do lvl
	   	@param larg a quantidade de colunas do lvl
		@param com a quantidade de comidas do lvl
        	*/
		Level(int alt, int larg, int com, std::vector<std::string> maze);

		/*! @brief Funçao para imprimir o labirinto atual
        	 */
		void mostrarLabirinto();

		/*! @brief Funçao para imprimir a interface com informaçoes do level
         	*/
		void mostrarInterface();
	
		/*! Funçao para gerar uma posição aleatória válida
		@return um par com a posiçao gerada
         	*/
		std::pair<int, int> randomStart();
	
		/*! Funçao para adicionar a cobra na posiçao aleatoria
         	*/
		void adicionaCobra();
	
		/*! Funçao para criar uma posiçao aleatoria para a comida
		@return um par com a posiçao gerada
         	*/
		std::pair<int, int> foodRandomStart();
		
		/*! Funçao para adicionar a comida na posiçao aleatoria
         	*/
		void adicionaComida();

};

#endif


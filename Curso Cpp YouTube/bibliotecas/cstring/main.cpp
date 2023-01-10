#include <iostream>
#include <cstring> //implementa funções para manipulação de strings

using namespace std;

struct{
    char nome[40];
}pessoa1, pessoa2;


int main(int argc, const char** argv) {

    //strcpy(destino, origem) - copia a string de origem no destino
    //strcnpy(destino, origem, valor-inteiro) - copia até um determinado caractere 
    //memcpy() - copia o bloco de memória
    //strcat(destino, origem) - concatena
    //strcmp(string1, string2) - <0: primeira menor; >0: segunda maior; =0: iguais
    //strncmp(string1, string2, valor-inteiro) - verifica se são iguais até uma determinada posição
    //memcmp(string1, string2) - verifica se os blocos de memória são iguais
    //memchr(txt2, pesquisa, strlen(txt2)) - pesquisa pelo parâmetro dentro da string
    //strchr(txt2, parametro_pesquisa)
    //strcspn(txt, chave) - localiza uma chave dentro de uma string
    //strtok(txt, " ,-")
    //strlen(string)

    char texto1[]{"Gustavo Marianelli"};
    char texto2[]{""};

    memcpy(pessoa1.nome, texto1, strlen(texto1)+1);
    memcpy(pessoa2.nome, pessoa1.nome, strlen(pessoa1.nome)+1);
    cout << pessoa1.nome << endl;
    cout << pessoa2.nome << endl;
    
    return 0;
}
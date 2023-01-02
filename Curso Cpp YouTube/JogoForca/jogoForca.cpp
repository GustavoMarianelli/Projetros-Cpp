#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

void iniciarVetorLetrasRepetidas(char * vetorLetras, int tam){
    for(int i = 0; i<tam; i++){
        vetorLetras[i] = '\n';
    }
}

void informarPalavra(char * palavra){
    cout << "Informe a palavra secreta: ";
    cin >> palavra;
}

char informarLetra(){
    char letra;
    cout << "Informe a letra: ";
    cin >> letra;
    return letra; 
}


int validarLetra(char letra, char * letrasInformadas){
    int tam = strlen(letrasInformadas);
    
    for(int i = 0; i < tam; i++){
        if(letrasInformadas[i] == letra)
            return 0;
    }

    return 1;
}

int verificarNaPalavra(char * palavra, char letra){
    int tam = strlen(palavra), contador = 0;
   
    for(int i = 0; i < tam; i++){
        if(palavra[i] == letra){
            contador++;
        }
    }
   
    return contador;
}

void iniciarForca(char * forca, int tam){
    for(int i = 0; i < tam; i++){
        forca[i] = '_';
    }
}
void montarForca(char letra, char * palavra, char * forca){

    int tam = strlen(palavra);
    for(int i = 0; i < tam; i++){
        if(palavra[i] == letra)
            forca[i] = letra;
        
    }
}

void mostrarForca(char * forca, int tam){
    
    for(int i = 0; i < tam; i++){
        cout << forca[i] << " ";
    }
}

int executarJogo(char * palavra){
  
    char letra;
    char letrasInformadas[12];
    char forca[strlen(palavra)];


    iniciarVetorLetrasRepetidas(letrasInformadas, 12);
    
    int retorno = 1, rodada = 0, acertos = 0, chances = 6, j = 0;

    iniciarForca(forca, strlen(palavra));

    while(chances > 0 && acertos < strlen(palavra)){
        letra = informarLetra();
        retorno = validarLetra(letra, letrasInformadas);
        
        if(retorno != 0 ){
            letrasInformadas[j] = letra;
            j++;
            
           rodada = verificarNaPalavra(palavra, letra);
           acertos += rodada;

            if(rodada == 0)
                cout << "Você errou!. Te restam " << --chances << " chances.\n";
            else
                cout << "Você acertou!. Faltam " << strlen(palavra) - acertos << " letras.\n";
            
            montarForca(letra, palavra, forca);
            mostrarForca(forca, strlen(palavra));
        }

        else
            cout << "A letra " << letra << " já foi informada!\n";
        
        cout << "\n\n";
    }

    if(acertos == strlen(palavra)){
        cout << "Você acertou a palavra " << palavra << ". Parabéns!\n";
    }
    else
        cout << "Você não acertou a palavra \"" << palavra << "\".\n";
}

int main(int argc, char const *argv[]){
    char palavra[20];
    informarPalavra(palavra);
    system("clear");
    executarJogo(palavra);
    return 0;
}

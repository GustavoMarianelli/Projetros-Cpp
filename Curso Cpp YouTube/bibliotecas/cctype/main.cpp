#include <iostream>
#include <cctype> //evolução da ctype.h

using namespace std;

int main(int argc, const char** argv) {

    //tipos de dados e conversão de caracteres
    
    //isalnum() - verifica se é alfanumérico
    char str[]="Gustavo Marianelli";
    int i = 0;
    while(isalnum(str[i])){
        i++;
    }

    //isalpha() - verirfica se é alfabético
    char str2[]="Gustavo-Marianelli";
    i=0;
    while(str2[i]){
        if(isalpha(str2[i]))
            cout << "Caractere " << str2[i] << " alfaético" << endl;
        else
            cout << "Caractere: " << str2[i] << " não alfabético" << endl;
        i++;

    }
    cout << i << endl;

    //isdigit() - verifica se é um caractere numérico
    //iscntrl() - verifica se é um caractere de controle

    char str4[] = "123Gustavo";
    i=0;
    while(!iscntrl(str4[i])){
        if(isdigit(str4[i]))
            cout << "Número\n";
        i++;
    }
    cout << "Tamanho da string: " << i << endl;

    //isspace() - diz se é um espaço
    char str3[] = "Uma frase com espaços";
    i = 0;
    int contador_espacos = 0;

    while(str3[i]){
        if(isspace(str3[i]))
            contador_espacos++;
        i++;
    }

    cout << "Qtd espaços: " << contador_espacos << endl;

    //islower() - verifica se é minúsculo
    //isupper() - verifica se é maiúsculo
    char str5[]= "MinÚsCULo";
    i=0;
    int cont_min = 0, cont_mai = 0;
    while(str5[i]){
        if(islower(str5[i]))
            cont_min++;
        else if(isupper(str5[i]))
            cont_mai++;
        i++;
    }

    cout << "Minúsculas: " << cont_min << " - Maiúsculas: " << cont_mai << endl;

    //isprint() - verifica se é pŕintável
    //ispunct() - verifica se é pontuação
    //isxdigit() - verifica se é hexadecimal
    char str6[]="Árvore #000000.";
    i=0;
    while(str6[i]){
        if(isprint(str6[i]))
            cout << "Caractere printáel " << str6[i] << endl;
        if(ispunct(str6[i]))
            cout << "Caractere de pontuação " << str6[i] << endl;
        if(isxdigit(str6[i]))
            cout << "Caractere hexadecimal " << str6[i] << endl;
        i++;
    }

    //tolower() - tudo para minúsculo
    //toupper() - tudo para maiúsculo

    char str7[]="MAIUSCULAS minusculas";
    char aux[sizeof(str7)];
    char letra;

    int controlador = 0;
    
    i=0;
    while(str7[i]){
        controlador = 0;
        letra = str7[i];
    

        if(isupper(letra) && controlador == 0)
            aux[i] = tolower(letra);
            
        else if (islower(letra) && controlador == 0)
            aux[i] = toupper(letra);
            
        else 
            aux[i] = str7[i];
        i++;
    }

    cout << aux << endl;
    return 0;
}
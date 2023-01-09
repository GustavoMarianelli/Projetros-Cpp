#include <iostream>
#include <ctime> // ou time.h
#include <cmath>

using namespace std;

int numerosPrimos(int n){
    int i,j;
    int freq = n-1;

    for(i=2; i<=n; i++){
        for(j=sqrt(i); j>1; --j){
            if(i%j == 0)
                --freq;
                break;
        }
    }
    return freq;
}

int main(int argc, const char** argv) {

    //clock()
    int primos;
    clock_t tempo = clock();
    primos = numerosPrimos(9000000);
    tempo = clock() - tempo;
    cout << primos << " - " << ((double) tempo / CLOCKS_PER_SEC) << " seg\n";

    //difftime()
    clock_t t1, t2, t3;
    t1 = clock();
    primos = numerosPrimos(1000);
    t2 = clock();
    t3 = difftime(t2,t1);
    cout << ((float) t3 / CLOCKS_PER_SEC) << endl;

    //time() -- retorna o tempo (em segundos) decorrido desde 00:00:00 do dia 01/01/1970 até o dia e hora atual do sistema
    time_t t;
    time(&t);
    cout << t << endl;

    //localtime() - converte o tipo time_t para struct tm
    //asctime() - converte struct tm para string
    struct tm* infoTempo;
    time(&t);
    infoTempo = localtime(&t);
    cout << asctime(infoTempo) << endl;

    cout << infoTempo->tm_sec << endl;
    cout << infoTempo->tm_min << endl;
    cout << infoTempo->tm_hour << endl;
    
    //ctime() - converte o valor do tipo time_t para string sem a necessidade da struct tm
    cout << ctime(&t) << endl;

    //strftime() - formata a saída das informações
    char buffer[80];
    strftime(buffer, 80, "Hora: %I:%M:%S", infoTempo);
    cout << buffer << endl;

    strftime(buffer, 80, "%d/%m/%Y", infoTempo);
    cout << buffer << endl;

    // - tipos:
    // - clock_t /size_t / struct tm* / time_t  

    

    return 0;
}
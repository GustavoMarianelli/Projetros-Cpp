#include <iostream>
#include <chrono> // evolução da ctime
#include <ctime>
using namespace std;
using namespace chrono;

int main(int argc, const char** argv) {

    seconds s(1); //chrono::
    minutes m(1);
    hours h;
    milliseconds ms;
    microseconds mics;
    nanoseconds ns;

    s = m; // funciona quando o menor recebe o maior
    cout << s.count() << endl;

    //h = m; //maior recebendo o menor não funciona 
    minutes m2(60);
    hours h2 = duration_cast<hours>(m2);
    cout << h2.count() << endl;    

    //classe system_clock
    using chrono::system_clock;
    duration<int,ratio<60*60*24>> um_dia(1);
    
    system_clock::time_point hoje = system_clock::now();
    system_clock::time_point amanha = hoje + um_dia;
    system_clock::time_point ontem = hoje - um_dia;

    time_t tt;
    tt = system_clock::to_time_t(hoje);
    cout << "Hoje " << ctime(&tt) << endl;

    tt = system_clock::to_time_t(amanha);
    cout << "Amanhã " << ctime(&tt) << endl;

    tt = system_clock::to_time_t(ontem);
    cout << "Hoje " << ctime(&tt) << endl;

    //classe steady_clock
    steady_clock::time_point t1 = steady_clock::now();
    cout << "Imprimindo 1500 estrelas: " << endl;
    for(int i=0; i<1500; i++){
        cout << "* ";
    }
    cout << endl;
    steady_clock::time_point t2 = steady_clock::now();
    duration<double> tempo_decorrido = duration_cast<duration<double>>(t2 -t1);
    cout << "Tempo: " << tempo_decorrido.count() << "seg\n";
    

    return 0;
}


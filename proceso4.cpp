#include <iostream>
using namespace std;
int dia,mes,anio,sdia,smes,sanio;
void DiaSiguiente(int dia, int mes, int anio);
int main(){
    
    cout << "Ingrese el dia" <<endl;
    cin >> dia;
    cout << "Ingrese el mes" <<endl;
    cin >> mes;
    cout << "Ingrese el anio" <<endl;
    cin >> anio;
    DiaSiguiente(dia,mes,anio);
    cout << "La fecha es" << endl;
    cout << "El dia: " << sdia << "  El mes: " << smes << "  El anio: " << sanio << endl;

    return 0;
}

void DiaSiguiente(int dia, int mes, int anio){
    if(mes==01){
        sdia = dia+1;
        smes = mes;
        sanio = anio;
        if(sdia>31){
            sdia = 01;
            smes = smes+1;
            sanio = anio;
        }
    }else if(mes==02){
        sdia = dia+1;
        smes = mes;
        sanio = anio;
        if(sdia>28){
            sdia = 01;
            smes = smes+1;
            sanio = anio;
        }

    }else if(mes==03){
        sdia = dia+1;
        smes = mes;
        sanio = anio;
        if(sdia>31){
            sdia = 01;
            smes = smes+1;
            sanio = anio;
        }
    }else if(mes==04){
        sdia = dia+1;
        smes = mes;
        sanio = anio;
        if(sdia>30){
            sdia = 01;
            smes = smes+1;
            sanio = anio;
        }
    }else if(mes==05){
        sdia = dia+1;
        smes = mes;
        sanio = anio;
        if(sdia>31){
            sdia = 01;
            smes = smes+1;
            sanio = anio;
        }
    }else if(mes==06){
        sdia = dia+1;
        smes = mes;
        sanio = anio;
        if(sdia>30){
            sdia = 01;
            smes = smes+1;
            sanio = anio;
        }
    }else if(mes==07){
        sdia = dia+1;
        smes = mes;
        sanio = anio;
        if(sdia>31){
            sdia = 01;
            smes = smes+1;
            sanio = anio;
        }
    }else if(mes==8){
        sdia = dia+1;
        smes = mes;
        sanio = anio;
        if(sdia>31){
            sdia = 01;
            smes = smes+1;
            sanio = anio;
        }
    }else if(mes==9){
        sdia = dia+1;
        smes = mes;
        sanio = anio;
        if(sdia>30){
            sdia = 01;
            smes = smes+1;
            sanio = anio;
        }
    }else if(mes==10){
        sdia = dia+1;
        smes = mes;
        sanio = anio;
        if(sdia>31){
            sdia = 01;
            smes = smes+1;
            sanio = anio;
        }
    }else if(mes==11){
        sdia = dia+1;
        smes = mes;
        sanio = anio;
        if(sdia>30){
            sdia = 01;
            smes = smes+1;
            sanio = anio;
        }
    }else if(mes==12){
        sdia = dia+1;
        smes = mes;
        sanio = anio;
        if(sdia>31){
            sdia = 01;
            smes = 01;
            sanio = anio+1;
        }
        }

    }

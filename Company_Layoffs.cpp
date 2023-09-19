#include<iostream>
#include <vector>
using namespace std;

int main()
{
    //declaracion de varibles
    int i,k;
    int total_iq;
    int semanas, empleados;

    //carga de datos
    cin >> empleados >> semanas;
    
    //declaracion iq de empleados y iq semanal
    vector <int> iq(empleados);
    vector<int> iq_semana(semanas);

    //carga de iq de empleados y iq semanal
    for(i=0;i<empleados;i++)
    {
        cin >> iq[i];
    }

    for(i=0;i<semanas;i++)
    {
        cin >> iq_semana[i];
    }

    //proceso de resolucion
    for(i=0;i<semanas;i++)
    {
        total_iq=0;
        for(k=0;k<empleados;k++)
        {
            if(iq_semana[i]>iq[k])
            {
                total_iq+=iq[k];
            }

            else
            {
                total_iq+=iq_semana[i];
            }
        }

        cout << total_iq << endl; 
    }
}
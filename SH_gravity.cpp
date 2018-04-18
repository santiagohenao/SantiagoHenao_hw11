#include <iostream>
#include <fstream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <iterator>

#define G 10.
#define M 1000.

using namespace std;

double m,x, x0, v,v0,t,dt;

int main()
{
    cout << "1D Gravity\nPlease type initial non-zero position:\t";
    cin >> x0;
    x=x0;
    cout << "Please type initial velocity:\t";
    cin >> v0;
    v=v0;
    cout << "Please type initial mass:\t";
    cin >> m;
    cout << "Please type temporal resolution of the simulation:\t";
    cin >> dt;
    t=0.;

    ofstream result("tray.dat");
    result << x << "\t" << v << "\t" << t << "\n";

    int counter(0);
    int kill_switch=0;
    while( kill_switch==0 )
    {
        t+=dt;
        v+=-(G*M)/(pow(x,2))*t;
        x+=v*t;
        result << x << "\t" << v << "\t" << t << "\n";
        counter++;
        if(counter>6000)
        {
            kill_switch=1;
            cout << "\nError: Simulation has exceeded limit calculation time.\n" << endl;
            return 1;
        }
        if(x<=x0/100.)
        {
            return 0;
        }
    }


    return 0;
}

#include <iostream>
#include <fstream>
using namespace std;


int main()
    {
    int k = 200;
    int c = 900;
    int rho = 2700;
    float dx=0.01;
    float dt = 0.5;
    int L=2;
    int N = L/dx + 1;
    float n = dt*k/(dx*dx*c*rho);
    float T_presente[N];
    float T_futuro[N];
    ofstream outfile;
    outfile.open("datos.dat");
    
    //Condiciones iniciales
    for(int i=0;i<N;i++)
        {
        T_presente[i]=300;
            if(80<i<120)
                {
                T_presente[i]=500;
                }
        outfile<<T_presente[i]<<endl;
        }
    
    
    //Avance en el tiempo
        float cont=0.5; 
        while(cont<100)
            {
            for(int i=1;i<N-1;i++)
                {
                T_futuro[i] = T_presente[i] + n*(T_presente[i+1]+T_presente[i-1]-2*T_presente[i]);
                outfile<<T_presente[i]<<endl;
                }
            for(int j=0;j<N;j++)
                {
                T_presente[j]=T_futuro[j];
                }
            cont+=1;
            }
    outfile.close();
    }
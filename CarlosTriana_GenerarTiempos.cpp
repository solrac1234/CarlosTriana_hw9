#include <ctime>
#include <iostream>
using namespace std;

// se define una funcion de fibonacci que retorna el n-esimo valor 
int fibonacci(int N){
	if(N==1||N==0){
	return(N);
	}
	else{
	return(fibonacci(N-1)+fibonacci(N-2));
	}
}
//se define una funcion que calcula el tiempo de calculo para el n-esimo valor de la funcion de fibonacci
float get_time(int N){
	clock_t temp;
	temp = clock();

	fibonacci(N);
	temp = clock()-temp;

	float tiempo = ((float)temp)/CLOCKS_PER_SEC;

return tiempo; 
}

//imprime el tiempo de calculo
int main(){
	int N=35;
	int n=0;
		while(n<N)
{
		cout<<n<<","<<get_time(N)<<"\n";
			n++;  
		}
return 0;		
};

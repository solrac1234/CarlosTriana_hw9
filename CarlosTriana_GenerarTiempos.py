import numpy as np
import time

#se define la funcion de fobonacci que retorna el N-esimo numero de esta secuencia
def fibonacci(N):
	if (N==1 or N==0):
		return N
	else:
		return fibonacci(N-1)+fibonacci(N-2)

#funcion que calcula el tiempo que tarda en calcular el n-esimo valor de la secuencia de fibonacci
		
t0 = time.time()
def get_time(N):
	
	fibonacci(N)
	
	t1 = time.time()-t0
	
	return t1

print "el tiempo que tarda en obtener el valor",N, "es",get_time(35)

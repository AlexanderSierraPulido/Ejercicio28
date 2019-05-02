AlexanderSierra_Ej28.png: datos.dat plot.py
	python plot.py

%.dat : a.out
	./a.out 

a.out: AlexanderSierra_Ejercicio28.cpp
	g++ AlexanderSierra_Ejercicio28.cpp
rm: creacion
	rm *.o

creacion: Persona.o
	g++ Main.cpp Persona.o -o exe

Persona.o: 
	g++ -c Persona.cpp

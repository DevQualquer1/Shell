compilar:
	g++ src/main.cpp src/ClassComandos/comandoModel.cpp src/ClassComandos/comandoEcho.cpp -o main.exe

run: compilar
	./main.exe

clean:
	rm -f main.exe
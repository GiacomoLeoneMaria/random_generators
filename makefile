LIBS:=`root-config --libs`
INCS:=`root-config --cflags`

compila: main.o Random.o Gauss.o
	g++ main.o Random.o Gauss.o -o random ${INCS} ${LIBS} 

main.o: main.cpp Random.h 
	g++ -c main.cpp -o main.o ${INCS}

Random.o: Random.cpp Random.h Gauss.h FunzioneBase.h
	g++ -c Random.cpp -o Random.o

Gauss: Gauss.cpp Gauss.h
	g++ -c Gauss.cpp -o Gauss.o
	


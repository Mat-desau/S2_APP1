#
# Auteur: C.-A. Brunet
# Date: 08 janvier 2018
# Description: compilation de graphicus-01. Ce fichier fait partie de 
#	la distribution de Graphicus.
#
#si jamais on veut supprimer le .o activer le all:
#all: graphicus-01 clean

graphicus-01: graphicus-01.o tests.o rectangle.o cercle.o carre.o canevas.o couche.o forme.o
	g++ -o graphicus-01 graphicus-01.o tests.o rectangle.o cercle.o carre.o canevas.o couche.o forme.o

graphicus-01.o: graphicus-01.cpp canevas.h couche.h forme.h
	g++ -c graphicus-01.cpp

tests.o: tests.cpp tests.h canevas.h couche.h forme.h rectangle.h cercle.h carre.h
	g++ -c tests.cpp

rectangle.o: rectangle.cpp rectangle.h forme.h
	g++ -c rectangle.cpp

cercle.o: cercle.cpp cercle.h forme.h
	g++ -c cercle.cpp

carre.o: carre.cpp carre.h forme.h
	g++ -c carre.cpp

canevas.o: canevas.cpp canevas.h couche.h forme.h
	g++ -c canevas.cpp

couche.o: couche.cpp couche.h forme.h
	g++ -c couche.cpp

forme.o: forme.cpp forme.h
	g++ -c forme.cpp

clean:
	rm  -f *.o


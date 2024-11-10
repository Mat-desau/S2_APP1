# 
# Auteur: C.-A. Brunet
# Date: 08 janvier 2018
# Description: compilation de graphicus-01. Ce fichier fait partie de 
#	la distribution de Graphicus.
#
#si jamais on veut supprimer le .o activer le all:
all: graphicus-02 run
all: graphicus-02 open
all: graphicus-02 clean

graphicus-02: graphicus-02.o tests.o rectangle.o cercle.o carre.o canevas.o couche.o forme.o vecteur.o
	g++ -o graphicus-02 graphicus-02.o tests.o rectangle.o cercle.o carre.o canevas.o couche.o forme.o vecteur.o

graphicus-02.o: graphicus-02.cpp canevas.h couche.h forme.h
	g++ -c graphicus-02.cpp

tests.o: tests.cpp tests.h canevas.h rectangle.h cercle.h carre.h
	g++ -c tests.cpp

rectangle.o: rectangle.cpp rectangle.h forme.h
	g++ -c rectangle.cpp

cercle.o: cercle.cpp cercle.h forme.h
	g++ -c cercle.cpp

carre.o: carre.cpp carre.h forme.h
	g++ -c carre.cpp

canevas.o: canevas.cpp canevas.h couche.h
	g++ -c canevas.cpp

couche.o: couche.cpp couche.h vecteur.h
	g++ -c couche.cpp

forme.o: forme.cpp forme.h
	g++ -c forme.cpp
	
vecteur.o: vecteur.cpp vecteur.h forme.h
	g++ -c vecteur.cpp

clean:
	rm  -f *.o

run:
	./graphicus-02 > test.log 
	
open:
	open test.log


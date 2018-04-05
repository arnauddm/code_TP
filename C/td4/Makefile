# $@ : nom de la cible
# $< : première dépendance de la liste des dépendances
# $? : les dépendances plus récentes que le cible
# $^ : toutes les dépendances
# $* : représente tous les nom


CC		=	gcc
CFLAGS	=	-W -Wall -pedantic -O6 -v
LDFLAGS	=
EXEC	=	td4

.PHONY: clean, mrproper

.SUFFIXES:

OBJECTS =	main.o \

all : $(OBJECTS)
	$(CC) $(CFLAGS) $^ -o $(EXEC)

%.o : %.c
	$(CC) -c $< -o $@

clean : 
	rm -rf *.bak rm -rf *.o

mrproper : clean
	rm -rf $(EXEC)

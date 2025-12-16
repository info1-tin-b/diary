
all: ballistic

crepes: lait farine oeufs sucre
	melanger $^
	cuire appareil
	servir $@

ballistic: ballistic.c 
	gcc -o $@ $^ -lm -Wall -Wextra -O2
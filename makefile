Lab_3 : Lab_3.o
	gcc Lab_3.o -o Lab_3
	rm Lab_3.o
Lab_3.o : Lab_3.c
	gcc  -g -c Lab_3.c

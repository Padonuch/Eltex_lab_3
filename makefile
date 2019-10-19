Lab_3_mod : Lab_3_mod.o
	gcc Lab_3_mod.o -o Lab_3_mod
	rm Lab_3_mod.o
Lab_3_mod.o : Lab_3_mod.c
	gcc  -g -c Lab_3_mod.c


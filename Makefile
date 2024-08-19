

all:
	gcc main.c usrPrintf.c -o ti
	./ti

clean:
	rm ti



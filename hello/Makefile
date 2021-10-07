make:
	
	gcc -c hello.c add.c sub.c -fpic
	 
	gcc *.o -shared -o final.so
	
	gcc -c main.c -o main.o
	
	gcc -o hello main.o -L _l final.so
	
	sudo cp final.so /usr/lib
	
remove:
	rm *.o hello	
	
	

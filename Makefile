all:
	# Compile the main build into an object
	gcc -c -static dlocal/ncurse/dist/build.c -o ./cache/build.o
	gcc -c -static dlocal/ncurse/dist/entry.c -o ./cache/libr.o

	gcc ./cache/build.o ./cache/libr.o -o ./commands/compiler.1
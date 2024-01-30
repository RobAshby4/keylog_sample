build:
	gcc -o ./clog main.c str_from_events.h str_from_events.c

run: build
	sudo ./clog

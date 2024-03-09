build:
	gcc -o ./clog main.c str_from_events.h str_from_events.c
	gcc -o ./server server.c 
	docker build -t server .

run-logger: build
	sudo ./clog

run-server: build 
	docker run -d -t -p 8012:8012/udp server

clean:
	rm ./clog ./server

FROM ubuntu:latest

EXPOSE 8012/udp
WORKDIR /usr/keyserver/
COPY ./server ./
COPY ./runner.sh ./

CMD ["/usr/bin/bash", "runner.sh"]

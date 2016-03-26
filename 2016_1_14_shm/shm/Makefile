server=shm_server
client=shm_client
CC=gcc
FLAGS=#-static
.PHONY:all
all:$(server) $(client)
$(server):shm_server.o shm_comm.o
	$(cc) -o $@ $^ $(FLAGS)
$(client):shm_client.o shm_comm.o
	$(cc) -o $@ $^ $(FLAGS)
%.o:%.c
	$(CC) -c $<
.PHONY:clean
clean:
	rm -rf $(server) $(client) *.o

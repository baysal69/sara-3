/*
PID process identifier unique nbr assigned to a runnning process,
the OS uses PID to track and comunicate with processes.

Mintalk program where client sends msg(bit by bit) to sever,
the server decoes it and prints the message.

Server is always running and waiting for signals(SIGUSR1: 0, SIGUSR2: 1)
when server gets 8 bits, oit converts them into char, the server prints decoded message.

Client sends signal one by one(0 or 1) to the server to build msg.
she first sends the servers's PID(so server knows where to send).
she sends msg bit by bit usignm SIGUSR1(0) and SIGUSR2(1).

server waits for signals, collects bits, prints message
client sneds bits(signals) one by oneto server to form a message.


i run server first which will prints its pid 12345
whn i run client -> ./client 12345 "Hello Server!"
*/
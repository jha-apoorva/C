#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<sys/ipc.h>
#include<sys/shm.h>
#include<semaphore.h>

int main() {
    key_t key = ftok("/home/student/Desktop/Sec N/2141001060-apoorva"

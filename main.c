#include <stdio.h>
#include <sys/epoll.h>

struct Employee {
    int id;
    int salary;
    char name[];
};

int main(int argc, char* argv[]) {
   for (int i = 0; i < 10; i++) {
     printf("Number = %d\n", i);
   }
}


#include <stdio.h>

struct Employee {
    int id;
    int salary;
    char name[];
};

int main(int argc, char* argv[]) {
    printf("%zu\n", sizeof(struct Employee));
}


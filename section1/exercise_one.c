#include <stdio.h>

// increments an integer by one
// Is this pass by value or reference? 🤔
void increment_by_one(int* x) {
    *x = *x + 1;
}

int main() {
    int my_number = 1;
    increment_by_one(my_number);

    // my_number should be 2 now
    printf("my number is %d\n", my_number);
}

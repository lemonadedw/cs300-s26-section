#include <stdio.h>

int main() {
    int val_1 = 5;
    int* ptr_1 = &val_1;
    int** ptr_ptr_1 = &ptr_1;

    int val_2 = 3;
    int* ptr_2 = &val_2;
    int** ptr_ptr_2 = &ptr_2;

    printf("val_1 is %d\n", **ptr_ptr_1);
    printf("val_2 is %d\n", **ptr_ptr_2);

    // Swap the values in the double pointers so that val_1 is 3 and val_2 is 5
    printf("Swapping values...\n");
    *ptr_ptr_1 = ptr_2;
    *ptr_ptr_2 = ptr_1;

    printf("val_1 is %d\n", **ptr_ptr_1);  // Should be 3 after swapping
    printf("val_2 is %d\n", **ptr_ptr_2);  // Should be 5 after swapping
}

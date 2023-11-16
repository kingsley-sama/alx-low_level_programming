void myFunction(void) __attribute__((constructor));

void myFunction(void) {
    printf("This function runs before main!\n");
}

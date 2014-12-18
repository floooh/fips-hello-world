#include <stdio.h>
#include "dep1/dep1.h"

int main() {
    printf("Hello World!\n");
    print_dep1();
    
    // check whether imported defines work
    const char* str_def = TEST_DEFINE_2;
    printf("Imported string define: %s\n", str_def);
    printf("Imported int define: %d\n", TEST_DEFINE_1);
    
    return 0;
}


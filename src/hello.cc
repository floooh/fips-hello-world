#include <stdio.h>
#include "dep1/dep1.h"
#include "dep3/dep3.h"

#if FIPS_PNACL | FIPS_IOS | FIPS_ANDROID
#error "Standard C Hello World not supported on this platform"
#endif

int main(int argc, const char** argv) {
    printf("Hello World!\n");
    print_dep1();
    
    // check whether imported defines work
    const char* str_def = TEST_DEFINE_2;
    printf("Imported string define: %s\n", str_def);
    printf("Imported int define: %d\n", TEST_DEFINE_1);
    for (int i = 0; i < argc; i++) {
        printf("Arg %d: %s\n", i, argv[i]);
    }

    correct_old_api_dep3(1);

    return 0;
}


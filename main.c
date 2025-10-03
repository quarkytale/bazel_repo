#include <stdio.h>

int main() {
#ifdef USE_BORINGSSL
    printf("BoringSSL is enabled!\n");
#else
    printf("BoringSSL is NOT enabled.\n");
#endif
    return 0;
}
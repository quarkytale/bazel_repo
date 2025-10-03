#include <stdio.h>
#include <openssl/ssl.h>

int main() {
#ifdef USE_BORINGSSL
    printf("BoringSSL is enabled!\n");
#ifdef OPENSSL_VERSION_TEXT
    printf("BoringSSL version: %s\n", OPENSSL_VERSION_TEXT);
#else
    printf("BoringSSL version: (macro not defined)\n");
#endif
#else
    printf("BoringSSL is NOT enabled.\n");
    printf("OpenSSL version: %s\n", OpenSSL_version(OPENSSL_VERSION));
#endif
    return 0;
}

#if LIMASZ==2048
  // Lima_2p_2048
  #define CRYPTO_SECRETKEYBYTES 12289
  #define CRYPTO_PUBLICKEYBYTES 8193
  #define CRYPTO_BYTES 8193
  #define MAX_MSG_LEN 256
#elif LIMASZ==1018
  // Lima_sp__1018
  #define CRYPTO_SECRETKEYBYTES 9163
  #define CRYPTO_PUBLICKEYBYTES 6109
  #define CRYPTO_BYTES 6105
  #define MAX_MSG_LEN 127
#elif LIMASZ==1306
  // Lima_sp_1306
  #define CRYPTO_SECRETKEYBYTES 15673
  #define CRYPTO_PUBLICKEYBYTES 10449
  #define CRYPTO_BYTES 10443
  #define MAX_MSG_LEN 163
#elif LIMASZ==1822 
  // Lima_sp_1822
  #define CRYPTO_SECRETKEYBYTES 21865
  #define CRYPTO_PUBLICKEYBYTES 14577
  #define CRYPTO_BYTES 14555
  #define MAX_MSG_LEN 227
#elif LIMASZ==2062
  // Lima_sp_2062
  #define CRYPTO_SECRETKEYBYTES 24745
  #define CRYPTO_PUBLICKEYBYTES 16497
  #define CRYPTO_BYTES 16475
  #define MAX_MSG_LEN 257
#elif LIMASZ==512
  // Lima_sp_512
  #define CRYPTO_SECRETKEYBYTES 3073
  #define CRYPTO_PUBLICKEYBYTES 2049
  #define CRYPTO_BYTES 2049
  #define MAX_MSG_LEN 64
#else
  // Lima_2p_1024
  #define CRYPTO_SECRETKEYBYTES 6145
  #define CRYPTO_PUBLICKEYBYTES 4097
  #define CRYPTO_BYTES 4097
  #define MAX_MSG_LEN 128
#endif

#define CRYPTO_ALGNAME "LIMA-EncCPA"

int crypto_encrypt_keypair( unsigned char *pk, unsigned char *sk);

int crypto_encrypt( unsigned char *c, unsigned long long *clen, 
                    const unsigned char *m, unsigned long long mlen,
                    const unsigned char *pk);

int crypto_encrypt_open( unsigned char *m, unsigned long long *mlen, 
                         const unsigned char *c, unsigned long long clen,
                         const unsigned char *sk);

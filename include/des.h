#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <semaphore.h>
#include <getopt.h>
#include <string.h>
#include <mpi.h>
#include "block.h"


#define SUBKEYS_LEN 17

#define DECRYPT 0x0
#define ENCRYPT 0x1


block32 permutationP(block32 in);
int boxS1(block64 box);
int boxS2(block64 box);
int boxS3(block64 box);
int boxS4(block64 box);
int boxS5(block64 box);
int boxS6(block64 box);
int boxS7(block64 box);
int boxS8(block64 box);
void key_permutation(block64 key, block64 *key_permutated_final);
block64 ip_permutation(block64 in);
block64 ip_permutation_back(block64 in);
block64 ip_permutation_after(block64 in);
block64 ip_permutation_after_back(block64 in);
block64 e_bit_selection(block32 in);
block64 encryption(block64 in, block64 key);
block64 decryption(block64 encrypted, block64 key);
block64 thread_decryption(block64);
block64 thread_encryption(block64);
void write2file(block64 block);
void file_decryption();
void file_encryption();
void usage();

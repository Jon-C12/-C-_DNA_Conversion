#include "compress.h"
#include "decompress.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char * argv[]){

  for(int i = 0; i < argc; i++){
  printf("%s ", argv[i]);
  }
  printf("\n");
  
  char * flag = argv[1];
  //Determining which flag to use
  if(strcmp(flag, "-c") == 0) {
    //Determine appropiate variables and which function to use and print
    char * dna_string = argv[2];
    unsigned int dna_total_length = strlen(dna_string);
    unsigned int max_dna_size_c = (dna_total_length * 2 + 7) >> 3;
    unsigned char compressed_dna[max_dna_size_c];                                     
    unsigned int compressed_size = DNACompression(argc, argv, compressed_dna);    
    printDNACompression(compressed_dna, compressed_size);
  }
  //Determine appropiate variables and which function to use and print
  if (strcmp(flag, "-d") == 0) {
    unsigned int dna_total_length = atoi(argv[2]);
    unsigned int compressed_length = argc - 3;
    unsigned char compressed_dna[compressed_length];
    for (unsigned int i = 0; i < compressed_length; i++){
      //Converting the third cmd line arg to compressed bytes
      compressed_dna[i] = (unsigned char)atoi(argv[3 + i]);
    }
    //Store decompressed DNA
    char decompressed_dna[dna_total_length + 1];
    unsigned int decompressed_size = DNADecompression(argc, argv, compressed_dna, compressed_length, decompressed_dna);

    printDNADecompression((unsigned char *)decompressed_dna, decompressed_size); 
  }
  return 0;
}

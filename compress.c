#include "compress.h"
#include <stdio.h>
#include <string.h>

unsigned int DNACompression (int argc, char * argv[], unsigned char * output){
  char * dna_in = argv[2];
  unsigned int dna_length = strlen(dna_in);
  unsigned int output_index = 1;
  unsigned char byte = 0;
  int bit_position = 6;
  output[0] = dna_length;
  
  //Looping through DNA sequence
  for (unsigned int i = 0; i < dna_length; i++){
    unsigned char bits = 0;
    //Mapping DNA to their bit values
    if(dna_in[i] == 'A'){
      bits = 0b00;
    }
    else if(dna_in[i] == 'T'){
      bits = 0b01;
    }
    else if(dna_in[i] == 'C'){
      bits = 0b10;
    }
    else if(dna_in[i] == 'G'){
      bits = 0b11;
    }
  //Insert bits into current byte
  byte = byte | (bits << bit_position);
  bit_position = bit_position - 2;
  //Reseting for new byte 
  if (bit_position < 0){
    output[output_index++] = byte;
    byte = 0;
    bit_position = 6;
  }
 }
  if (bit_position != 6){
    output[output_index++] = byte;
  }
  
  return output_index;
}


void printDNACompression(unsigned char *  compressed_dna, unsigned int dna_size){
  for (unsigned int i = 0; i < dna_size; i++){
    //Printing each byte as an unsigned integer 
    printf("%u ", compressed_dna[i]); 
  }
  printf("\n");
}


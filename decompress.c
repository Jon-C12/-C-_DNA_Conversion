#include "decompress.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned int DNADecompression (int argc, char * argv[], unsigned char * compressed_dna, unsigned int compressed_length, char * output){
  
  unsigned int dna_length = atoi(argv[2]);
  unsigned int output_index = 0;
  unsigned compressed_index = 0;
  unsigned char byte = compressed_dna[compressed_index];
  int bit_position = 6;
  if (dna_length > 0){  
  while(output_index < dna_length && compressed_index < compressed_length) {
    //Extracting bits from current byte and position
    unsigned char bits = (byte >> bit_position) & 0b11;;
    //Mapping DNA to their bit values      
    if(bits == 0b00){
      output[output_index] = 'A';
    }
    else if(bits == 0b01){
      output[output_index] = 'T';
    }
    else if(bits == 0b10){
      output[output_index] = 'C';
    }
    else if(bits == 0b11){
      output[output_index] = 'G';
    }

    output_index++;    
    bit_position -= 2;
   //Moving to next byte
  if (bit_position < 0){
    compressed_index++;
    if (compressed_index < compressed_length){
      byte = compressed_dna[compressed_index];
      bit_position = 6;
      }
     }
    }
  }
  //Null terminate and return decompressed output
  output[output_index] = '\0';
  return output_index;

  }


void printDNADecompression(unsigned char * decompressed_dna, unsigned int dna_size){
  //Printing decompressed DNA
    printf("%s ", decompressed_dna);
    printf("\n");
}

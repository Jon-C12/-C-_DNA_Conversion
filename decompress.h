#ifndef DECOMPRESS_H
#define DECOMPRESS_H

/*
 * The DNADecompression function extracts bits from our current byte
 * that comes from the compressed DNA and continuously maps them to their
 * given bit values. In order to decompress our DNA, we use a right shift
 * bit wise operator to decompress and this is done continuously while also
 * moving to the next bit.
 */

/*
 * The printDNADecompression function takes our values from the DNADecompresison function
 * and prints this decompressed data along with a new line for proper format.
 */

unsigned int DNADecompression (int argc, char * argv[], unsigned char * compressed_dna, unsigned int compressed_length, char * output);
void printDNADecompression(unsigned char *  decompressed_dna, unsigned int dna_size);

#endif


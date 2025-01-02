#ifndef	COMPRESS_H
#define	COMPRESS_H

/*
 * The DNACompression function takes our cmd line args and sends them through
 * a loop in which they are mapped to their bit values and uses a left shift
 * bit wise operator in order to insert our bits into a variable that represents our
 * current byte. The function then resets and does not return our output index
 * until all our bits have been compressed.
 */

/*                                                                                        
 * The printDNACompression function takes our values from the DNACompresison function 
 * and prints this compressed data along with a new line for proper format.             
 */

unsigned int DNACompression (int argc, char * argv[], unsigned char * output);
void printDNACompression(unsigned char *  CompressedDNA, unsigned int DNASize);

#endif

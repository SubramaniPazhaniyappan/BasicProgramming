/* union declaration */

typedef union union_header_file
{
	char chunk_id[4];
	int chunk_size;
	char format[4];
	char subchunk1_id[4];
	int subchunk1_size;
	short int audio_format;
	short int num_channels;
	int sample_rate;		
	int byte_rate;
	short int block_align;
	short int bits_per_sample;
	char subchunk2_id[4];
	int subchunk2_size;
}union_header;

union_header *NewUnionHeader;

void Union()
{
    printf("Size of union %d\n",sizeof(union_header));
    printf("Size of union pointer %d\n",sizeof(NewUnionHeader));
    printf("Address of union pointer %d\n",&NewUnionHeader);
}

/* Results
	Size of union 4
	Size of union pointer 8
	Address of union pointer 4225432
*/
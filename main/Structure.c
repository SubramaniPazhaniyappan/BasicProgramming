/* structure declaration */

typedef struct struct_header_file
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
}struct_header;

// typedef struct struct_header_file *header_p;
struct_header *header_p;

void Structure()
{
    printf("Size of structure %d\n",sizeof(struct_header));
    printf("Size of structure pointer %d\n",sizeof(header_p));   
    printf("Address of struct pointer %d\n",&header_p);
}


/* Results
    Size of structure 44
    Size of structure pointer 8
    Address of struct pointer 4225400
*/
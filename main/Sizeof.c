
typedef float float32;
typedef int int32;
int *pointer;
char character;
double *Double;
float *Floating;

void SizeofDatatype()
{
    printf("Integer size :%d\n",sizeof(int));
    printf("unsigned size :%d\n",sizeof(unsigned int));
    printf("float size :%d\n",sizeof(float));
    printf("short size :%d\n",sizeof(short));
    printf("unsigned short size :%d\n",sizeof(unsigned short));
    printf("size of double :%d\n",sizeof(double));
    printf("size of character :%d\n",sizeof(character));

    printf("Size of integer pointer :%d\n",sizeof(pointer));
    printf("size of doubled pointer :%d\n",sizeof(Double));
    printf("size of floating pointer :%d\n",sizeof(Floating));
    printf("Address of integer pointer :%d\n",&pointer);
}


/*  Result 
    Integer size :4
    unsigned size :4
    float size :4
    short size :2
    unsigned short size :2
    size of double :8
    size of character :1
    Size of integer pointer :8
    size of doubled pointer :8
    size of floating pointer :8
    Address of integer pointer :4225416
*/

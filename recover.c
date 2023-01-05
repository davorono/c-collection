#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdint.h>

// Function prototypes. Don't change these.
uint8_t *read_card(char *fname, int *size);
void save_jpeg(uint8_t *data, int size, char *filename);
void recover(uint8_t *data, int size);

#define RAW_FILE "card.raw"

int main()
{
    // Read the card.raw file into an array of bytes (uint8_t)
    int card_length;
    uint8_t *card_data = read_card(RAW_FILE, &card_length);
    
    // Recover the images
    recover(card_data, card_length);
}

void recover(uint8_t *data, int size) 
{
    int end = 0;
    int start = 0;
    int length = 0;
    char filename[50];
    int j = 0;
    int filecount = 0;
    for (int i = 0; i < size; i+=512) // search for jpg start markers at 512 bytes (1 block)
    {
        if (data[i] == 0xff && data[i+1] == 0xd8 && data[i+2] == 0xff && (data[i+3] == 0xe0 || data[i+3] == 0xe1)) 
        {
            printf("start: %d %d %d %d\n", data[i], data[i+1], data[i+2], data[i+3]);
            start = i;
            filecount++;
            j = i;
            while(&free) 
            {
                if (data[j] == 0xff && data[j+1] == 0xd9 && data[j+2] == 0x00 && data[j+2] == 0x00) 
                {
                    break;
                }
                else 
                {
                    j++;
                }
            }
            /*while((data[j] != 0xff) && (data[j+1] != 0xd9) && (data[j+2] != 0) && (data[j+3] != 0)) 
            {
                j++;
            }*/
            end = j;
            printf("end: %d %d %d %d\n", data[j], data[j+1], data[j+2], data[j+3]);
            length = (end+2)-start;
            sprintf(filename, "Image%d.JPG", filecount);
            //printf("start: %d, end: %d, length: %d, filename: %s\n", i, j, length, filename);
            save_jpeg(&data[start], length, filename);
        }
        
        
    }
    printf("%d images recovered\n", filecount);
}

uint8_t *read_card(char *filename, int *size)
{

    struct stat st;
    if (stat(filename, &st) == -1)
    {
        fprintf(stderr, "Can't get info about %s\n", filename);
        exit(1);
    }
    int len = st.st_size;
    uint8_t *raw = malloc(len * sizeof(uint8_t));
    
    FILE *fp = fopen(filename, "rb");
    if (!fp)
    {
        fprintf(stderr, "Can't open %s for reading\n", filename);
        exit(1);
    }
    
    fread(raw, 1, len, fp);
    fclose(fp);
    
    *size = len;
    return raw;
}

void save_jpeg(uint8_t *data, int size, char *filename)
{
    FILE *fp = fopen(filename, "wb");
    if (!fp)
    {
        fprintf(stderr, "Can't write to %s\n", filename);
        exit(1);
    }
    
    fwrite(data, 1, size, fp);
    fclose(fp);   
}
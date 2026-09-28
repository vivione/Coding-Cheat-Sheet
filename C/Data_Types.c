#include <stdio.h>
#include <stdbool.h>

int main() {
    char single_char = 'C'; //single character | %c
    char array[] = "Bro"; //array of character | %s

    float decimal = 3.141592;                       //4 bytes (32 bits of precision) 6 - 7 digits   | %f
    double precised_decimal = 3.141592653589793;    //8 bytes (64 bits of precision) 15 - 16 digits | %lf

    bool boolean = true; //1 byte (true or false) | %d
    
    char character_or_number = 100;                     //1 byte (-128 to 127)  | %d or %c
    unsigned char unsigned_character_or_number = 255;   //1 byte (0 to 255)     | %d or %c

    short int short_number = 32767;                     //2 bytes (-32 768 to 32 767)   | %d
    unsigned short int unsigned_short_number = 65535;   //2 bytes (0 to 65535)          | %d

    int number = 2147483647; //4 bytes (-2 147 483 648 to 2 147 483 647)        | %d
    unsigned int unsigned_number = 4294967295; //4 bytes (0 to 4 294 967 295)   | %d

    long long int very_long_int = 9223372036854775807;                      //8 bytes (-9 quitilion to 9 quintilion)    | %llu
    unsigned long long int very_long_unsigned_int = 18446744073709551615;   //8 bytes (0 to 18 quintilion)              | %llu

    return 0;
}
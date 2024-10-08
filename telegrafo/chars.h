#include <avr/pgmspace.h>

const byte chars[][8] PROGMEM =
{
{ 0, 0, 63, 68, 68, 68, 63, 0 },
{ 0, 0, 127, 73, 73, 73, 6, 0 },
{ 0, 0, 127, 73, 73, 73, 54, 0 },
{ 0, 0, 127, 64, 64, 64, 0, 0 },
{ 0, 3, 62, 66, 66, 62, 3, 0 },
{ 0, 0, 127, 73, 73, 73, 0, 0 },
{ 0, 99, 20, 8, 127, 8, 20, 99 },
{ 0, 0, 73, 73, 73, 54, 0, 0 },
{ 0, 127, 2, 4, 8, 16, 127, 0 },
{ 0, 127, 2, 100, 72, 16, 127, 0 },
{ 0, 0, 127, 8, 8, 20, 99, 0 },
{ 0, 0, 31, 32, 64, 64, 127, 0 },
{ 0, 127, 64, 48, 8, 48, 64, 127 },
{ 0, 0, 127, 8, 8, 8, 127, 0 },
{ 0, 0, 62, 65, 65, 65, 62, 0 },
{ 0, 0, 127, 64, 64, 64, 127, 0 },
{ 0, 0, 127, 68, 68, 68, 56, 0 },
{ 0, 0, 62, 65, 65, 65, 0, 0 },
{ 0, 0, 64, 64, 127, 64, 64, 0 },
{ 0, 0, 113, 9, 9, 9, 126, 0 },
{ 0, 56, 68, 68, 127, 68, 68, 56 },
{ 0, 0, 99, 20, 8, 20, 99, 0 },
{ 0, 0, 126, 2, 2, 2, 127, 1 },
{ 0, 0, 120, 8, 8, 127, 0, 0 },
{ 0, 127, 1, 1, 31, 1, 1, 127 },
{ 0, 126, 2, 2, 62, 2, 3, 127 },
{ 0, 64, 64, 127, 9, 9, 9, 6 },
{ 0, 127, 9, 9, 9, 6, 0, 127 },
{ 0, 0, 127, 9, 9, 9, 6, 0 },
{ 0, 0, 65, 65, 73, 73, 62, 0 },
{ 0, 127, 8, 62, 65, 65, 65, 62 },
{ 0, 0, 51, 76, 72, 72, 127, 0 },
{ 0, 0, 0, 0, 0, 0, 0, 0 },
{ 0, 0, 125, 0, 0, 0, 0, 0 },
{ 0, 0, 0, 48, 0, 48, 0, 0 },
{ 0, 0, 18, 63, 18, 18, 63, 18 },
{ 0, 0, 50, 73, 127, 73, 38, 0 },
{ 0, 32, 81, 38, 8, 50, 69, 2 },
{ 0, 0, 54, 85, 73, 69, 34, 5 },
{ 0, 0, 0, 64, 112, 0, 0, 0 },
{ 0, 0, 0, 62, 65, 0, 0, 0 },
{ 0, 0, 0, 0, 65, 62, 0, 0 },
{ 0, 0, 42, 28, 8, 28, 42, 0 },
{ 0, 0, 8, 8, 62, 8, 8, 0 },
{ 0, 0, 0, 5, 6, 0, 0, 0 },
{ 0, 0, 8, 8, 8, 8, 8, 0 },
{ 0, 0, 3, 3, 0, 0, 0, 0 },
{ 0, 0, 1, 6, 8, 48, 64, 0 },
{ 0, 0, 62, 69, 73, 81, 62, 0 },
{ 0, 0, 0, 33, 127, 1, 0, 0 },
{ 0, 0, 35, 69, 73, 49, 0, 0 },
{ 0, 0, 73, 73, 73, 54, 0, 0 },
{ 0, 0, 120, 8, 8, 127, 8, 0 },
{ 0, 0, 0, 121, 73, 73, 70, 0 },
{ 0, 0, 62, 73, 73, 73, 6, 0 },
{ 0, 0, 0, 67, 68, 72, 112, 0 },
{ 0, 0, 54, 73, 73, 73, 54, 0 },
{ 0, 0, 48, 73, 73, 73, 62, 0 },
{ 0, 0, 0, 36, 36, 0, 0, 0 },
{ 0, 0, 37, 38, 0, 0, 0, 0 },
{ 0, 0, 8, 20, 34, 0, 0, 0 },
{ 0, 0, 18, 18, 18, 18, 18, 0 },
{ 0, 0, 0, 0, 34, 20, 8, 0 },
{ 0, 0, 0, 64, 77, 72, 48, 0 },
{ 0, 0, 62, 65, 93, 85, 60, 0 },
{ 0, 0, 63, 68, 68, 68, 63, 0 },
{ 0, 0, 127, 73, 73, 73, 54, 0 },
{ 0, 0, 62, 65, 65, 65, 0, 0 },
{ 0, 0, 127, 65, 65, 65, 62, 0 },
{ 0, 0, 127, 73, 73, 73, 0, 0 },
{ 0, 0, 127, 72, 72, 72, 0, 0 },
{ 0, 0, 62, 65, 73, 73, 14, 0 },
{ 0, 0, 127, 8, 8, 8, 127, 0 },
{ 0, 0, 0, 65, 127, 65, 0, 0 },
{ 0, 0, 0, 65, 65, 126, 0, 0 },
{ 0, 0, 127, 8, 8, 20, 99, 0 },
{ 0, 0, 127, 1, 1, 1, 0, 0 },
{ 0, 127, 64, 48, 8, 48, 64, 127 },
{ 0, 0, 127, 32, 28, 2, 127, 0 },
{ 0, 0, 62, 65, 65, 65, 62, 0 },
{ 0, 0, 127, 68, 68, 68, 56, 0 },
{ 0, 0, 62, 65, 65, 71, 63, 1 },
{ 0, 0, 127, 72, 72, 76, 51, 0 },
{ 0, 0, 48, 73, 73, 73, 6, 0 },
{ 0, 0, 64, 64, 127, 64, 64, 0 },
{ 0, 0, 126, 1, 1, 1, 126, 0 },
{ 0, 0, 124, 2, 1, 2, 124, 0 },
{ 0, 120, 6, 1, 14, 1, 6, 120 },
{ 0, 0, 99, 20, 8, 20, 99, 0 },
{ 0, 0, 96, 16, 15, 16, 96, 0 },
{ 0, 0, 67, 69, 73, 113, 0, 0 },
{ 0, 0, 127, 65, 65, 0, 0, 0 },
{ 0, 0, 0, 112, 8, 7, 0, 0 },
{ 0, 0, 0, 65, 65, 127, 0, 0 },
{ 0, 0, 48, 64, 48, 0, 0, 0 },
{ 0, 0, 1, 1, 1, 1, 1, 0 },
{ 0, 0, 64, 48, 0, 0, 0, 0 },
{ 0, 0, 6, 41, 41, 41, 31, 0 },
{ 0, 0, 127, 9, 9, 9, 6, 0 },
{ 0, 0, 14, 17, 17, 17, 0, 0 },
{ 0, 0, 6, 9, 9, 9, 127, 0 },
{ 0, 0, 30, 37, 37, 37, 25, 0 },
{ 0, 0, 8, 63, 72, 72, 0, 0 },
{ 0, 0, 25, 37, 37, 37, 30, 0 },
{ 0, 0, 127, 8, 8, 8, 7, 0 },
{ 0, 0, 0, 0, 47, 0, 0, 0 },
{ 0, 0, 1, 1, 94, 0, 0, 0 },
{ 0, 0, 127, 4, 4, 27, 0, 0 },
{ 0, 0, 0, 64, 127, 0, 0, 0 },
{ 0, 15, 16, 16, 15, 16, 16, 15 },
{ 0, 0, 31, 16, 16, 16, 15, 0 },
{ 0, 0, 14, 17, 17, 17, 14, 0 },
{ 0, 0, 63, 72, 72, 48, 0, 0 },
{ 0, 0, 24, 36, 36, 31, 0, 0 },
{ 0, 0, 15, 16, 16, 8, 0, 0 },
{ 0, 0, 8, 21, 21, 21, 2, 0 },
{ 0, 0, 0, 8, 31, 9, 0, 0 },
{ 0, 0, 30, 1, 1, 1, 31, 0 },
{ 0, 0, 28, 2, 1, 2, 28, 0 },
{ 0, 30, 1, 2, 4, 2, 1, 30 },
{ 0, 0, 17, 10, 4, 10, 17, 0 },
{ 0, 0, 0, 25, 5, 5, 30, 0 },
{ 0, 0, 19, 21, 21, 25, 0, 0 },
{ 0, 0, 8, 54, 65, 0, 0, 0 },
{ 0, 0, 0, 0, 119, 0, 0, 0 },
{ 0, 0, 0, 0, 65, 54, 8, 0 },
{ 0, 8, 16, 16, 8, 4, 4, 8 },
{ 0, 0, 0, 0, 0, 0, 0, 0 }
};

// Função para acessar os dados na memória flash
byte getCharByte(char c, int index) {
    return pgm_read_byte(&chars[c][index]);
}

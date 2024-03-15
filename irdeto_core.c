#include "irdeto_core.h"
#include <avr/pgmspace.h>

const uint8_t table1[256] PROGMEM = {
0xDA,0x26,0xE8,0x72,0x11,0x52,0x3E,0x46,0x32,0xFF,0x8C,0x1E,0xA7,0xBE,0x2C,0x29,
0x5F,0x86,0x7E,0x75,0x0A,0x08,0xA5,0x21,0x61,0xFB,0x7A,0x58,0x60,0xF7,0x81,0x4F,
0xE4,0xFC,0xDF,0xB1,0xBB,0x6A,0x02,0xB3,0x0B,0x6E,0x5D,0x5C,0xD5,0xCF,0xCA,0x2A,
0x14,0xB7,0x90,0xF3,0xD9,0x37,0x3A,0x59,0x44,0x69,0xC9,0x78,0x30,0x16,0x39,0x9A,
0x0D,0x05,0x1F,0x8B,0x5E,0xEE,0x1B,0xC4,0x76,0x43,0xBD,0xEB,0x42,0xEF,0xF9,0xD0,
0x4D,0xE3,0xF4,0x57,0x56,0xA3,0x0F,0xA6,0x50,0xFD,0xDE,0xD2,0x80,0x4C,0xD3,0xCB,
0xF8,0x49,0x8F,0x22,0x71,0x84,0x33,0xE0,0x47,0xC2,0x93,0xBC,0x7C,0x3B,0x9C,0x7D,
0xEC,0xC3,0xF1,0x89,0xCE,0x98,0xA2,0xE1,0xC1,0xF2,0x27,0x12,0x01,0xEA,0xE5,0x9B,
0x25,0x87,0x96,0x7B,0x34,0x45,0xAD,0xD1,0xB5,0xDB,0x83,0x55,0xB0,0x9E,0x19,0xD7,
0x17,0xC6,0x35,0xD8,0xF0,0xAE,0xD4,0x2B,0x1D,0xA0,0x99,0x8A,0x15,0x00,0xAF,0x2D,
0x09,0xA8,0xF5,0x6C,0xA1,0x63,0x67,0x51,0x3C,0xB2,0xC0,0xED,0x94,0x03,0x6F,0xBA,
0x3F,0x4E,0x62,0x92,0x85,0xDD,0xAB,0xFE,0x10,0x2E,0x68,0x65,0xE7,0x04,0xF6,0x0C,
0x20,0x1C,0xA9,0x53,0x40,0x77,0x2F,0xA4,0xFA,0x6D,0x73,0x28,0xE2,0xCD,0x79,0xC8,
0x97,0x66,0x8E,0x82,0x74,0x06,0xC7,0x88,0x1A,0x4A,0x6B,0xCC,0x41,0xE9,0x9D,0xB8,
0x23,0x9F,0x3D,0xBF,0x8D,0x95,0xC5,0x13,0xB9,0x24,0x5A,0xDC,0x64,0x18,0x38,0x91,
0x7F,0x5B,0x70,0x54,0x07,0xB6,0x4B,0x0E,0x36,0xAC,0x31,0xE6,0xD6,0x48,0xAA,0xB4
};

const uint8_t table2[256] PROGMEM = {
0x8E,0xD5,0x32,0x53,0x4B,0x18,0x7F,0x95,0xBE,0x30,0xF3,0xE0,0x22,0xE1,0x68,0x90,
0x82,0xC8,0xA8,0x57,0x21,0xC5,0x38,0x73,0x61,0x5D,0x5A,0xD6,0x60,0xB7,0x48,0x70,
0x2B,0x7A,0x1D,0xD1,0xB1,0xEC,0x7C,0xAA,0x2F,0x1F,0x37,0x58,0x72,0x88,0xFF,0x87,
0x1C,0xCB,0x00,0xE6,0x4E,0xAB,0xEB,0xB3,0xF7,0x59,0x71,0x6A,0x64,0x2A,0x55,0x4D,
0xFC,0xC0,0x51,0x01,0x2D,0xC4,0x54,0xE2,0x9F,0x26,0x16,0x27,0xF2,0x9C,0x86,0x11,
0x05,0x29,0xA2,0x78,0x49,0xB2,0xA6,0xCA,0x96,0xE5,0x33,0x3F,0x46,0xBA,0xD0,0xBB,
0x5F,0x84,0x98,0xE4,0xF9,0x0A,0x62,0xEE,0xF6,0xCF,0x94,0xF0,0xEA,0x1E,0xBF,0x07,
0x9B,0xD9,0xE9,0x74,0xC6,0xA4,0xB9,0x56,0x3E,0xDB,0xC7,0x15,0xE3,0x80,0xD7,0xED,
0xEF,0x13,0xAC,0xA1,0x91,0xC2,0x89,0x5B,0x08,0x0B,0x4C,0x02,0x3A,0x5C,0xA9,0x3B,
0xCE,0x6B,0xA7,0xE7,0xCD,0x7B,0xA0,0x47,0x09,0x6D,0xF8,0xF1,0x8B,0xB0,0x12,0x42,
0x4A,0x9A,0x17,0xB4,0x7E,0xAD,0xFE,0xFD,0x2C,0xD3,0xF4,0xB6,0xA3,0xFA,0xDF,0xB8,
0xD4,0xDA,0x0F,0x50,0x93,0x66,0x6C,0x20,0xD8,0x8A,0xDD,0x31,0x1A,0x8C,0x06,0xD2,
0x44,0xE8,0x23,0x43,0x6E,0x10,0x69,0x36,0xBC,0x19,0x8D,0x24,0x81,0x14,0x40,0xC9,
0x6F,0x2E,0x45,0x52,0x41,0x92,0x34,0xFB,0x5E,0x0D,0xF5,0x76,0x25,0x77,0x63,0x65,
0xAF,0x4F,0xCC,0x03,0x9D,0x0C,0x28,0x39,0x85,0xDE,0xB5,0x7D,0x67,0x83,0xBD,0xC3,
0xDC,0x3C,0xAE,0x99,0x04,0x75,0x8F,0x97,0xC1,0xA5,0x9E,0x35,0x0E,0x3D,0x1B,0x79
};

static uint8_t ttt[24] = {
0,1,2,3,4,5,6,7,0,1,2,3,4,5,6,7,0,3,6,1,4,7,2,5
};


void ror(uint8_t *wert) {
int k ,t;
	t = wert[9];
	for (k = 9; k >= 1; k--){
	wert[k] = ((wert[k] & 0xFE) / 2) | ((wert[k - 1] & 0x1) * 0x80);
	}
	wert[0] = ((wert[0] & 0xFE) / 2) | ((t & 0x1) * 0x80);
}

/*
void rol(uint8_t *wert){
 	int k,t;
	t = wert[0];
	for (k = 0;k<9;k++) {
	wert[k] = ((wert[k] & 0x7F) * 2) | ((wert[k + 1] & 0x80) / 0x80);
	}
	wert[9] = ((wert[9] & 0x7F) * 2) | ((t & 0x80) / 0x80);
}
*/

void decrypt(uint8_t *klo,uint8_t *keys, int runden, int start, int pposition) {
uint8_t i;
uint8_t temp[10];
for (i = 0; i < 10; i++) { temp[i] = keys[i];}
for (i = 0; i <= runden; i++) {
if ((i % 10) == 0) {ror(temp);}

if ((temp[(i % 10)] & 1) == 1 ) {
    klo[ttt[((i + 1) % 16) + start] + pposition] ^= pgm_read_byte(&table1[klo[ttt[(i % 16) + start] + pposition] ^ temp[i % 10]]);
    }
else{
    klo[ttt[((i + 1) % 16) + start] + pposition] ^= pgm_read_byte(&table2[klo[ttt[(i % 16) + start] + pposition] ^ temp[i % 10]]);
    }
}
}

/*
void encrypt(uint8_t *klo,uint8_t *keys, int runden, int start, int pposition){
uint8_t i;
for (i=0; i <13;i++){ror(keys);}
uint8_t temp[10];

for (i = 0;i <10; i++){temp[i] = keys[i];}

for (i=runden;i>=0;i--) {
if ((temp[(i % 10)] & 1) == 1 ) {
		klo[ttt[((i + 1) % 16) + start] + pposition] ^= table1[klo[ttt[(i % 16) + start] + pposition] ^ temp[i % 10]];
}
else{
		klo[ttt[((i + 1) % 16) + start] + pposition] ^= table2[klo[ttt[(i % 16) + start] + pposition] ^ temp[i % 10]];
}
if ((i % 10) == 0) {rol(temp);}
}
}
*/

void sign(uint8_t *signaturnew, uint8_t *wert, uint8_t *zplainkey, int start) {
    uint8_t a,b,i,s;
    int langstr = wert[start] -5;
    for (i = 0;i <=7;i++){signaturnew[i] = 0;}
    a = start + 1;
    while (langstr > 0) {
        b = 39;
        if (langstr < 8){b = 103;}
        for (i = 0; i <= langstr; i++) {wert[a + langstr + i] = 0x61 + i;}
        for (s = 0; s <= 7; s++){signaturnew[s] ^= wert[a];a++; langstr--;}
        decrypt(signaturnew,zplainkey,b,0,0);
        for (i = 0 ; i <=4;i++) {ror(zplainkey);}
    }
}

void XRotateLeft8Byte(uint8_t *buf)
{
int32_t k;
uint8_t t1 = buf[7];
uint8_t t2 = 0;
for(k = 0; k <= 7; k++)
{
t2 = t1;
t1 = buf[k];
buf[k] = (buf[k] << 1) | (t2 >> 7);
}
}

void XRotateRight8Byte(uint8_t *buf)
{
int32_t k;
uint8_t t1 = buf[0];
uint8_t t2 = 0;

for(k = 7; k >= 0; k--)
{
t2 = t1;
t1 = buf[k];
buf[k] = (buf[k] >> 1) | (t2 << 7);
}
}

/*
void revcamcrypt(uint8_t *camkey, uint8_t *key)
{
uint8_t localkey[8], tmp1, tmp2,i;
int32_t idx1, idx2;

//memcpy(localkey, camkey, 8) ;
for(i = 0; i <8;i++){localkey[i] = camkey[i];}

for(idx1 = 0; idx1 < 8; idx1++)
{
for(idx2 = 0; idx2 < 8; idx2++)
{
tmp1 = table1[key[7] ^ localkey[idx2] ^ idx1] ;
tmp2 = key[0] ;
key[0] = key[1] ;
key[1] = key[2] ;
key[2] = key[3] ;
key[3] = key[4] ;
key[4] = key[5] ;
key[5] = key[6] ^ tmp1 ;
key[6] = key[7] ;
key[7] = tmp1 ^ tmp2 ;

tmp1 = table1[key[15] ^ localkey[idx2] ^ idx1] ;
tmp2 = key[8] ;
key[8] = key[9] ;
key[9] = key[10] ;
key[10] = key[11] ;
key[11] = key[12] ;
key[12] = key[13] ;
key[13] = key[14] ^ tmp1 ;
key[14] = key[15] ;
key[15] = tmp1 ^ tmp2 ;

}
XRotateLeft8Byte(localkey);
}
}
*/

void camcrypt(uint8_t *camkey, uint8_t *key)
{
uint8_t localkey[8], tmp1, tmp2,i;
int32_t idx1, idx2;
for(i = 0; i <8;i++){localkey[i] = camkey[i];}

for(i = 0 ; i < 7;i++){XRotateLeft8Byte(localkey);}

for(idx1 = 7; idx1 >=0; idx1--)
{
for(idx2 = 7; idx2 >=0; idx2--)
{
tmp1 = pgm_read_byte(&table1[key[6] ^ localkey[idx2] ^ idx1]);
tmp2 = key[0] ;
key[0] = key[7] ^ tmp1 ;
key[7] = key[6] ;
key[6] = key[5] ^ tmp1 ;
key[5] = key[4] ;
key[4] = key[3] ;
key[3] = key[2];
key[2] = key[1] ;
key[1] = tmp2;

tmp1 = pgm_read_byte(&table1[key[14] ^ localkey[idx2] ^ idx1]);
tmp2 = key[8] ;
key[8] = key[15] ^ tmp1 ;
key[15] = key[14] ;
key[14] = key[13] ^ tmp1 ;
key[13] = key[12] ;
key[12] = key[11] ;
key[11] = key[10];
key[10] = key[9] ;
key[9] = tmp2;

}
XRotateRight8Byte(localkey);
}
}

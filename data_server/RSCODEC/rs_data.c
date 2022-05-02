/*NPAR:16 RS_MAX_CODE_SIZE:256 */
const unsigned char gexp[512]={
0x01,0x02,0x04,0x08,0x10,0x20,0x40,0x80,0x1D,0x3A,0x74,0xE8,0xCD,0x87,0x13,0x26,
0x4C,0x98,0x2D,0x5A,0xB4,0x75,0xEA,0xC9,0x8F,0x03,0x06,0x0C,0x18,0x30,0x60,0xC0,
0x9D,0x27,0x4E,0x9C,0x25,0x4A,0x94,0x35,0x6A,0xD4,0xB5,0x77,0xEE,0xC1,0x9F,0x23,
0x46,0x8C,0x05,0x0A,0x14,0x28,0x50,0xA0,0x5D,0xBA,0x69,0xD2,0xB9,0x6F,0xDE,0xA1,
0x5F,0xBE,0x61,0xC2,0x99,0x2F,0x5E,0xBC,0x65,0xCA,0x89,0x0F,0x1E,0x3C,0x78,0xF0,
0xFD,0xE7,0xD3,0xBB,0x6B,0xD6,0xB1,0x7F,0xFE,0xE1,0xDF,0xA3,0x5B,0xB6,0x71,0xE2,
0xD9,0xAF,0x43,0x86,0x11,0x22,0x44,0x88,0x0D,0x1A,0x34,0x68,0xD0,0xBD,0x67,0xCE,
0x81,0x1F,0x3E,0x7C,0xF8,0xED,0xC7,0x93,0x3B,0x76,0xEC,0xC5,0x97,0x33,0x66,0xCC,
0x85,0x17,0x2E,0x5C,0xB8,0x6D,0xDA,0xA9,0x4F,0x9E,0x21,0x42,0x84,0x15,0x2A,0x54,
0xA8,0x4D,0x9A,0x29,0x52,0xA4,0x55,0xAA,0x49,0x92,0x39,0x72,0xE4,0xD5,0xB7,0x73,
0xE6,0xD1,0xBF,0x63,0xC6,0x91,0x3F,0x7E,0xFC,0xE5,0xD7,0xB3,0x7B,0xF6,0xF1,0xFF,
0xE3,0xDB,0xAB,0x4B,0x96,0x31,0x62,0xC4,0x95,0x37,0x6E,0xDC,0xA5,0x57,0xAE,0x41,
0x82,0x19,0x32,0x64,0xC8,0x8D,0x07,0x0E,0x1C,0x38,0x70,0xE0,0xDD,0xA7,0x53,0xA6,
0x51,0xA2,0x59,0xB2,0x79,0xF2,0xF9,0xEF,0xC3,0x9B,0x2B,0x56,0xAC,0x45,0x8A,0x09,
0x12,0x24,0x48,0x90,0x3D,0x7A,0xF4,0xF5,0xF7,0xF3,0xFB,0xEB,0xCB,0x8B,0x0B,0x16,
0x2C,0x58,0xB0,0x7D,0xFA,0xE9,0xCF,0x83,0x1B,0x36,0x6C,0xD8,0xAD,0x47,0x8E,0x01,
0x02,0x04,0x08,0x10,0x20,0x40,0x80,0x1D,0x3A,0x74,0xE8,0xCD,0x87,0x13,0x26,0x4C,
0x98,0x2D,0x5A,0xB4,0x75,0xEA,0xC9,0x8F,0x03,0x06,0x0C,0x18,0x30,0x60,0xC0,0x9D,
0x27,0x4E,0x9C,0x25,0x4A,0x94,0x35,0x6A,0xD4,0xB5,0x77,0xEE,0xC1,0x9F,0x23,0x46,
0x8C,0x05,0x0A,0x14,0x28,0x50,0xA0,0x5D,0xBA,0x69,0xD2,0xB9,0x6F,0xDE,0xA1,0x5F,
0xBE,0x61,0xC2,0x99,0x2F,0x5E,0xBC,0x65,0xCA,0x89,0x0F,0x1E,0x3C,0x78,0xF0,0xFD,
0xE7,0xD3,0xBB,0x6B,0xD6,0xB1,0x7F,0xFE,0xE1,0xDF,0xA3,0x5B,0xB6,0x71,0xE2,0xD9,
0xAF,0x43,0x86,0x11,0x22,0x44,0x88,0x0D,0x1A,0x34,0x68,0xD0,0xBD,0x67,0xCE,0x81,
0x1F,0x3E,0x7C,0xF8,0xED,0xC7,0x93,0x3B,0x76,0xEC,0xC5,0x97,0x33,0x66,0xCC,0x85,
0x17,0x2E,0x5C,0xB8,0x6D,0xDA,0xA9,0x4F,0x9E,0x21,0x42,0x84,0x15,0x2A,0x54,0xA8,
0x4D,0x9A,0x29,0x52,0xA4,0x55,0xAA,0x49,0x92,0x39,0x72,0xE4,0xD5,0xB7,0x73,0xE6,
0xD1,0xBF,0x63,0xC6,0x91,0x3F,0x7E,0xFC,0xE5,0xD7,0xB3,0x7B,0xF6,0xF1,0xFF,0xE3,
0xDB,0xAB,0x4B,0x96,0x31,0x62,0xC4,0x95,0x37,0x6E,0xDC,0xA5,0x57,0xAE,0x41,0x82,
0x19,0x32,0x64,0xC8,0x8D,0x07,0x0E,0x1C,0x38,0x70,0xE0,0xDD,0xA7,0x53,0xA6,0x51,
0xA2,0x59,0xB2,0x79,0xF2,0xF9,0xEF,0xC3,0x9B,0x2B,0x56,0xAC,0x45,0x8A,0x09,0x12,
0x24,0x48,0x90,0x3D,0x7A,0xF4,0xF5,0xF7,0xF3,0xFB,0xEB,0xCB,0x8B,0x0B,0x16,0x2C,
0x58,0xB0,0x7D,0xFA,0xE9,0xCF,0x83,0x1B,0x36,0x6C,0xD8,0xAD,0x47,0x8E,0x01,0x00 
};
const unsigned char glog[256]={
0x00,0x00,0x01,0x19,0x02,0x32,0x1A,0xC6,0x03,0xDF,0x33,0xEE,0x1B,0x68,0xC7,0x4B,
0x04,0x64,0xE0,0x0E,0x34,0x8D,0xEF,0x81,0x1C,0xC1,0x69,0xF8,0xC8,0x08,0x4C,0x71,
0x05,0x8A,0x65,0x2F,0xE1,0x24,0x0F,0x21,0x35,0x93,0x8E,0xDA,0xF0,0x12,0x82,0x45,
0x1D,0xB5,0xC2,0x7D,0x6A,0x27,0xF9,0xB9,0xC9,0x9A,0x09,0x78,0x4D,0xE4,0x72,0xA6,
0x06,0xBF,0x8B,0x62,0x66,0xDD,0x30,0xFD,0xE2,0x98,0x25,0xB3,0x10,0x91,0x22,0x88,
0x36,0xD0,0x94,0xCE,0x8F,0x96,0xDB,0xBD,0xF1,0xD2,0x13,0x5C,0x83,0x38,0x46,0x40,
0x1E,0x42,0xB6,0xA3,0xC3,0x48,0x7E,0x6E,0x6B,0x3A,0x28,0x54,0xFA,0x85,0xBA,0x3D,
0xCA,0x5E,0x9B,0x9F,0x0A,0x15,0x79,0x2B,0x4E,0xD4,0xE5,0xAC,0x73,0xF3,0xA7,0x57,
0x07,0x70,0xC0,0xF7,0x8C,0x80,0x63,0x0D,0x67,0x4A,0xDE,0xED,0x31,0xC5,0xFE,0x18,
0xE3,0xA5,0x99,0x77,0x26,0xB8,0xB4,0x7C,0x11,0x44,0x92,0xD9,0x23,0x20,0x89,0x2E,
0x37,0x3F,0xD1,0x5B,0x95,0xBC,0xCF,0xCD,0x90,0x87,0x97,0xB2,0xDC,0xFC,0xBE,0x61,
0xF2,0x56,0xD3,0xAB,0x14,0x2A,0x5D,0x9E,0x84,0x3C,0x39,0x53,0x47,0x6D,0x41,0xA2,
0x1F,0x2D,0x43,0xD8,0xB7,0x7B,0xA4,0x76,0xC4,0x17,0x49,0xEC,0x7F,0x0C,0x6F,0xF6,
0x6C,0xA1,0x3B,0x52,0x29,0x9D,0x55,0xAA,0xFB,0x60,0x86,0xB1,0xBB,0xCC,0x3E,0x5A,
0xCB,0x59,0x5F,0xB0,0x9C,0xA9,0xA0,0x51,0x0B,0xF5,0x16,0xEB,0x7A,0x75,0x2C,0xD7,
0x4F,0xAE,0xD5,0xE9,0xE6,0xE7,0xAD,0xE8,0x74,0xD6,0xF4,0xEA,0xA8,0x50,0x58,0xAF 
};
const unsigned char genPoly[64]={
0x4F,0x2C,0x51,0x64,0x31,0xB7,0x38,0x11,0xE8,0xBB,0x7E,0x68,0x1F,0x67,0x34,0x76,
0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00 
};

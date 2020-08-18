#include "font.h"

//������6λ����
unsigned char code wordMessage[][32] = 
{
{0x40,0x42,0xCC,0x00,0x00,0x44,0x54,0x54,0x54,0x7F,0x54,0x54,0x54,0x44,0x40,0x00},
{0x00,0x00,0x7F,0x20,0x10,0x00,0xFF,0x15,0x15,0x15,0x55,0x95,0x7F,0x00,0x00,0x00},  /*��*/

{0x88,0x68,0x1F,0xC8,0x08,0x10,0xC8,0x54,0x52,0xD1,0x12,0x94,0x08,0xD0,0x10,0x00},
{0x09,0x19,0x09,0xFF,0x05,0x00,0xFF,0x12,0x92,0xFF,0x00,0x5F,0x80,0x7F,0x00,0x00}, /*��*/

{0x00,0x00,0x00,0x00,0x00,0x01,0xE2,0x1C,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x80,0x40,0x20,0x10,0x0C,0x03,0x00,0x00,0x00,0x03,0x0C,0x30,0x40,0x80,0x80,0x00},  /*��*/

{0x00,0x00,0x00,0xFE,0xFE,0xC6,0xC6,0xC6,0xC6,0xCE,0xCE,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x3F,0x3F,0x30,0x30,0x30,0x30,0x3F,0x3F,0x00,0x00,0x00,0x00,0x00},  /*6*/

{0x00,0x80,0x60,0xF8,0x07,0x10,0x90,0x10,0x11,0x16,0x10,0x10,0xD0,0x10,0x00,0x00},  /*λ*/
{0x01,0x00,0x00,0xFF,0x40,0x40,0x41,0x5E,0x40,0x40,0x70,0x4E,0x41,0x40,0x40,0x00},



{0x10,0x8C,0x44,0x04,0xE4,0x04,0x95,0xA6,0x44,0x24,0x14,0x84,0x44,0x94,0x0C,0x00},
{0x02,0x02,0x7A,0x41,0x41,0x43,0x42,0x7E,0x42,0x42,0x42,0x43,0xF8,0x00,0x00,0x00}, /*��*/

{0x04,0x84,0xE4,0x5C,0x44,0xC4,0x00,0x02,0xF2,0x82,0x82,0x82,0xFE,0x80,0x80,0x00},
{0x02,0x01,0x7F,0x10,0x10,0x3F,0x00,0x08,0x08,0x08,0x08,0x48,0x88,0x40,0x3F,0x00} /*��*/
};

//�� ��
unsigned char code newAndold[][32] = 
{
{0x40,0x44,0x54,0x65,0xC6,0x64,0x54,0x44,0x00,0xFC,0x44,0x44,0xC4,0x42,0x40,0x00},
{0x20,0x12,0x4A,0x82,0x7F,0x02,0x0A,0x92,0x60,0x1F,0x00,0x00,0xFF,0x00,0x00,0x00},

{0x00,0x00,0xFF,0x00,0x00,0x00,0xFE,0x82,0x82,0x82,0x82,0x82,0x82,0xFE,0x00,0x00},
{0x00,0x00,0xFF,0x00,0x00,0x00,0x7F,0x20,0x20,0x20,0x20,0x20,0x20,0x7F,0x00,0x00}
};

//�������
unsigned char code errorMessage[][32] =
{
{0x10,0x8C,0x44,0x04,0xE4,0x04,0x95,0xA6,0x44,0x24,0x14,0x84,0x44,0x94,0x0C,0x00},
{0x02,0x02,0x7A,0x41,0x41,0x43,0x42,0x7E,0x42,0x42,0x42,0x43,0xF8,0x00,0x00,0x00}, /*��*/

{0x04,0x84,0xE4,0x5C,0x44,0xC4,0x00,0x02,0xF2,0x82,0x82,0x82,0xFE,0x80,0x80,0x00},
{0x02,0x01,0x7F,0x10,0x10,0x3F,0x00,0x08,0x08,0x08,0x08,0x48,0x88,0x40,0x3F,0x00}, /*��*/

{0x40,0x30,0xEF,0x24,0x64,0x48,0x48,0x7F,0x48,0x48,0x48,0x7F,0x48,0x48,0x40,0x00},  /*��*/
{0x01,0x01,0x7F,0x21,0x11,0x00,0xFF,0x49,0x49,0x49,0x49,0x49,0xFF,0x00,0x00,0x00},

{0x40,0x42,0xCC,0x00,0x00,0x80,0x9E,0x92,0x92,0x92,0x92,0x92,0x9E,0x80,0x00,0x00},  /*��*/
{0x00,0x00,0x7F,0x20,0x94,0x84,0x44,0x24,0x14,0x0F,0x14,0x24,0x44,0x84,0x84,0x00}
};

//0 -- 9
unsigned char code Number[][32] = 
{
{0x00,0x00,0x00,0xE0,0xF0,0x18,0x1C,0x1C,0x1C,0x18,0xF0,0xE0,0x00,0x00,0x00,0x00},   /*0*/
{0x00,0x00,0x00,0x1F,0x3F,0x30,0x70,0x70,0x70,0x30,0x3F,0x1F,0x00,0x00,0x00,0x00},

{0x00,0x00,0x00,0x00,0x3C,0x3C,0x0C,0xFC,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00},  /*1*/
{0x00,0x00,0x00,0x30,0x30,0x30,0x30,0x3F,0x3F,0x30,0x30,0x30,0x00,0x00,0x00,0x00},

{0x00,0x00,0x00,0x00,0x8C,0x8C,0x8C,0x8C,0xFC,0xFC,0x00,0x00,0x00,0x00,0x00,0x00},   /*2*/
{0x00,0x00,0x00,0x00,0x3F,0x3F,0x31,0x31,0x31,0x31,0x00,0x00,0x00,0x00,0x00,0x00},

{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x08,0x08,0x08,0x88,0x70,0x00},  /*3*/
{0x00,0x00,0x18,0x20,0x21,0x21,0x22,0x1C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},

{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x40,0x30,0xF8,0x00,0x00}, /*4*/
{0x00,0x06,0x05,0x24,0x24,0x3F,0x24,0x24,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},



{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF8,0x88,0x88,0x88,0x08,0x08,0x00}, /*5*/
{0x00,0x19,0x20,0x20,0x20,0x11,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},

{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0x10,0x88,0x88,0x90,0x00,0x00}, /*6*/
{0x00,0x0F,0x11,0x20,0x20,0x20,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},

{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x08,0x08,0x88,0x68,0x18,0x00}, /*7*/
{0x00,0x00,0x00,0x3E,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},

{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x70,0x88,0x08,0x08,0x88,0x70,0x00}, /*8*/
{0x00,0x1C,0x22,0x21,0x21,0x22,0x1C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},

{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0x08,0x08,0x08,0x10,0xE0,0x00}, /*9*/
{0x00,0x01,0x12,0x22,0x22,0x11,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}
};

//*
unsigned char code maskMessage[][32] = 
{
{0x00,0x00,0x80,0x88,0x90,0xA0,0xC0,0xFC,0xC0,0xA0,0x90,0x88,0x80,0x80,0x00,0x00},
{0x00,0x00,0x00,0x08,0x04,0x02,0x01,0x3F,0x01,0x02,0x04,0x08,0x00,0x00,0x00,0x00}
};

/*�밴����ָ*/
unsigned char code mikorMessage[][32] = 
{
{0x40,0x42,0xCC,0x00,0x00,0x44,0x54,0x54,0x54,0x7F,0x54,0x54,0x54,0x44,0x40,0x00},   
{0x00,0x00,0x7F,0x20,0x10,0x00,0xFF,0x15,0x15,0x15,0x55,0x95,0x7F,0x00,0x00,0x00},

{0x10,0x10,0x10,0xFF,0x90,0x20,0x98,0x88,0x88,0xE9,0x8E,0x88,0x88,0xA8,0x98,0x00},
{0x02,0x42,0x81,0x7F,0x00,0x00,0x80,0x84,0x4B,0x28,0x10,0x28,0x47,0x80,0x00,0x00},

{0x02,0x02,0x02,0x02,0x02,0x02,0xFE,0x02,0x02,0x42,0x82,0x02,0x02,0x02,0x02,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x01,0x06,0x00,0x00,0x00},

{0x00,0x00,0x24,0x24,0x24,0x24,0x24,0xFC,0x22,0x22,0x22,0x23,0x22,0x00,0x00,0x00},
{0x02,0x02,0x02,0x02,0x02,0x42,0x82,0x7F,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x00},

{0x10,0x10,0x10,0xFF,0x10,0x90,0x00,0x3F,0x48,0x48,0x44,0x44,0x44,0x42,0x70,0x00},
{0x04,0x44,0x82,0x7F,0x01,0x00,0x00,0xFF,0x49,0x49,0x49,0x49,0x49,0xFF,0x00,0x00}

};

//�޸ĳɹ�
unsigned char code ChangeMessage[][32] = 
{
{0x40,0x20,0xF8,0x07,0xF0,0xA0,0x90,0x4C,0x57,0x24,0xA4,0x54,0x4C,0x80,0x80,0x00},
{0x00,0x00,0xFF,0x00,0x1F,0x80,0x92,0x52,0x49,0x29,0x24,0x12,0x08,0x00,0x00,0x00},

{0x04,0x84,0x84,0x84,0x84,0xFC,0x40,0x30,0xCC,0x0B,0x08,0x08,0xF8,0x08,0x08,0x00},
{0x00,0x7F,0x20,0x10,0x10,0x08,0x80,0x40,0x21,0x16,0x08,0x16,0x21,0x40,0x80,0x00},

{0x00,0x00,0xF8,0x88,0x88,0x88,0x88,0x08,0x08,0xFF,0x08,0x09,0x0A,0xC8,0x08,0x00},
{0x80,0x60,0x1F,0x00,0x10,0x20,0x1F,0x80,0x40,0x21,0x16,0x18,0x26,0x41,0xF8,0x00},

{0x08,0x08,0x08,0xF8,0x08,0x08,0x08,0x10,0x10,0xFF,0x10,0x10,0x10,0xF0,0x00,0x00},
{0x10,0x30,0x10,0x1F,0x08,0x88,0x48,0x30,0x0E,0x01,0x40,0x80,0x40,0x3F,0x00,0x00}
};

//¼��ɹ�
unsigned char code OkMessage[][32] = 
{
{0x80,0x80,0x82,0x92,0x92,0x92,0x92,0x92,0x92,0x92,0x92,0xFE,0x80,0x80,0x80,0x00},
{0x40,0x40,0x22,0x24,0x10,0x48,0x80,0x7F,0x04,0x08,0x18,0x24,0x22,0x40,0x40,0x00},
	
{0x80,0x80,0x82,0x92,0x92,0x92,0x92,0x92,0x92,0x92,0x92,0xFE,0x80,0x80,0x80,0x00},
{0x40,0x40,0x22,0x24,0x10,0x48,0x80,0x7F,0x04,0x08,0x18,0x24,0x22,0x40,0x40,0x00},

{0x00,0x00,0x00,0x00,0x00,0x01,0xE2,0x1C,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x80,0x40,0x20,0x10,0x0C,0x03,0x00,0x00,0x00,0x03,0x0C,0x30,0x40,0x80,0x80,0x00},

{0x08,0x08,0x08,0xF8,0x08,0x08,0x08,0x10,0x10,0xFF,0x10,0x10,0x10,0xF0,0x00,0x00},
{0x10,0x30,0x10,0x1F,0x08,0x88,0x48,0x30,0x0E,0x01,0x40,0x80,0x40,0x3F,0x00,0x00}
};
//��������
unsigned char code super[][32] =
{
{0x40,0x48,0x48,0x48,0xFF,0x48,0x48,0x42,0xA2,0x9E,0x82,0xA2,0xC2,0xBE,0x00,0x00},
{0x80,0x60,0x1F,0x20,0x7F,0x44,0x44,0x40,0x4F,0x48,0x48,0x48,0x48,0x4F,0x40,0x00},

{0x20,0x30,0xAC,0x63,0x30,0x00,0x02,0x02,0xFE,0x02,0x02,0x62,0x5A,0xC6,0x00,0x00},
{0x22,0x67,0x22,0x12,0x12,0x40,0x30,0x8F,0x80,0x43,0x2C,0x10,0x2C,0x43,0x80,0x00},

{0x10,0x8C,0x44,0x04,0xE4,0x04,0x95,0xA6,0x44,0x24,0x14,0x84,0x44,0x94,0x0C,0x00},
{0x02,0x02,0x7A,0x41,0x41,0x43,0x42,0x7E,0x42,0x42,0x42,0x43,0xF8,0x00,0x00,0x00},

{0x04,0x84,0xE4,0x5C,0x44,0xC4,0x00,0x02,0xF2,0x82,0x82,0x82,0xFE,0x80,0x80,0x00},
{0x02,0x01,0x7F,0x10,0x10,0x3F,0x00,0x08,0x08,0x08,0x08,0x48,0x88,0x40,0x3F,0x00} /*��*/
};

//��ӭ���
unsigned char code entryMessage[][32] = 
{
{0x04,0x24,0x44,0x84,0x64,0x9C,0x40,0x30,0x0F,0xC8,0x08,0x08,0x28,0x18,0x00,0x00},   /*��*/
{0x10,0x08,0x06,0x01,0x82,0x4C,0x20,0x18,0x06,0x01,0x06,0x18,0x20,0x40,0x80,0x00},

{0x40,0x40,0x42,0xCC,0x00,0x00,0xFC,0x04,0x02,0x00,0xFC,0x04,0x04,0xFC,0x00,0x00},
{0x00,0x40,0x20,0x1F,0x20,0x40,0x4F,0x44,0x42,0x40,0x7F,0x42,0x44,0x43,0x40,0x00},    /*ӭ*/

{0x20,0x20,0x20,0x20,0x20,0x20,0x20,0xFF,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x00},
{0x80,0x80,0x40,0x20,0x10,0x0C,0x03,0x00,0x03,0x0C,0x10,0x20,0x40,0x80,0x80,0x00},     /*��*/

{0x00,0x02,0x02,0x7A,0x4A,0x4A,0x4A,0x4A,0x7A,0x02,0x02,0x7E,0x02,0x02,0x00,0x00},    /*��*/
{0x01,0x01,0x01,0x3D,0x25,0x25,0x25,0x25,0x3D,0x41,0x81,0x7F,0x01,0x01,0x01,0x00}
};
/*������ʾ*/
unsigned char code Firstword[] =
{
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x00,0x80,0x80,0x80,
0x80,0x80,0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,
0x70,0x4E,0x41,0x4E,0x70,0xC0,0x00,0x00,0x00,0x00,0x40,0x2B,0xA5,0x11,0x3D,0x31,
0xAB,0x2D,0x2D,0x35,0x03,0x85,0x1B,0x30,0xFC,0x17,0x10,0xF0,0x00,0x9E,0x96,0x90,
0x90,0x9F,0xF0,0x00,0x32,0x2E,0xFB,0xA2,0x86,0xF2,0x56,0xF5,0x04,0xE7,0x02,0xF4,
0x04,0x00,0x00,0x00,0x80,0x60,0x39,0x06,0x18,0x60,0x80,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x38,0x7C,0x7C,0x7C,0x7C,0x7C,0x7C,0x7C,0x7C,0x7C,0x7C,
0x7C,0x7C,0x7C,0x7C,0x7C,0x7C,0x7C,0x7C,0x7C,0x7C,0x7C,0x7C,0x7C,0x7C,0x7E,0x7D,
0x7C,0x7C,0x7C,0x7C,0x7C,0x39,0x02,0x00,0x03,0x03,0x00,0x80,0x03,0x02,0x82,0x02,
0x03,0x02,0x02,0x82,0x82,0x07,0x00,0x00,0x07,0x82,0x02,0x07,0x00,0x00,0x80,0x04,
0x04,0x04,0x07,0x00,0x01,0x81,0x07,0x00,0x00,0x07,0x05,0x87,0x00,0x05,0x04,0x07,
0x00,0x04,0x02,0x03,0x81,0x00,0x00,0x00,0x00,0x00,0x01,0x03,0x06,0x04,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF8,0x86,
0x02,0x01,0x01,0x01,0x02,0x00,0x00,0x00,0x00,0x42,0x22,0xFF,0x12,0x02,0xEF,0xA9,
0xA9,0xA9,0xA9,0xA8,0xE8,0x06,0x00,0x6C,0x5B,0x2C,0xA4,0x82,0x1E,0x32,0xC2,0xC3,
0x32,0x1E,0x02,0x32,0x2E,0xFB,0xA2,0x86,0xF2,0x56,0xF5,0x04,0xE7,0x02,0xF4,0x04,
0x00,0x00,0x00,0x80,0x60,0x39,0x06,0x18,0x60,0x80,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x70,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,
0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF9,
0xFB,0xFA,0xFA,0xFA,0xF9,0x70,0x00,0x03,0x03,0x04,0x04,0x87,0x80,0x00,0x07,0x02,
0x02,0x02,0x82,0x02,0x07,0x00,0x00,0x82,0x81,0x81,0x80,0x84,0x86,0x83,0x81,0x81,
0x81,0x82,0x84,0x05,0x01,0x07,0x00,0x80,0x87,0x85,0x87,0x80,0x85,0x84,0x87,0x00,
0x04,0x02,0x83,0x81,0x80,0x80,0x80,0x00,0x80,0x01,0x03,0x06,0x84,0x00,0x00,0x00,
0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x01,
0x01,0x01,0x01,0x02,0x86,0x78,0x00,0x00,0x00,0x00,0x02,0x0F,0xF5,0x57,0x57,0x55,
0x57,0x57,0x55,0x77,0x05,0x0D,0x01,0x10,0x10,0xFF,0x10,0x00,0xBF,0x92,0x92,0xFF,
0x92,0x92,0xBF,0x00,0x00,0x00,0xF0,0x17,0x14,0x14,0xD4,0x14,0x14,0x14,0x17,0xF0,
0x00,0x10,0x0A,0xFC,0x96,0x97,0x95,0x94,0x95,0x97,0x95,0xFD,0x12,0x12,0x08,0x28,
0x4A,0x8A,0x0A,0x8A,0xFA,0xCA,0x8A,0x8A,0x4F,0x28,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x70,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,
0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xFB,0xFA,
0xFA,0xFA,0xFA,0xF9,0xF9,0x70,0x00,0x00,0x03,0x03,0x00,0x00,0x07,0x05,0x05,0x05,
0x05,0x05,0x05,0x05,0x07,0x00,0x00,0x02,0x02,0x03,0x01,0x05,0x04,0x04,0x04,0x07,
0x04,0x04,0x04,0x04,0x00,0x04,0x05,0x04,0x02,0x02,0x01,0x01,0x02,0x02,0x02,0x05,
0x04,0x04,0x04,0x04,0x05,0x06,0x04,0x04,0x04,0x06,0x05,0x04,0x04,0x04,0x04,0x02,
0x02,0x05,0x05,0x04,0x07,0x00,0x01,0x03,0x02,0x04,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
};
unsigned char code superShow[] =
{
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x80,0x80,
0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x80,0x80,0x00,0x00,
0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x06,
0x02,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x02,0xFF,0x82,0x02,0xEF,0xAF,0xA9,
0xAF,0xAD,0xAB,0xEF,0x00,0x04,0x04,0xFF,0x04,0x04,0xFC,0x00,0xFE,0x02,0x02,0x02,
0xFE,0x00,0x42,0x22,0xFF,0x12,0x02,0xEF,0xA9,0xA9,0xA9,0xA9,0xA8,0xE8,0x06,0x00,
0x6C,0x5B,0x2C,0xA4,0x82,0x1E,0x32,0xC2,0xC3,0x32,0x1E,0x02,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x38,0x7C,0x7C,0x7C,0x7C,0x7C,0x7C,0x7C,0x7C,0x7C,0x7C,
0x7C,0x7C,0x7C,0x7C,0x7C,0x7C,0x7C,0x7C,0x7C,0x7C,0x7C,0x7C,0x7C,0x7C,0x7C,0x7C,
0x7C,0x7F,0x7C,0x7C,0x7C,0x38,0x03,0x03,0x01,0x01,0x00,0x00,0x00,0x07,0x02,0x02,
0x02,0x02,0x02,0x07,0x00,0x04,0x03,0x04,0x04,0x04,0x07,0x00,0x07,0x02,0x02,0x02,
0x07,0x00,0x04,0x04,0x07,0x00,0x00,0x07,0x02,0x02,0x02,0x02,0x02,0x07,0x00,0x00,
0x02,0x01,0x01,0x00,0x04,0x06,0x03,0x01,0x01,0x01,0x02,0x04,0x04,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x02,
0x82,0x42,0x66,0x3C,0x00,0x00,0x00,0x00,0x20,0xFF,0x21,0xFF,0x20,0xFF,0x21,0xFF,
0x20,0xFE,0x00,0xFF,0x00,0x00,0xFF,0x01,0x1D,0xF3,0x58,0x5C,0x53,0xF3,0x56,0x58,
0x48,0x50,0x84,0x44,0xFF,0x24,0x04,0xDF,0x52,0x52,0x52,0x52,0x51,0xD1,0x0C,0x00,
0xD8,0xB6,0x59,0x48,0x04,0x3C,0x64,0x85,0x86,0x64,0x3C,0x04,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x70,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,
0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xFE,0xFD,
0xFC,0xFC,0xFC,0xFC,0xF8,0x70,0x06,0x06,0x0C,0x03,0x08,0x0F,0x0C,0x03,0x08,0x0F,
0x00,0x09,0x08,0x0F,0x00,0x00,0x0F,0x01,0x01,0x05,0x02,0x09,0x08,0x0F,0x00,0x01,
0x02,0x04,0x08,0x08,0x0F,0x00,0x00,0x0F,0x05,0x05,0x05,0x05,0x05,0x0F,0x00,0x00,
0x04,0x02,0x02,0x01,0x09,0x0C,0x06,0x03,0x03,0x02,0x04,0x08,0x08,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x08,0x44,0x44,0xC4,0xB8,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0xFA,0x2A,0x2A,0x2A,
0xFE,0x2A,0x2A,0x2A,0xFA,0x02,0x00,0x00,0xC4,0x44,0x44,0xFC,0x60,0x78,0x8E,0x08,
0x88,0x78,0x08,0x00,0x00,0xAC,0x94,0x44,0xF4,0xC4,0xAE,0xB6,0xB4,0xD4,0x0C,0x14,
0x6C,0xC2,0xF2,0x5E,0x42,0xC2,0x00,0x7A,0x5A,0x42,0x42,0x7E,0xC0,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x70,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,
0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,
0xFC,0xF8,0xF8,0xFC,0xFF,0x70,0x00,0x00,0x0C,0x0C,0x00,0x10,0x13,0x15,0x0D,0x09,
0x0F,0x09,0x11,0x11,0x13,0x10,0x10,0x00,0x1F,0x08,0x04,0x12,0x10,0x08,0x05,0x06,
0x05,0x08,0x10,0x10,0x01,0x00,0x0E,0x08,0x08,0x08,0x0E,0x08,0x08,0x08,0x08,0x1E,
0x00,0x00,0x1F,0x08,0x08,0x1F,0x00,0x02,0x02,0x12,0x12,0x12,0x1F,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
};
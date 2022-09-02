#ifndef _FONT_H_
#define _FONT_H_


unsigned char print[4][175] = {
{/*--  文字:  游	--*/
	/*--  楷体26;  此字体下对应的点阵为：宽x高=36x35   --*/
	/*--  宽度不是8的倍数，现调整为：宽度x高度=40x35  --*/
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x80,0x00,0x00,
	0x00,0x03,0xC0,0x00,0x00,0x07,0x03,0xC0,0x00,0x07,0x87,0x87,0x80,0x00,0x03,0xC3,
	0xC7,0x84,0x00,0x01,0xE3,0xC7,0x3F,0x00,0x01,0xE0,0x0F,0xFE,0x00,0x00,0x00,0x0F,
	0xF0,0x00,0x00,0x00,0xFC,0x00,0x00,0x38,0x07,0xF8,0x00,0x00,0x3C,0x7F,0xE0,0x78,
	0x00,0x1E,0x7E,0x1F,0xFC,0x00,0x0E,0x0F,0x1F,0xFC,0x00,0x0E,0x0F,0x00,0x70,0x00,
	0x00,0x0F,0xC1,0xE0,0x00,0x00,0x9F,0xE3,0xC0,0x00,0x01,0x9D,0xC1,0xEF,0x80,0x03,
	0xBD,0xC1,0xFF,0xC0,0x03,0x39,0xFF,0xFF,0x80,0x07,0x71,0xFF,0xF0,0x00,0x0E,0xF3,
	0xC0,0xF0,0x00,0x1F,0xE3,0x80,0xF0,0x00,0x3F,0xC3,0x80,0xF0,0x00,0x3F,0x1F,0x80,
	0xF0,0x00,0x1C,0x1F,0x00,0xE0,0x00,0x1C,0x0F,0x00,0xE0,0x00,0x00,0x0E,0x00,0xE0,
	0x00,0x00,0x00,0x1F,0xE0,0x00,0x00,0x00,0x0F,0xC0,0x00,0x00,0x00,0x07,0xC0,0x00,
	0x00,0x00,0x03,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
},
{	/*--  文字:  戏	--*/
	/*--  楷体26;  此字体下对应的点阵为：宽x高=36x35   --*/
	/*--  宽度不是8的倍数，现调整为：宽度x高度=40x35  --*/
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0xF0,0x00,0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x00,0x7B,0xE0,0x00,0x00,0x00,
	0x79,0xF0,0x00,0x00,0x00,0x38,0xF0,0x00,0x00,0x00,0x38,0x70,0x00,0x00,0x38,0x38,
	0x00,0x00,0x00,0xFE,0x38,0x00,0x00,0x07,0xFC,0x39,0xC0,0x00,0x0F,0xBC,0x3F,0xC0,
	0x00,0x00,0x3C,0x3F,0x80,0x00,0x00,0x39,0xFE,0x60,0x00,0x00,0x3B,0xFC,0xF0,0x00,
	0x07,0xB8,0x1C,0xF0,0x00,0x03,0xF0,0x0F,0xE0,0x00,0x01,0xF0,0x0F,0xC0,0x00,0x00,
	0xF8,0x0F,0xC0,0x00,0x00,0xFC,0x0F,0x80,0x00,0x01,0xFE,0x0F,0x00,0x00,0x03,0xCE,
	0x1F,0x80,0x00,0x07,0x8E,0x7F,0x80,0x00,0x0F,0x00,0xF3,0xC0,0x00,0x1E,0x03,0xE1,
	0xE1,0x80,0x38,0x07,0x80,0xE3,0x80,0x00,0x00,0x00,0xFB,0x80,0x00,0x00,0x00,0x7F,
	0x80,0x00,0x00,0x00,0x3F,0x80,0x00,0x00,0x00,0x1F,0x80,0x00,0x00,0x00,0x07,0x80,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
},	
{	/*--  文字:  结	--*/
	/*--  楷体26;  此字体下对应的点阵为：宽x高=36x35   --*/
	/*--  宽度不是8的倍数，现调整为：宽度x高度=40x35  --*/
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x07,0x00,0x00,0x00,0x78,0x07,0xC0,0x00,0x00,0x78,0x07,0xC0,0x00,0x00,0x78,
	0x03,0x80,0x00,0x00,0xF0,0x03,0x80,0x00,0x00,0xE0,0x03,0x80,0x00,0x01,0xEE,0x03,
	0x80,0x00,0x01,0xCF,0x03,0x86,0x00,0x03,0x9F,0x03,0xFF,0x80,0x07,0x9E,0x1F,0xFF,
	0x80,0x0F,0xFD,0xFF,0xC0,0x00,0x1F,0xF8,0xF3,0x80,0x00,0x1F,0x70,0x03,0x80,0x00,
	0x00,0xF0,0x03,0x80,0x00,0x01,0xE0,0x03,0xFC,0x00,0x03,0xFE,0x7F,0xFE,0x00,0x07,
	0xF8,0x7F,0x00,0x00,0x07,0xC0,0x00,0x00,0x00,0x07,0x00,0x00,0x78,0x00,0x00,0x0F,
	0x7F,0xFE,0x00,0x00,0x3C,0x7F,0xFF,0x00,0x01,0xF8,0x78,0x1E,0x00,0x07,0xE0,0x78,
	0x3C,0x00,0x3F,0x80,0x38,0x38,0x00,0x1F,0x00,0x3F,0xFC,0x00,0x0E,0x00,0x3F,0xF8,
	0x00,0x00,0x00,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
},	
{	/*--  文字:  束	--*/
	/*--  楷体26;  此字体下对应的点阵为：宽x高=36x35   --*/
	/*--  宽度不是8的倍数，现调整为：宽度x高度=40x35  --*/
	0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x00,0x03,0xC0,0x00,0x00,0x00,
	0x03,0xC0,0x00,0x00,0x00,0x03,0xC0,0x00,0x00,0x00,0x03,0xCC,0x00,0x00,0x00,0x03,
	0xFE,0x00,0x00,0x00,0x3F,0xFE,0x00,0x00,0x00,0x7F,0xE0,0x00,0x00,0x00,0x19,0xC0,
	0x00,0x00,0x00,0x01,0xCF,0x80,0x00,0x00,0x01,0xFF,0xC0,0x00,0x01,0xFF,0xF7,0xE0,
	0x00,0x01,0xFD,0xC7,0xC0,0x00,0x01,0xE1,0xC7,0x00,0x00,0x00,0xE1,0xC7,0x00,0x00,
	0x00,0xE1,0xFF,0x00,0x00,0x00,0xFF,0xFE,0x00,0x00,0x00,0x7F,0xC0,0x00,0x00,0x00,
	0x77,0xE0,0x00,0x00,0x00,0x0F,0xF0,0x00,0x00,0x00,0x1F,0xF8,0x00,0x00,0x00,0x3D,
	0xFE,0x00,0x00,0x00,0x79,0xDF,0x00,0x00,0x00,0xF1,0xCF,0xC0,0x00,0x01,0xE3,0xC7,
	0xF8,0x00,0x03,0xC3,0xC1,0xFF,0x00,0x0F,0x03,0xC0,0xFF,0xC0,0x1E,0x03,0xC0,0x7E,
	0x00,0x30,0x03,0xC0,0x00,0x00,0x00,0x03,0xC0,0x00,0x00,0x00,0x03,0xC0,0x00,0x00,
	0x00,0x03,0x80,0x00,0x00,0x00,0x01,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00
}	
};

#endif

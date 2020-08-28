#ifndef BMP_H
#define BMP_H

#include "myhead.h"


struct bitmap_header
{
    int16_t type;
    int32_t size; // 图像文件大小
    int16_t reserved1;
    int16_t reserved2;
    int32_t offbits; // bmp图像数据偏移量
}__attribute__((packed));

struct bitmap_info
{
    int32_t size; // 本结构大小
    int32_t width;
    int32_t height;
    int16_t planes; // 总为零

    int16_t bit_count; // 色深
    int32_t compression;
    int32_t size_img; // bmp数据大小，必须是4的整数倍
    int32_t X_pel;
    int32_t Y_pel;
    int32_t clrused;
    int32_t clrImportant;
}__attribute__((packed));

#endif // BMP_H

#ifndef E66F8E82_239A_428D_BFA7_E8F5949DD482
#define E66F8E82_239A_428D_BFA7_E8F5949DD482
#pragma pack(1)     //设置结构体为1字节对齐


typedef signed char        int8_t;
typedef short              int16_t;
typedef int                int32_t;
// typedef long long          int64_t;

/*Unsigned*/
typedef unsigned char      uint8_t;
typedef unsigned short     uint16_t;
typedef unsigned int       uint32_t;
// typedef unsigned long long uint64_t;


struct CabinState
{
    float cabin_temperature;   //舱内温度
    float cabin_humidity;      //舱内湿度
    float cabin_water_level;   //舱内水位
    float cpu_temperature;     //CPU温度
};

struct ThrustersClientStruct
{
    int16_t thruster_ul;
    int16_t thruster_ur;
    int16_t thruster_ll;
    int16_t thruster_lr;
    int16_t thruster_l;
    int16_t thruster_r;
};

struct TracksPCStruct
{
    int16_t track_l;
    int16_t track_r;
};



#pragma pack()      //结束结构体对齐设置
#endif /* E66F8E82_239A_428D_BFA7_E8F5949DD482 */
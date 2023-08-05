#ifndef E66F8E82_239A_428D_BFA7_E8F5949DD482
#define E66F8E82_239A_428D_BFA7_E8F5949DD482
#pragma pack(1)     //设置结构体为1字节对齐

struct CabinState
{
    float cabin_temperature;   //舱内温度
    float cabin_humidity;      //舱内湿度
    float cabin_water_level;   //舱内水位
    float cpu_temperature;     //CPU温度
};




#pragma pack()      //结束结构体对齐设置
#endif /* E66F8E82_239A_428D_BFA7_E8F5949DD482 */
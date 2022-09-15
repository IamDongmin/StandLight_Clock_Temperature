#ifndef __DHT11_DATA_H__
#define __DHT11_DATA_H__

class DHT_Data
{
public:
    int RH;
    int RHDec;
    int Temp;
    int TempDec;
    int checksum;
    int error;
};

#endif /* __DHT11_DATA_H__ */
/*
mainStrFunc.cpp
This Class contains all the small function which are commonly used to manipulate string
and they can be used from "Encoding" Tab of the Program's Main Screen
*/


#include "mainstrfunc.h"

mainStrFunc::mainStrFunc()
{

}

mainStrFunc::~mainStrFunc()
{

}

//Convert to Base64
QString mainStrFunc::to_Base64(QString input)
{
    QByteArray tmp;
    tmp.append(input);
    return tmp.toBase64();
}

//Convert from base64
QString mainStrFunc::from_Base64(QString input)
{
    QString result;
    try
    {
       QByteArray tmp;
       tmp.append(input);
       result= QByteArray::fromBase64(tmp);
    }
    catch(std::exception &e)
    {
        result= "";
    }
    return result;
}

//Convert to Hexadecimal
QString mainStrFunc::to_Hex(QString input)
{
    QByteArray tmp;
    tmp.append(input);
    return tmp.toHex();
}

//Convert form Hexadecimal
QString mainStrFunc::from_Hex(QString input)
{
    QString result;
    try
    {
        QByteArray tmp;
        tmp.append(input);
        result= QByteArray::fromHex(tmp);
    }
    catch(std::exception &e)
    {
        result = "";
    }
    return result;
}

//Convert from Int o Ascii
QString mainStrFunc::from_Int(QString input)
{
    QByteArray tmp;
    tmp.append(input);
}

//Convert from Ascii to Int
QString mainStrFunc::to_Int(QString input)
{
    QByteArray tmp;
    tmp.append(input);
    QString result;
    for(int i=0;i<tmp.length();i++)
    {
        result += QString::number(tmp[i]);
    }
    return result;
}


//Convert Ascii to binary data
QString mainStrFunc::to_Bin(QString input)
{
    QString result;
    QByteArray tmp;
    tmp.append(input);
    for(int i=0;i<tmp.length();i++)
    {
        result += QString::number(tmp[i],2);
        result += " ";
    }
    return result;
}

//Reverse String
QString mainStrFunc::ReverseString(QString input)
{
    QString result;
    for(int i=input.length()-1;i>=0;i--)
    {
        result+=input[i];
    }
    return result;
}

//Get CRC16 Checksum
QString mainStrFunc::crc16_Checksum(QString input)
{
    //QString result;
    QByteArray tmp;
    tmp.append(input);
    quint16 crc = qChecksum(tmp.data(),tmp.length());
    return QString::number(crc,16).toUpper();
}

//Rot13 - Implementing
QString mainStrFunc::rot13(QString input)
{
    int firstUpper =0x41;
    int lastUpper = 0x4d;
    int firstLower = 0x61;
    int lastLower = 0x6d;
    int rollUper = 0x4e;
    int rollLower = 0x6e;
    int zCharUpper = 0x5a;
    int zCharLower = 0x7a;

}

//Convert byte/Char array to Hex-Encoded QString
QString mainStrFunc::convertBuffer(char buffer[],int size)
{
    QByteArray tmp = QByteArray::fromRawData(buffer,size);
    return tmp.toHex().toUpper();
}

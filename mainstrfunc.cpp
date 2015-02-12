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
    QString result;
    try
    {
        QByteArray tmp;
        tmp.append(input);
    }
    catch(...)
    {
        result = "";
    }
    return result;
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


//Rot13 Encoding
QString mainStrFunc::rot13(QString input)
{
    std::string str = input.toStdString();
    std::string result = str;

    int i=0;

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            result[i] = (str[i] - 'a' + 13) % 26 + 'a';
        else if (str[i] >= 'A' && str[i] <= 'Z')
            result[i] = (str[i] - 'A' + 13) % 26 + 'A';
        i++;
    }
    return QString::fromStdString(result);
}

//Convert to Base32
QString mainStrFunc::to_Base32(QString input)
{
    std::string result;
    std::string stdInput = input.toStdString();
    CryptoPP::StringSource(stdInput,true,new CryptoPP::Base32Encoder(new CryptoPP::StringSink(result)));
    return QString::fromStdString(result);
}

//Convert from Base32
QString mainStrFunc::from_Base32(QString input)
{
    std::string result;
    std::string stdInput = input.toStdString();
    CryptoPP::StringSource(stdInput,true,new CryptoPP::Base32Decoder(new CryptoPP::StringSink(result)));
    return QString::fromStdString(result);
}

//Convert byte/Char array to Hex-Encoded QString
QString mainStrFunc::convertBuffer(char buffer[],int size)
{
    QByteArray tmp = QByteArray::fromRawData(buffer,size);
    return tmp.toHex().toUpper();
}


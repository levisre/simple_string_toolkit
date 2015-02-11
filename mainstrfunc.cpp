#include "mainstrfunc.h"
#include <QCryptographicHash>
#include <QtCrypto/QtCrypto>

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


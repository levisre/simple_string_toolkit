#ifndef MAINSTRFUNC_H
#define MAINSTRFUNC_H
#include <QtCore>
#include "Cryptopp/filters.h"
#include "Cryptopp/hex.h"
class mainStrFunc
{
public:
    mainStrFunc();
    ~mainStrFunc();
    QString to_Base64(QString input);
    QString from_Base64(QString input);
    QString to_Hex(QString input);
    QString from_Hex(QString input);
    QString to_Int(QString input);
    QString from_Int(QString input);
    QString to_Bin(QString input);
    QString from_Bin(QString input);
    QString ReverseString(QString input);
    QString crc16_Checksum(QString input);
    QString rot13(QString input);
    QString convertBuffer(char buffer[], int size);
};

#endif // MAINSTRFUNC_H

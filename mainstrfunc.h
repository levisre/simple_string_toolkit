#ifndef MAINSTRFUNC_H
#define MAINSTRFUNC_H
#include <QtCore>
#include "Cryptopp/filters.h"
#include "Cryptopp/base32.h"

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
    QString convertBuffer(char buffer[], int size);
    QString to_Base32(QString input);
    QString from_Base32(QString input);
    QString CeasarSolver(QString input, int step);
};

#endif // MAINSTRFUNC_H

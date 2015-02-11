#ifndef MAINSTRFUNC_H
#define MAINSTRFUNC_H
#include <QtCore>

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

};

#endif // MAINSTRFUNC_H

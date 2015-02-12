#ifndef HASHES_H
#define HASHES_H

#include <QtCore>
#include <QCryptographicHash>
#include "Cryptopp/adler32.h"
#include "Cryptopp/crc.h"
#include "Cryptopp/md2.h"
#include "Cryptopp/ripemd.h"
#include "Cryptopp/sha.h"
#include "Cryptopp/tiger.h"
#include "Cryptopp/whrlpool.h"
#include "mainstrfunc.h"


class Hashes
{
public:
    Hashes();
    ~Hashes();
    QString crc16String(QString input);
    QString crc32String(QString input);
    QString alder32String(QString input);
    QString Ripemd128(QString input);
    QString Ripemd160(QString input);
    QString Ripemd256(QString input);
    QString Ripemd320(QString input);
    QString Tiger(QString input);
    QString Whirlpool(QString input);
    QString MD2String(QString input);
    QString buildinFunc(int index, QString input);
};

#endif // HASHES_H

#ifndef HASHES_H
#define HASHES_H

#include "Cryptopp/filters.h"
#include "Cryptopp/hex.h"
#include "Cryptopp/adler32.h"
#include "Cryptopp/crc.h"
//#define CRYPTOPP_ENABLE_NAMESPACE_WEAK 1
#include "Cryptopp/md5.h"
#include "Cryptopp/md2.h"
#include "Cryptopp/md4.h"
#include "Cryptopp/ripemd.h"
#include "Cryptopp/sha.h"
#include "Cryptopp/tiger.h"
#include "Cryptopp/whrlpool.h"
#include "mainstrfunc.h"
#include <QtCore>
#include <QCryptographicHash>
class Hashes
{
public:
    Hashes();
    ~Hashes();
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

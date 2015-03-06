#ifndef MORSE_H
#define MORSE_H
#include <QtCore>

class morse
{
public:
    morse();
    ~morse();
    QString toMorse(QString input);
    QString fromMorse(QString input);
};

#endif // MORSE_H

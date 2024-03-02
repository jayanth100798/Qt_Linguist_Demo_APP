#ifndef MYLANG_H
#define MYLANG_H

#include <QObject>
#include <QtQml>

class MyLang : public QObject {
  Q_OBJECT


public:
  MyLang() {}

  enum E_Languages {
//Qlocale::Country_code
    ENG = 31,
    GER = 42,
    PORT = 173,
    SPN = 197,
    ITAL = 106,
    IND = 100,
    FRE = 37,
    RUS=178

  };

  Q_ENUM(E_Languages)

  E_Languages mLang;
};

#endif // MYLANG_H

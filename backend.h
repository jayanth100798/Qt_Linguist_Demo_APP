#ifndef BACKEND_H
#define BACKEND_H

#include <QObject>
#include <QGuiApplication>
#include <QQuickView>
#include <QtQml>
#include"mylang.h"

class Backend : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString emptyString READ getEmptyString NOTIFY languageChanged)
public:
    explicit Backend(QObject *parent = nullptr);
      QString getEmptyString() {
          return "";
      }
      Q_INVOKABLE void updateLanguage(int lang);

signals:
    void languageChanged();

private:
    QGuiApplication *mApp;
    QTranslator mTranslator;
    QMap<int, QString> mLanguageMap;
    MyLang *mcClang;


};

#endif // BACKEND_H

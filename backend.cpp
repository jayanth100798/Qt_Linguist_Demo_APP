#include "backend.h"
#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QTranslator>
#include<QDebug>

Backend::Backend(QObject *parent) : QObject(parent)
{

    mLanguageMap.insert(MyLang::ENG, "English");
    mLanguageMap.insert(MyLang::SPN, "Spanish");
    mLanguageMap.insert(MyLang::PORT, "Portuguese");
    mLanguageMap.insert(MyLang::GER, "German");
    mLanguageMap.insert(MyLang::RUS, "Russian");
    mLanguageMap.insert(MyLang::ITAL, "Italian");
    mLanguageMap.insert(MyLang::FRE, "French");
   mcClang=new MyLang;
}




void Backend::updateLanguage(int lang) {


    switch (lang) {
    case MyLang::ENG: // 31
        mTranslator.load(":/translate/test_eng.qm");
        mApp->installTranslator(&mTranslator);

        break;
    case MyLang::SPN: // 197
        mTranslator.load(":/translate/spanish.qm");
        mApp->installTranslator(&mTranslator);


        break;
    case MyLang::PORT: // 173
        mTranslator.load(":/translate/portuguees.qm");
        mApp->installTranslator(&mTranslator);

        break;
    case MyLang::GER: // 42
        mTranslator.load(":/translate/german.qm");
        mApp->installTranslator(&mTranslator);

        break;
    case MyLang::RUS: // 178
        mTranslator.load(":/translate/russia.qm");
        mApp->installTranslator(&mTranslator);

        break;
    case MyLang::ITAL: // 106
        mTranslator.load(":/translate/italian.qm");
        mApp->installTranslator(&mTranslator);

        break;
    case MyLang::IND: // 100
        mTranslator.load(":/translate/hindi.qm");
        mApp->installTranslator(&mTranslator);


        break;
    case MyLang::FRE: // 37
        mTranslator.load(":/translate/french.qm");
        mApp->installTranslator(&mTranslator);

        break;
    default:
        mApp->removeTranslator(&mTranslator);
        break;
    }

    emit languageChanged();
}


#pragma once

#include "QMutex.h"

class QMainApp
{
public:
    QMainApp(void);
    ~QMainApp(void);
    void OnInit();
public:
    QMutex hMutex;
public:
    static QMainApp * Instance(){
        static QMainApp _instance;
        return &_instance;
    }
};

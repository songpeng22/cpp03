#include "QMainApp.h"
#include <stdio.h>

QMainApp::QMainApp(void)
:hMutex(0)
{
    //OutputDebugString("QMainApp()");
}

QMainApp::~QMainApp(void)
{
}

void QMainApp::OnInit()
{
    printf("QMainApp::OnInit()");
}
#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ImgProcessor.h"

class ImgProcessor : public QMainWindow
{
    Q_OBJECT

public:
    ImgProcessor(QWidget *parent = nullptr);
    ~ImgProcessor();

private:
    Ui::ImgProcessorClass ui;
};

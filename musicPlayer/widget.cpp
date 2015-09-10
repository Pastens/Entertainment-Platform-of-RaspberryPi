#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_playButton_clicked()
{
    QDesktopServices::openUrl(QUrl("http://m1.music.126.net/ao7cypRVON2i8OgPvjj6zQ==/1291926162652500.mp3 ",QUrl::TolerantMode));
}

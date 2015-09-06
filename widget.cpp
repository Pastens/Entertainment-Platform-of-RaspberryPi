#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    manager = new QNetworkAccessManager(this);  //新建QNetworkAccessManager对象
    connect(manager,SIGNAL(finished(QNetworkReply*)),  //关联信号和槽
                this,SLOT(replyFinished(QNetworkReply*)));
    manager->get(QNetworkRequest(QUrl("http://www.yafeilinux.com"))); //发送请求
}

Widget::~Widget()
{
    delete ui;
}

void Widget::replyFinished(QNetworkReply *reply)  //当回复结束后
{
    QTextCodec *codec = QTextCodec::codecForName("utf8");
    //使用utf8编码，这样才可以显示中文
    QString all = codec->toUnicode(reply->readAll());
    ui->textBrowser->setText(all);
    reply->deleteLater();   //最后要释放reply对象
}

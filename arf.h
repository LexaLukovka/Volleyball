#ifndef ARF_H
#define ARF_H

#include <QWidget>
#include <QPixmap>
//#include <QMediaPlayer>
#include <QDir>
#include <QUrl>


namespace Ui {
class ArF;
}

class ArF : public QWidget
{
    Q_OBJECT

public:
    explicit ArF(QWidget *parent = 0);
    ~ArF();

private:
    Ui::ArF *ui;
};

#endif // ARF_H

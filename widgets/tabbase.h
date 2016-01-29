#ifndef TABBASE_H
#define TABBASE_H

#include <QtWidgets>

class TabBase : public QWidget
{
    Q_OBJECT
    Q_PROPERTY(QString tabName READ getTabName WRITE setTabName)
public:
    explicit TabBase(QWidget *parent = 0);
    TabBase(QWidget *parent, QString name);

    QString getTabName() const;
    void setTabName(QString name);

signals:

public slots:

protected:
    QVBoxLayout* m_layout;

private:
    QString m_tabName;
};

#endif // TABBASE_H

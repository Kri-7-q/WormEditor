#ifndef GAMEBOARDMODEL_H
#define GAMEBOARDMODEL_H

#include <QAbstractListModel>
#include <QSize>
#include "Models/gamefield.h"


class GameboardModel : public QAbstractListModel
{
    Q_OBJECT
    Q_PROPERTY(int width READ width WRITE setWidth NOTIFY widthChanged)
    Q_PROPERTY(int height READ height WRITE setHeight NOTIFY heightChanged)

public:
    explicit GameboardModel(QObject* parent = nullptr);

    enum ModelRole { FrameColor = Qt::UserRole, Color };

    int width() const                       { return m_size.width(); }
    void setWidth(const int width);
    int height() const                      { return m_size.height(); }
    void setHeight(const int height);

    // QAbstractItemModel interface
    int rowCount(const QModelIndex &parent) const override;
    QVariant data(const QModelIndex &index, int role) const override;
    QHash<int, QByteArray> roleNames() const override;

signals:
    void widthChanged();
    void heightChanged();

private:
    QList<GameFieldObject> m_dataList;
    QSize m_size;
};

#endif // GAMEBOARDMODEL_H

#include "gameboardmodel.h"


// Constructor
GameboardModel::GameboardModel(QObject *parent)
    : QAbstractListModel(parent)
    , m_size(0, 0)
{

}

// PROPERTY
// Setter
void GameboardModel::setWidth(const int width)
{
    if (m_size.width() != width) {
        m_size.setWidth(width);
        emit widthChanged();
    }
}

// PROPERTY
// Setter
void GameboardModel::setHeight(const int height)
{
    if (m_size.height() != height) {
        m_size.setHeight(height);
        emit heightChanged();
    }
}

// Override
// Get the row count of list model.
int GameboardModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent)

    return m_size.width() * m_size.height();
}

// Override
// Get data from the list model.
QVariant GameboardModel::data(const QModelIndex &index, int role) const
{
    QVariant value;
    unsigned key = static_cast<unsigned>( index.row() );
    switch (role) {
    case Color:
        value = m_dataList.value(key, GameFieldObject()).color();
        break;
    case FrameColor:
        value = m_dataList.value(key, GameFieldObject()).frameColor();
        break;
    default:
        break;
    }

    return value;
}

// Override
// Get model roles in QML.
QHash<int, QByteArray> GameboardModel::roleNames() const
{
    QHash<int, QByteArray> roles;
    roles.insert(Color, QString("fieldColor").toLatin1());
    roles.insert(FrameColor, QString("frameColor").toLatin1());

    return roles;
}

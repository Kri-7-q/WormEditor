#include "editorctrl.h"
#include "Models/gameboardmodel.h"
#include <QSize>

// Constructor
EditorCtrl::EditorCtrl(QObject *parent)
    : QObject(parent)
    , m_blockSize(20, 20)
{

}

// PROPERTY
// Setter
void EditorCtrl::setModel(GameboardModel* pModel)
{
    if (m_pModel != pModel) {
        m_pModel = pModel;
        emit modelChanged();
    }
}

// PROPERTY
// Setter
void EditorCtrl::setBlockWidth(const unsigned width)
{
    if (m_blockSize.width != width) {
        m_blockSize.width = width;
        emit blockWidthChanged();
    }
}

// PROPERTY
// Setter
void EditorCtrl::setBlockHeight(const unsigned height)
{
    if (m_blockSize.height != height) {
        m_blockSize.height = height;
        emit blockHeightChanged();
    }
}

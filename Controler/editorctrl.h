#ifndef EDITORCTRL_H
#define EDITORCTRL_H

#include <QObject>
#include "Models/gameboardmodel.h"


struct Size {
    Size(unsigned w, unsigned h) : width(w), height(h) {}

    unsigned width;
    unsigned height;
};

class EditorCtrl : public QObject
{
    Q_OBJECT
    Q_PROPERTY(GameboardModel* model READ model WRITE setModel NOTIFY modelChanged)
    Q_PROPERTY(unsigned blockWidth READ blockWidth WRITE setBlockWidth NOTIFY blockWidthChanged)
    Q_PROPERTY(unsigned blockHeight READ blockHeight WRITE setBlockHeight NOTIFY blockHeightChanged)

public:
    explicit EditorCtrl(QObject *parent = nullptr);
    virtual ~EditorCtrl()       { }

    GameboardModel* model() const               { return m_pModel; }
    void setModel(GameboardModel* pModel);
    unsigned blockWidth() const                 { return m_blockSize.width; }
    void setBlockWidth(const unsigned width);
    unsigned blockHeight()                      { return m_blockSize.height; }
    void setBlockHeight(const unsigned height);

signals:
    void modelChanged();
    void blockWidthChanged();
    void blockHeightChanged();

private:
    GameboardModel* m_pModel;
    Size m_blockSize;
};

#endif // EDITORCTRL_H

import QtQuick 2.6
import QtQuick.Window 2.3
import Models 1.0
import Controler 1.0

Window {
    id: root
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    //visibility: Window.FullScreen

    GameboardModel {
        id: model
        width: root.width / controler.blockWidth
        height: root.height / controler.blockHeight
    }

    EditorCtrl {
        id: controler
        model: model
    }

    GridView {
        id: grid
        anchors.fill: root.contentItem

        model: model

        cellWidth: controler.blockWidth
        cellHeight: controler.blockHeight

        delegate: GameFieldDelegate {}
    }
}

import QtQuick 2.0

Component {

    Rectangle {
        width: grid.cellWidth
        height: grid.cellHeight
        color: color;
        border.width: 1;
        border.color: frameColor;

        property int gridIdx: index

        MouseArea {
            anchors.fill: parent
            hoverEnabled: true
            onEntered: {
                parent.color = "lightgreen"
            }
            onExited: {
                parent.color = fieldColor
            }
        }
    }

}

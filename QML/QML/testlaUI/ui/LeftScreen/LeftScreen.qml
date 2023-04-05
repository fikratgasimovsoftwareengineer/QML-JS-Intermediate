import QtQuick 2.15

Rectangle {

    id: leftScreen
    anchors {
        top: parent.top
        left: parent.left
        right: rightScreen.left
        bottom: bottomBar.top
    }
    Image {
        id: carTesla
        anchors.centerIn: parent
        width: parent.width * .75
        fillMode: Image.PreserveAspectFit
        source: "qrc:/ui/assets/tesla_2.jpg"
    }
    color: "white"

    BatteryLevelControl {

        id: leftBatteryId
        anchors {

            //top: leftScreen.top
            right: leftScreen.right
            rightMargin: 40
        }
    }
}

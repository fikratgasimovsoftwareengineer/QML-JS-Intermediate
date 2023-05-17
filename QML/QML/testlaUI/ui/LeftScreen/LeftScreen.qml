import QtQuick 2.15
import QtQuick.Controls 2.14
import QtQuick.Window 2.14 // navigation page

Rectangle {

    id: leftScreen
    anchors {
        top: parent.top
        left: parent.left
        right: rightSreen.left
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
            right: leftScreen.right
            rightMargin: 40
        }
    }


    SpeedMeterButton{
        id:leftButtonSpeed
        anchors{
            top: leftBatteryId.bottom
            left: leftScreen.left
            rightMargin: 250

        }

    }
}




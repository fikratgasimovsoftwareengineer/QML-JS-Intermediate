import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.14
import "ui/BottomBar"
import "ui/RightScreen"
import "ui/LeftScreen"
import "ui/SpeedMeter"

Window {
    width: 1280
    height: 720
    visible: true
    title: qsTr("Tesla User Interface")


    RightScreen{
        id: rightSreen
    }

    LeftScreen{
        id: leftScreen
    }

    BottomBar {
        id: bottomBar
    }


    StackView {
           id: stackView
           anchors.fill: parent
           initialItem: leftScreenLoader
       }


}

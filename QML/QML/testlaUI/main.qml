import QtQuick 2.15
import QtQuick.Window 2.15
import "ui/BottomBar"
import "ui/RightScreen"
import "ui/LeftScreen"

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
}

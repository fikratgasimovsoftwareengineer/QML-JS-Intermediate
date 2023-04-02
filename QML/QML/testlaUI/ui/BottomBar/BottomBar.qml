import QtQuick 2.15
import QtQuick.Controls 2.15

Rectangle {

    id: bottomBar
    anchors {
        left: parent.left
        right: parent.right
        bottom: parent.bottom
    }
    color: "#180d0d"
    height: parent.height / 12

    // Car Image Icon
    Image {
        id: carIcon
        anchors {
            left: parent.left
            leftMargin: 30
            verticalCenter: parent.verticalCenter
        }

        height: parent.height * .85
        fillMode: Image.PreserveAspectFit
        source: "qrc:/ui/assets/car_2.png"
    }

    TempHandler {
        id: passengerHandleControlLeft
        anchors {
            left: carIcon.right
            top: parent.top
            bottom: parent.bottom
            leftMargin: 150
        }

        tempControllerClass: tempHandlerDriver
    }

    TempHandler {
        id: passengerHandleControlRight
        anchors {
            right: rightVolumeSetter.left
            top: parent.top
            bottom: parent.bottom
            rightMargin: 150
        }
        tempControllerClass: tempHandlerPassenger
    }
    VolumQmlController {
        id: rightVolumeSetter
        anchors {
            right: parent.right
            rightMargin: 30
            top: parent.top
            bottom: parent.bottom
        }
    }
}

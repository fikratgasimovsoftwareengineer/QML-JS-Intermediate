import QtQuick 2.15
import QtQuick.Controls 2.15

Item {

    // global var
    property string fontColor: "#fbfcfa"
    // this will handle class object
    property var tempControllerClass

    width: 90 * (parent.width / 1280)

    Rectangle {

        id: tempHandleLeftButton
        anchors {
            left: parent.left
            top: parent.top
            bottom: parent.bottom
        }

        width: height / 2
        color: "#180d0d"

        Text {

            id: tempHandleLeftButtonDecrement
            color: fontColor
            anchors.centerIn: parent
            text: "<"
            font.pixelSize: 16

            MouseArea {

                anchors.fill: parent
                onClicked: tempControllerClass.setIncrementTemp(-1)
            }
        } // text finisjed
    }

    Text {

        id: temperatureText
        anchors {
            left: tempHandleLeftButton.right
            leftMargin: 25
            verticalCenter: parent.verticalCenter
        }
        color: fontColor
        font.pixelSize: 24
        text: tempControllerClass.targetTemp
    }

    Rectangle {

        id: tempHandleRightButton
        anchors {
            left: temperatureText.right
            leftMargin: 15
            top: parent.top
            bottom: parent.bottom
        }

        width: height / 2
        color: "#180d0d"

        Text {

            id: tempHandleRightButtonIncrement
            color: fontColor
            anchors.centerIn: parent
            text: ">"
            font.pixelSize: 16
            MouseArea {

                anchors.fill: parent
                onClicked: tempControllerClass.setIncrementTemp(1)
            }
        } // text finisjed
    }
}

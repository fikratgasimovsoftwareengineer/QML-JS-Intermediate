import QtQuick 2.15

Item {
    // global var
    property string fontColor: "#fbfcfa"
    width: 90 * (parent.width / 1280)

    Connections {

        target: volumeController
        // add signal
        function onVolStatusChanged() {
            visibTimer.stop()
            volIcon.visible = false

            visibTimer.start()
        }
    }

    Timer {
        id: visibTimer
        interval: 1000
        repeat: false
        onTriggered: {
            volIcon.visible = true
        }
    }

    // this will handle class object
    Rectangle {

        id: tempHandleLeftButton
        anchors {
            left: parent.left
            rightMargin: 15
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
                onClicked: volumeController.volumeChanged(-1)
            }
        } // text finisjed
    }

    Image {

        id: volIcon
        height: 25
        clip: true
        fillMode: Image.PreserveAspectFit
        anchors {
            left: tempHandleLeftButton.right
            right: parent.right
            // leftMargin: 12
            verticalCenter: parent.verticalCenter
        }
        source: {

            if (volumeController.volStatus <= 1)
                return "qrc:/ui/assets/mute.png"
            else if (volumeController.volStatus <= 50)
                return "qrc:/ui/assets/low-volume.png"
            else
                return "qrc:/ui/assets/volume-up-interface-symbol.png"
        }
    }

    Text {

        id: volumeTextLabel
        visible: !volIcon.visible
        anchors {
            centerIn: volIcon
        }
        color: fontColor
        font.pixelSize: 24
        text: volumeController.volStatus
    }

    Rectangle {

        id: tempHandleRightButton
        anchors {
            left: volIcon.right

            // rightMargin: 40
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
                onClicked: volumeController.volumeChanged(1)
            }
        } // text finisjed
    }
}

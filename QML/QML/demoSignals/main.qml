import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.4

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    function onCallQml(parameter) {

        mText.text = parameter
    }

    function onCalculateTime(value) {
        mRectText.text = value
    }
    Connections {

        target: signalSender

        // callQml signal
        onCallQml: onCallQml(parameter)
        // Timer Signal
        onCalculateTime: onCalculateTime(value)
    }

    Column {
        Rectangle {
            width: 200
            height: 200
            color: "#d31a14"
            radius: 15
            border.color: "#1dbe22"

            Text {
                id: mRectText
                text: qsTr("Start")
                font.pointSize: 30
                style: Text.Raised
                anchors.centerIn: parent
            }
        }

        Button {
            text: "Call c++ method"
            onClicked: {
                signalSender.cppSlot()
            }
        }

        Text {
            id: mText

            text: qsTr("Default")
        }
    } // finish Column
}

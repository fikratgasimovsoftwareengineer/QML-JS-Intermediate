import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Rectangle {
        id: mRect1
        width: mText1.implicitWidth + 20
        height: mText1.implicitHeight + 20
        color: "#e2e22a"
        border.color: "lightblue"

        Text {
            id: mText1
            anchors.centerIn: parent
            text: username
            font.pointSize: 20
        }
    }

    Rectangle {
        id: mRect2
        anchors.left: mRect1.right
        anchors.leftMargin: 5
        width: mText2.implicitWidth + 20
        height: mText2.implicitHeight + 20
        color: "#e2e22a"
        border.color: "#9acd32"

        Text {
            id: mText2
            anchors.centerIn: parent
            text: firstname
            font.pointSize: 20
        }
    }
}

import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.4

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Column {

        Button {
            text: "Call c++ methods"
            onClicked: {
                contextProperties.regularMethod()
                contextProperties.getSlots()
            }
        }

        Rectangle {
            width: nameText.implicitWidth + 70
            height: 25
            color: "steelblue"
            // border.color: "black"
            border.width: 5

            Text {
                id: nameText
                text: contextProperties.regularMethodString("Fikrat", 28)
            }
        }
    }
}

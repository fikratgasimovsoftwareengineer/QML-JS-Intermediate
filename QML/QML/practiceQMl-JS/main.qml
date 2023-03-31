import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.12

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    // create function for signal
    function onEmitSignal(ch_name) {
        textId.text = ch_name
    }

    Connections {
        target: rootWrapper
        onEmitSignal: onEmitSignal(ch_name)
    }

    Row {
        spacing: 20

        Text {
            id: textId
            text: rootWrapper.setName("Fikrat") // Q_INVOKABLE
            font.family: "Helvetica"
            font.pointSize: 24
            color: "red"
        }

        Button {
            text: "Click Me"
            onClicked: {
                rootWrapper.changeName() // slot called from c++
            }
        }
    }
}

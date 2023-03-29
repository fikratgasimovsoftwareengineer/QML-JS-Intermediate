import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.12
import QtQuick.Controls.Material 2.12

Window {
    width: 640
    height: 480
    visible: true
    color: "lightgray"
    title: qsTr("CINEMA MOVIES")

    Column {

        spacing: 20
        Text {
            id: titleId
            width: 500
            text: Movie.title // get method is being called
            font.pointSize: 20
            anchors.horizontalCenter: parent.horizontalCenter
        }

        Text {
            id: mainCharId
            width: 500
            text: Movie.mainCharacter // get method is being called
            font.pointSize: 20
            anchors.horizontalCenter: parent.horizontalCenter
        } // text finished!

        // create row and button for setting title
        Row {

            anchors.horizontalCenter: parent.horizontalCenter
            // add text
            TextField {
                id: titleTextField
                width: 300
                placeholderText: "Insert Title"
            } // TEXTFIELD FINISHED

            Button {
                text: "Ok"
                id: button1
                onClicked: {
                    // this manages setTitle based Q_PROPERTY!
                    Movie.title = titleTextField.text
                } // BUTTON FINISHED
            } //end rows
        }

        Row {
            anchors.horizontalCenter: parent.horizontalCenter

            TextField {
                id: characterMainId
                width: 300
                placeholderText: "Character"
            }

            Button {
                id: button2
                text: "Ok!"
                onClicked: {

                    Movie.mainCharacter = characterMainId.text
                }
            }
        } // end row
    }
} // column finished!

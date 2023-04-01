import QtQuick 2.15

Rectangle {

    id: navigationBar
    radius: 15
    color: "#fbfcfa"

    Image {
        id: searchIcon
        source: "qrc:/ui/assets/search.png"

        anchors {
            left: navigationBar.left
            leftMargin: 25
            verticalCenter: parent.verticalCenter
        }
        height: parent.height
        fillMode: Image.PreserveAspectFit
    }
    Text {

        id: navigationBarPlaceText
        color: "#000000"
        text: "Navigate"
        anchors {

            verticalCenter: parent.verticalCenter
            left: searchIcon.right
            leftMargin: 20
        }
    }
}

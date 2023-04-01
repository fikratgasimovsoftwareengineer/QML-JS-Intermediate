import QtQuick 2.15
import QtLocation 5.6
import QtPositioning 5.6

Rectangle {
    id: rightScreen
    anchors {

        top: parent.top
        bottom: bottomBar.top
        right: parent.right
    }

    Plugin {
        id: mapPlugin
        name: "mapboxgl"
    }

    Map {
        anchors.fill: parent
        plugin: mapPlugin
        center: QtPositioning.coordinate(37.468319, -122.143936) // Oslo
        zoomLevel: 14
    }

    Image {
        id: lockIcon
        anchors {
            left: parent.left
            top: parent.top
            margins: 20
        } //anchor

        width: parent.width / 40
        fillMode: Image.PreserveAspectFit

        source: (systems.carLocked ? "qrc:/ui/assets/lock.png" : "qrc:/ui/assets/open-padlock-silhouette.png")
        MouseArea {
            anchors.fill: parent
            onClicked: systems.setCarLocked(
                           !systems.carLocked) // set carLocked to true or false
        } // mouse area
    } // image

    // set the timer
    Text {
        id: dateTimeDisplay
        anchors {

            left: lockIcon.right
            leftMargin: 22
            bottom: lockIcon.bottom
        }

        font.pixelSize: 16
        font.bold: true
        color: "black"

        text: systems.currentTime
    }

    // set Temperature
    Text {
        id: temperatureDisplay
        anchors {

            left: dateTimeDisplay.right
            leftMargin: 22
            bottom: dateTimeDisplay.bottom
        }

        font.pixelSize: 16
        font.bold: true
        color: "black"

        text: systems.outDoorTemp + "°F"
    }

    Text {
        id: userNameDisplay
        anchors {

            left: temperatureDisplay.right
            leftMargin: 22
            bottom: temperatureDisplay.bottom
        }

        font.pixelSize: 16
        font.bold: true
        color: "black"

        text: systems.userName
    }

    Image {
        id: userNameAccount
        anchors {
            left: userNameDisplay.right
            top: parent.top
            margins: 20
        }
        width: parent.width / 45
        fillMode: Image.PreserveAspectFit
        source: "qrc:/ui/assets/user.png"
    }

    NavigationSearchBox {
        id: navigationBar
        width: parent.width * 1 / 3
        height: parent.height * 1 / 12

        anchors {
            left: lockIcon.left
            top: lockIcon.bottom
            right: userNameAccount.right
            topMargin: 15
        }
    }

    // rectangle width
    width: parent.width * 2 / 3
}

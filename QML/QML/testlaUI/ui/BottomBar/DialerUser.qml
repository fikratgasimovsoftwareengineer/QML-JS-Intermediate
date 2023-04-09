import QtQuick 2.15

Item {

   Image {
        id: dialerIcon
        height: 40
        fillMode: Image.PreserveAspectFit

        anchors {
            left: DialerUser.right
            top: parent.top
            verticalCenter: parent.verticalCenter
        }
        source: "qrc:/ui/assets/phone-call_grande.png"
    }

    Image {
        id: spotifyId
        height: 40
        fillMode: Image.PreserveAspectFit

        anchors {
            left: dialerIcon.right
            top: parent.top
            verticalCenter: parent.verticalCenter
            leftMargin: 25
        }
        source: "qrc:/ui/assets/spotify.png"
    }

    Image {
        id: cameraId
        height: 40
        fillMode: Image.PreserveAspectFit

        anchors {
            left: spotifyId.right
            top: parent.top
            verticalCenter: parent.verticalCenter
            leftMargin: 25
        }
        source: "qrc:/ui/assets/camera-lens.png"
    }

    Image {
        id: statisticalID
        height: 40
        fillMode: Image.PreserveAspectFit
        anchors {
            left: cameraId.right
            top: parent.top
            verticalCenter: parent.verticalCenter
            leftMargin: 25
        }
        source: "qrc:/ui/assets/growth.png"
    }

    Image {
        id: bluethtootID
        height: 40
        fillMode: Image.PreserveAspectFit
        anchors {
            left: statisticalID.right
            top: parent.top
            verticalCenter: parent.verticalCenter
            leftMargin: 25
        }
        source: "qrc:/ui/assets/bluetooth_desk.png"
    }
}

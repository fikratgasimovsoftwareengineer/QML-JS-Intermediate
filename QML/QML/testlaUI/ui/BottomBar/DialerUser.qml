import QtQuick 2.15
import QtQuick.Layouts 1.12
import QtQuick.Controls 2.15
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

        MouseArea{
            anchors.fill: parent
            onClicked: {
                 dialer.visible = true


                } // onclick
        } // mouse area
    } // Image



   Rectangle {
         id: dialer
         width: 350
         height: 450
         color: "#ffffff"
         radius: 15
         border.color: "#303030"
         border.width: 1
         visible: false

         // rectangle anchor
         anchors {
             top:parent.top * .40
             bottom: cameraId.top

             //horizontalCenter: parent.horizontalCenter
             //left:leftScreen.right
             //leftMargin: 5

         }

        Column{
            id:columnID
            anchors{
                top:dialer.top
                bottom: dialer.bottom
                left:dialer.left
                right: dialer.right
            }



            Text{
                text:"Phone Dialer"
                font.bold: true
                font.pixelSize: 16
                color:"#71756b"
                anchors{
                    top:columnID.top
                    bottom: line.top
                    horizontalCenter: parent.horizontalCenter
                    topMargin: 1

            }


         }



         GridLayout {

             id: buttonsGrid
             columns: 3
             anchors{

                 centerIn: parent.Center
                 right: parent.right
                 bottom: parent.bottom
                 left: parent.left
                 leftMargin: 3
             }
             rowSpacing: 3


             width: dialer.width
             height: dialer.height

             Button {
                 text: "1"
                 onClicked: {
                     // Add 1 to the dialer input

                 }
             }

             Button {
                 text: "2"
                 onClicked: {
                     // Add 2 to the dialer input

                 }
             }

             Button {
                 text: "3"
                 onClicked: {
                     // Add 3 to the dialer input

                 }
             }

             Button {
                 text: "4"
                 onClicked: {
                     // Add 4 to the dialer input

                 }
             }

             Button {
                 text: "5"
                 onClicked: {
                     // Add 5 to the dialer input

                 }
             }

             Button {
                 text: "6"
                 onClicked: {
                     // Add 6 to the dialer input

                 }
             }

             Button {
                 text: "7"
                 onClicked: {
                     // Add 7 to the dialer input

                 }
             }

             Button {
                 text: "8"
                 onClicked: {
                     // Add 8 to the dialer input

                 }
             }

             Button {
                 text: "9"
                 onClicked: {
                     // Add 9 to the dialer input

                 }
             }

             Button {
                 text: "*"
                 onClicked: {
                     // Add * to the dialer input

                 }
             }

             Button {
                 text: "0"
                 onClicked: {
                     // Add 0 to the dialer input

                 }
             }

             Button {
                 text: "#"
                 onClicked: {
                     // Add # to the dialer input

                 }
             }

             Button {
                 id: callId
                 text: "Call"
                 font.pixelSize: 20
                 // set width
                 Layout.preferredWidth: buttonsGrid.width / 4
                 onClicked: {
                     // Call the entered phone number

                 }
                 background: Rectangle{
                     color:"green"
                     radius:5
                 }
             }

             Button {
                 text: "Decline"
                 font.pixelSize: 17
                 Layout.preferredWidth: buttonsGrid.width / 4
                 Layout.alignment: Qt.AlignRight
                 Layout.leftMargin:7

                 //Layout.leftMargin: 25
                 onClicked: {
                     dialer.visible = false
                 }
                 background: Rectangle
                 {
                     color:"red"
                     radius:5
                 }

             }
         }// gridlayout

     } // column

   } //rectangle





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

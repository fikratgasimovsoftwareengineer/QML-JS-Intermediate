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
                id:phoneDialerName
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
                TextField{
                    id:numberInput

                    width: dialer.width - 13
                    height: phoneDialerName.height + 7

                    anchors{
                        horizontalCenter: parent.horizontalCenter
                        centerIn: parent.Center
                        top: columnID.bottom
                        verticalCenter: parent.verticalCenter

                    }
                    placeholderText: qsTr("Enter Number")
                    font.bold: true

                    color:"black"
                    readOnly: True
                    background: Rectangle{
                        radius:5

                        border.width: 2
                        border.color: "#387080"
                    }
                   // Check if entered value is string or number
                    // in case of string , throw notification
                    function showDiaglog(){
                        dialogText.open()
                    }
                    onTextChanged: {
                        // get entered number and trim it
                        var valueControl = numberInput.text.trim()
                        // check if it is valid number or string
                        if (!isNaN(parseInt(valueControl)) && isFinite(valueControl) || valueControl === "+" || (numberInput.text.length===0)){
                            console.log('It is Valid Phone');
                        }


                        else{

                             showDiaglog();

                        }

                    }

                } // finish textField


                // Popup Window
             Dialog{
                  id:dialogText

                  //A modal dialog blocks input to other content beneath the dialog.
                  modal:true

                  contentItem: Text{

                      text : "String Value entered"
                  }
                  background: Rectangle{

                    color: "lightblue"
                  }
                  standardButtons: Dialog.Ok | Dialog.Cancel

              }




         } // finish rectangle


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


             width: dialer.width
             height: dialer.height



             Button {
                 text: "1"
                 onClicked: {
                     // Add 1 to the dialer input
                     // add this number to textField
                     numberInput.text +="1"

                 }
             }

             Button {
                 text: "2"
                 onClicked: {
                     // Add 2 to the dialer input
                     numberInput.text +="2"

                 }
             }

             Button {
                 text: "3"
                 onClicked: {
                     // Add 3 to the dialer input
                     numberInput.text +="3"

                 }
             }

             Button {
                 text: "4"
                 onClicked: {
                     // Add 4 to the dialer input
                     numberInput.text +="4"

                 }


             }

             Button {
                 text: "5"
                 onClicked: {
                     // Add 5 to the dialer input
                     numberInput.text += "5"
                 }
             }

             Button {
                 text: "6"
                 onClicked: {
                     // Add 6 to the dialer input
                     numberInput.text +="6"
                 }
             }

             Button {
                 text: "7"
                 onClicked: {
                     // Add 7 to the dialer input
                      numberInput.text +="7"
                 }
             }

             Button {
                 text: "8"
                 onClicked: {
                     // Add 8 to the dialer input
                      numberInput.text +="8"
                 }
             }

             Button {
                 text: "9"
                 onClicked: {
                     // Add 9 to the dialer input
                        numberInput.text +="9"
                 }
             }

             Button {
                 text: "*"
                 onClicked: {
                     // Add * to the dialer input
                        numberInput.text +="*"
                 }
             }

             Button {
                 id:zeroNum
                 text: "0"
                 onClicked: {
                     // Add 0 to the dialer input
                      numberInput.text +="0"
                 }
             }

             Button {
                 text: "#"
                 onClicked: {
                     // Add # to the dialer input
                          numberInput.text +="#"
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
                     var phoneNumber = numberInput.text
                     showDialog(phoneNumber)
                 }

                 background: Rectangle{
                     color: "green"
                     radius: 5
                 }

                 // call button functionality for PopUp
                 function showDialog(phoneNumber){

                     dialogText.contentItem.text = "Are you sure , you want to call this number: " + phoneNumber
                     dialogText.open()
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

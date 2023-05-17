import QtQuick 2.15
import QtQuick.Controls 2.14

Button{
    id:speedMotorButonHandler
    text:"Speed"

    contentItem: Text{
        text:speedMotorButonHandler.text
        horizontalAlignment: Text.AlignLeft

        color:"#595858"
    }
    background: Rectangle{
            color:"lightblue"
            radius:2
            border.width: 1
           }

    //flat: true
    width: 80
    height: 30

    anchors{
        top: parent.bottom
        left:parent.left
        topMargin: 30

    }


    Image {
        id:speedIcon
        source:"qrc:/ui/assets/meter.png"
        width:  parent.width * .40
        height: 30
        anchors{
            right:speedMotorButonHandler.right
            rightMargin: 2
            bottom: speedMotorButonHandler.bottom
        }

    }



}

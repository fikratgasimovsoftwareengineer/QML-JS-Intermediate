import QtQuick 2.15
import QtSensors 5.15

Item {

    property real arrowRotation: 0

    Image {
        id: compassId
        source: "qrc:/ui/assets/compass.svg"
        width: 70
        height: 70
        //anchors.centerIn: parent
    }
    Image {
        id: arrowImage
        x: 32
        y: 15
        width: 5
        height: 40
        fillMode: Image.PreserveAspectCrop
        source: "qrc:/ui/assets/arrow.svg"
        transform: Rotation {
            origin.x: compassId.width / 2
            origin.y: compassId.height / 2
            angle: arrowRotation // set the arrow rotation property here
            objectName: "rect"
        }
        //rotation: compass.rotation
    }

    RotationSensor {
        id: rotationSensor
        active: true
        onReadingChanged: {
            arrowRotation = -Math.round(rotationSensor.reading.z)
            console.log("Arrow Rotation:", arrowRotation)
            //arrowImage.rotation = compass.rotation
        }
    }


    /*Rectangle {
        id: compass
        color: "transparent"
        width: compassId.width
        height: compassId.height
        anchors.centerIn: parent
        rotation: -compass.rotation
    }*/
}

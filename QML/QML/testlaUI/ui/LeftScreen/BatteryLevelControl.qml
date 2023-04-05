import QtQuick 2.15
import QtQuick.Controls 2.15

Item {

    Image {

        id: batterInfoId
        fillMode: Image.PreserveAspectFit
        anchors {
            top: parent.top
            right: parent.right
        }

        source: {
            // if battery level is between [60 100), set to full battery
            if ((batteryCheck.batterLevel < 100)
                    && (batteryCheck.batterLevel >= 60)) {
                return "qrc:/ui/assets/full-battery.png"
            } // if battery level is between [40 59), set to meta battery
            else if ((batteryCheck.batterLevel <= 59)
                     && (batteryCheck.batterLevel >= 40)) {
                return "qrc:/ui/assets/battery-meta.png"
            } // if battery level is between [10 39], set to low battery
            else if ((batteryCheck.batterLevel <= 39)
                     && (batteryCheck.batterLevel >= 10)) {
                return "qrc:/ui/assets/battery-low.png"
            } else {
                // return emptry battery
                return "qrc:/ui/assets/battery-empty.png"
            }
        } // finishe source
    } // Image finishe

    Text {
        id: batteryTextVisualizer

        anchors {
            right: batterInfoId.left

            top: batterInfoId.top
            bottom: batterInfoId.bottom
            //verticalCenter: Text.AlignVCenter
            rightMargin: 10
        }
        fontSizeMode: Text.Fit

        verticalAlignment: Text.AlignVCenter
        text: batteryCheck.batterLevel + " %"
        font.bold: true
        font.pixelSize: 16
        color: "#303030"
    }
}

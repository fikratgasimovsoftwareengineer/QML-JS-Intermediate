import QtQuick 2.15
import QtQuick.Controls 2.15
import QtWebView 1.4
import QtLocation 5.15
import QtPositioning 5.15

Row {

    spacing: 20
    width: parent

    Text {
        id: subText
        width: parent.width * 0.4
        height: parent.height
        color: "blue"
        text: qsTr("QML & QuickWidget Demo")
        anchors.centerIn: parent
        font.pixelSize: 20
        anchors.left: parent.Center
        anchors.verticalCenter: parent.horizontalCenter
        font.bold: true
        font.italic: true
    }


    /*WebView {
        url: "file:///home/fikrat/JS/JS/map.html"
        width: parent.width * 0.9
        height: parent.height * 0.8
        anchors.right: parent.right
        anchors.verticalCenter: parent.verticalCenter
    }*/
    PositionSource {
        id: positionSource
        active: true
        onPositionChanged: {
            map.center = QtPositioning.coordinate(position.coordinate.latitude,
                                                  position.coordinate.longitude)
            map.zoomLevel = 14
        }
    }
    Plugin {
        id: mapPlugin
        name: "osm"
    }
    Map {
        id: map
        anchors.fill: parent
        plugin: mapPlugin
        //center: QtPositioning.coordinate(59.91, 10.75) // Oslo
        center: QtPositioning.coordinate(position.coordinate.latitude,
                                         position.coordinate.longitude)
        zoomLevel: 14
        anchors.right: parent.right
        anchors.verticalCenter: parent.verticalCenter
    }
}

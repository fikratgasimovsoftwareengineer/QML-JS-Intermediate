import QtQuick 2.15
import QtQuick.Controls 2.15
import QtWebView 1.4

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

    WebView {
        url: "file:///home/fikrat/JS/JS/map.html"
        width: parent.width * 0.9
        height: parent.height * 0.8
        anchors.right: parent.right
        anchors.verticalCenter: parent.verticalCenter
    }


    /*WebView {
        id: webView
        anchors.fill: parent
        url: "file:///home/fikrat/JS/JS/map.html"
        visible: true
    }*/
}

import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.12
import QtWebView 1.0

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Call JS from C++")

    WebView {
        id: webView
        anchors.fill: parent
        url: "file:///home/fikrat/JS/JS/map.html"
        visible: true
    }

    function sendCommand(command) {
        // send a command to the ArduPilot simulation using MAVLink
        mavlink.sendCommand(command)
    }

    function qmlJSFunction(param) {
        console.log("QML talking.., C++ called me with parameter: " + param + "returning back\n")

        //return value.toString()
        return "this is QML, over to you c++. Thanks for the call"
    }

    Button {
        id: mButton
        text: "Call QMl function with c++"
        onClicked: {
            qmlJSCaller.cppMethod("Qml Calling..")
        }
    }
}

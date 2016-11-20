import QtQuick 2.0

Rectangle {
    width:parent.width
    height:parent.height - header.height - bottomer.height
//    color:"green"
    
    AnimatedImage
    {
        playing:true
        width:100
        height: 100
        source:"../images/renlian.gif"
        anchors{horizontalCenter: parent.horizontalCenter;
        top:parent.top;topMargin: parent.height * 0.2}
    }
    
    Rectangle
    {
        width:parent.width *0.3
        height:parent.height * 0.4
        color:"#3434a3"
        radius:10
        anchors{horizontalCenter: parent.horizontalCenter;
        top:parent.top;topMargin: parent.height *0.5}
    }
}

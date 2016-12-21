import QtQuick 2.0

Item
{
    id:root
    width:800
    height:600

    property int name:0

    property int currentview:0
    

    property variant hap:jj

    Component.onCompleted:
    {
        console.log("ok!");
        root.hap.invoke("fffff",0);

    }
    
}


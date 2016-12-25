import QtQuick 2.0

Item
{
    id:tt
    width:800
    height:600

    property int name:0

    property int currentview:0
    

    property variant hap:jj

    property variant pp:jj.filds

//    property string ff: filds["1"]

    Component.onCompleted:
    {
        console.log("ok!");
        tt.hap.invoke("fffff",0);

    }
}


import QtQuick 2.0

Item
{
    id:tt
    width:800
    height:600

    property int name:0

    property int currentview:0
    

    property variant hap:jj

    property variant filds:jj.filds

    Component.onCompleted:
    {
        console.log("ok!");
        tt.hap.invoke("fffff",0);

    }
}


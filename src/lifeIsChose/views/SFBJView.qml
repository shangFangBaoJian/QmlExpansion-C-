import QtQuick 2.0

SFBJ
{
    id:root
    Rectangle
    {
        anchors.fill: parent
        radius: 10
        color: "#33FFFF"
        Column
        {
            anchors.fill:parent
            SFBJHeader
            {
                id:header
            }

            Rectangle
            {
                id:mainly
                width:parent.width
                height:parent.height - header.height - bottomer.height
                color:"green"

            }

            SFBJBottomer
            {
                id:bottomer
            }
        }
    }
}

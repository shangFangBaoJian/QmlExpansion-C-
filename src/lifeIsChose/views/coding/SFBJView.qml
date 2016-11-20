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

            SFBJVerticalCenter
            {
                id:mainly
            }

            SFBJBottomer
            {
                id:bottomer
            }
        }//Column
    }//Rectangle
}

import QtQuick 2.0

SFBJ
{
    id:tt
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

                Test
                {
                    id:tit
                    anchors.horizontalCenter: parent.horizontalCenter
                }
            }

            SFBJBottomer
            {
                id:bottomer
            }
        }//Column
    }//Rectangle


}

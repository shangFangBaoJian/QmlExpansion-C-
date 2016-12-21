import QtQuick 2.0

Item {
    width: 300
    height: 200

    Row
    {
        spacing: 50
        Rectangle
        {
            width: 80
            height: 50
            color:"red"
        }

        Rectangle
        {
            width: 80
            height: 50
            color:"green"

            Text
            {
                text:"Button"
            }
            MouseArea
            {
                onClicked:
                {

                }
            }
        }
    }
}

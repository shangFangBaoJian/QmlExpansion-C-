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
            color:tt.pp["3"]
        }

        Rectangle
        {
            width: 80
            height: 50
            color:"green"

            Text
            {
                text:tt.pp["1"]
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

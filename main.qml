import QtQuick 2.0
import QtQuick.Controls 2.0

ApplicationWindow {
    visible: true
    width: 800
    height: 800
    title: qsTr("Language Translation Demo")


    Item {
        width: parent.width
        height: parent.height
         Rectangle{
             anchors.fill: parent
             color: "#4f5b66"
             border.color: "#910f8b"
                 border.width: 4

        Text {
            id: textElement
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.top: parent.top
            anchors.topMargin: 100
            color: "white"

            text: qsTr("Hello World")+backend.emptyString
            font.pixelSize: 40
        }


        Text {
            id: textElement2

            anchors.bottom:  languageComboBox.top
            anchors.bottomMargin: 10
            anchors.left: parent.left
            anchors.leftMargin: 150
            anchors.topMargin: 20
            color: "white"

            text: qsTr("Select your Language:")
            font.pixelSize:20
        }

        ComboBox {
            id: languageComboBox
            width: parent.width-300
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.top: textElement.bottom
            anchors.topMargin: 100
             font.pixelSize: 20

            model: ["English", "French","Hindi","Italian","German","Russian","Spanish","Portuguees"] // Language options
            onCurrentIndexChanged: {
                // Call C++ function to change language
                if(currentIndex===0)
                {
                   //eng
                    backend.updateLanguage(31)

                }else    if(currentIndex===1)
                {
                    //french
                    backend.updateLanguage(37)

                }else  if(currentIndex===2)
                {
                    //hindi

                    backend.updateLanguage(100)

                }else    if(currentIndex===3)
                {
                    //ital
                    backend.updateLanguage(106)

                }else  if(currentIndex===4)
                {
                 //german
                    backend.updateLanguage(42)

                }else    if(currentIndex===5)
                {
                    //russian
                    backend.updateLanguage(37)

                }else  if(currentIndex===6)
                {
                   //spanish
                    backend.updateLanguage(197)

                }else    if(currentIndex===7)
                {
                    //port
                    backend.updateLanguage(173)

                }

            }
        }
    }
    }
}

#!/bin/bash

let idx=0

for y_coord in {0..500..100}
do
        for x_coord in {0..880..80}
        do
                let y_coord_matx=y_coord/100
                let x_coord_matx=x_coord/80
                
                let y_coord_pixm=y_coord+20
                pixmapImg="\"../GPAuth-dataset/dataset/burnt-paper/16.1.jpg\""
                
                echo "// ($y_coord_matx, $x_coord_matx)"
                echo "refIdLabel[$idx] = new QLabel(refIdFrame);"
                echo "refIdLabel[$idx] -> setObjectName(QString::fromUtf8(\"refIdLabel[$y_coord_matx, $x_coord_matx]\");"
                echo "refIdLabel[$idx] -> setGeometry(QRect($x_coord, $y_coord, 71, 21));"
                echo "refIdLabel[$idx] -> setAlignment(Qt::AlignCenter);"
                echo "refIdLabel[$idx] -> setStyleSheet(QString::fromUtf8("
                echo "        \"background-color: rgb(20, 20, 20);\""
                echo "        \"border-color: rgb(0, 0, 0);\""
                echo "        \"border-width: 2px;\""
                echo "        \"border-style: solid;\""
                echo "        \"font-size: 12px;\""
                echo "        \"font-family: \\\"Ubuntu Mono\\\";\""
                echo "        \"font-weight: bold;\""
                echo "        \"color: white;\""
                echo "));"
                
                echo " "
                
                echo "refImgLabel[$idx] = new QLabel(refImgFrame);"
                echo "refImgLabel[$idx] -> setObjectName(QString::fromUtf8(\"refImgLabel[$y_coord_matx, $x_coord_matx]\"));"
                echo "refImgLabel[$idx] -> setGeometry(QRect($x_coord, $y_coord_pixm, 71, 71));"
                echo "refImgLabel[$idx] -> setAlignment(Qt::AlignCenter);"
                echo "refImgLabel[$idx] -> setPixmap(QPixmap(QString::fromUtf8($pixmapImg)));"
                echo "refImgLabel[$idx] -> setStyleSheet(QString::fromUtf8("
                echo "        \"background-color: rgb(20, 20, 20);\""
                echo "        \"border-color: rgb(0, 0, 0);\""
                echo "        \"border-width: 2px;\""
                echo "        \"border-style: solid;\""
                echo "        \"font-size: 12px;"
                echo "        \"font-family: \\\"Ubuntu Mono\\\";"
                echo "        \"font-weight: bold;"
                echo "        \"color: white;\""
                echo "));"
                
                echo " "
                
                let idx+=1
        done
        
        echo " "
done

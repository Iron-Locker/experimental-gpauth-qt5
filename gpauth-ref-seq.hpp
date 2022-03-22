#ifndef GPAUTH_2D_REF_2D_CODEDWXEYW_H
#define GPAUTH_2D_REF_2D_CODEDWXEYW_H

#include <string>

#include "/usr/include/x86_64-linux-gnu/qt5/QtCore/QVariant"
#include "/usr/include/x86_64-linux-gnu/qt5/QtGui/QIcon"
#include "/usr/include/x86_64-linux-gnu/qt5/QtWidgets/QApplication"
#include "/usr/include/x86_64-linux-gnu/qt5/QtWidgets/QFrame"
#include "/usr/include/x86_64-linux-gnu/qt5/QtWidgets/QLabel"
#include "/usr/include/x86_64-linux-gnu/qt5/QtWidgets/QLineEdit"
#include "/usr/include/x86_64-linux-gnu/qt5/QtWidgets/QMainWindow"
#include "/usr/include/x86_64-linux-gnu/qt5/QtWidgets/QPushButton"
#include "/usr/include/x86_64-linux-gnu/qt5/QtWidgets/QWidget"

#define GPAUTH_WINDOW_H_SPAN 1215
#define GPAUTH_WINDOW_V_SPAN 625

QT_BEGIN_NAMESPACE

class Ui_GPAuth
{
public:
        QWidget *centralwidget;

        QLabel *randObjSeqLabel;
        QLineEdit *objSeqLineEdit;
        
        QFrame *refIdFrame;
        QFrame *refImgFrame;
        
        QLabel *refIdLabels[72];
        QLabel *refImgLabels[72];
        
        QLabel *inpRefPassLabel;
        QLineEdit *inpRefPassLineEdit;
        
        QPushButton *verifyPushButton;
        QPushButton *resetRandPushButton;
        
        void setupUi(QMainWindow *GPAuth)
        {
                if (GPAuth -> objectName().isEmpty())
                        GPAuth -> setObjectName(QString::fromUtf8("GPAuth"));
                        
                GPAuth -> resize(GPAUTH_WINDOW_H_SPAN, GPAUTH_WINDOW_V_SPAN);
                
                QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
                sizePolicy.setHorizontalStretch(0);
                sizePolicy.setVerticalStretch(0);
                GPAuth -> setSizePolicy(sizePolicy);
                GPAuth->setMinimumSize(QSize(GPAUTH_WINDOW_H_SPAN, GPAUTH_WINDOW_V_SPAN));
                GPAuth->setMaximumSize(QSize(GPAUTH_WINDOW_H_SPAN, GPAUTH_WINDOW_V_SPAN));
                
                centralwidget = new QWidget(GPAuth);
                centralwidget -> setObjectName(QString::fromUtf8("centralwidget"));
                
                randObjSeqLabel = new QLabel(centralwidget);
                randObjSeqLabel -> setObjectName(QString::fromUtf8("randObjSeqLabel"));
                randObjSeqLabel -> setGeometry(QRect(10, 10, 191, 31));
                
                objSeqLineEdit = new QLineEdit(centralwidget);
                objSeqLineEdit -> setObjectName(QString::fromUtf8("objSeqLineEdit"));
                objSeqLineEdit -> setGeometry(QRect(200, 10, 1002, 31));
                objSeqLineEdit -> setStyleSheet(QString::fromUtf8("font-weight:bold;"));
                
                refIdFrame = new QFrame(centralwidget);
                refIdFrame -> setObjectName(QString::fromUtf8("refIdFrame"));
                refIdFrame -> setGeometry(QRect(10, 60, 1208, 500));
                refIdFrame -> setFrameShape(QFrame::StyledPanel);
                refIdFrame -> setFrameShadow(QFrame::Raised);
                
                refImgFrame = new QFrame(centralwidget);
                refImgFrame -> setObjectName(QString::fromUtf8("refImgFrame"));
                refImgFrame -> setGeometry(QRect(10, 60, 1208, 500));
                refImgFrame -> setFrameShape(QFrame::StyledPanel);
                refImgFrame -> setFrameShadow(QFrame::Raised);
                
                int idx = 0;
                for (int y_coord = 0; y_coord <= 400; y_coord += 100) {
                        for (int x_coord = 0; x_coord <= 1120; x_coord += 80) {
                                std::string matx;
                                
                                matx = "refIdLabels["; matx += std::to_string(int(y_coord/100));
                                matx += ", "; matx += std::to_string(int(x_coord/80)); matx += "]"; 
                                
                                refIdLabels[idx] = new QLabel(refIdFrame);
                                refIdLabels[idx] -> setObjectName(QString::fromUtf8(matx.c_str()));
                                refIdLabels[idx] -> setGeometry(QRect(x_coord, y_coord, 71, 21));
                                refIdLabels[idx] -> setAlignment(Qt::AlignCenter);
                                refIdLabels[idx] -> setStyleSheet(QString::fromUtf8(
                                        "background-color: rgba(20, 20, 20, 0.3);"
                                        "border-color: rgba(0, 0, 0, 0.3);"
                                        "border-width: 2px;"
                                        "border-style: solid;"
                                        "font-size: 12px;"
                                        "font-family: \"Ubuntu Mono\";"
                                        "font-weight: bold;"
                                        "color: white;"
                                ));
                                
                                matx = "refImgLabels["; matx += std::to_string(int(y_coord/100));
                                matx += ", "; matx += std::to_string(int(x_coord/80)); matx += "]";
                                 
                                refImgLabels[idx] = new QLabel(refImgFrame);
                                refImgLabels[idx] -> setObjectName(QString::fromUtf8(matx.c_str()));
                                refImgLabels[idx] -> setGeometry(QRect(x_coord, y_coord + 20, 71, 71));
                                refImgLabels[idx] -> setAlignment(Qt::AlignCenter);
                                refImgLabels[idx] -> setPixmap(QPixmap(QString::fromUtf8("../GPAuth-dataset/dataset/burnt-paper/16.1.jpg")));
                                refImgLabels[idx] -> setStyleSheet(QString::fromUtf8(
                                        "background-color: rgba(20, 20, 20, 0.3);"
                                        "border-color: rgba(0, 0, 0, 0.3);"
                                        "border-width: 2px;"
                                        "border-style: solid;"
                                        "font-size: 12px;"
                                        "font-family: \"Ubuntu Mono\";"
                                        "font-weight: bold;"
                                        "color: white;"
                                ));
                        }
                
                }
                
                inpRefPassLabel = new QLabel(centralwidget);
                inpRefPassLabel -> setObjectName(QString::fromUtf8("inpRefPassLabel"));
                inpRefPassLabel -> setGeometry(QRect(10, 575, 161, 16));
                
                inpRefPassLineEdit = new QLineEdit(centralwidget);
                inpRefPassLineEdit -> setObjectName(QString::fromUtf8("inpRefPassLineEdit"));
                inpRefPassLineEdit -> setGeometry(175, 570, 400, 29);
                
                verifyPushButton = new QPushButton(centralwidget);
                verifyPushButton -> setObjectName(QString::fromUtf8("verifyPushButton"));
                verifyPushButton -> setGeometry(781, 570, 261, 31);
                
                resetRandPushButton = new QPushButton(centralwidget);
                resetRandPushButton -> setObjectName(QString::fromUtf8("resetRandPushButton"));
                resetRandPushButton -> setGeometry(1052, 570, 151, 29);
                
                GPAuth -> setCentralWidget(centralwidget);
                
                retranslateUi(GPAuth);
                
                QMetaObject::connectSlotsByName(GPAuth);
        }
                
        void retranslateUi(QMainWindow *GPAuth)
        {
                GPAuth -> setWindowTitle(QCoreApplication::translate("GPAuth", "GPAuth ref_id sequencing - [Demo]", nullptr));
                randObjSeqLabel -> setText(QCoreApplication::translate("GPAuth", "Your random object sequence:", nullptr));
                objSeqLineEdit -> setText(QCoreApplication::translate("GPAuth", "ghost => tea-cup => banana => horse => beach => door => window", nullptr));
                inpRefPassLabel -> setText(QCoreApplication::translate("GPAuth", "Enter reference passcode:", nullptr));
                verifyPushButton -> setText(QCoreApplication::translate("GPAuth", "Verify passcode", nullptr));
                resetRandPushButton -> setText(QCoreApplication::translate("GPAuth", "Reset / Randomise", nullptr));
        }
};

namespace Ui {
        class GPAuth: public Ui_GPAuth {};
}

QT_END_NAMESPACE

#endif // GPAUTH_#D_REF_2D_CODEOEPEVW_H

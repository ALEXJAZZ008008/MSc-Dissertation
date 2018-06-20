/********************************************************************************
** Form generated from reading UI file 'motor_control.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOTOR_CONTROL_H
#define UI_MOTOR_CONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_motor_control
{
public:
    QGridLayout *gridLayout_2;
    QDialogButtonBox *buttonBox;
    QGridLayout *gridLayout;
    QLabel *_lbl_current_tilt;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLineEdit *_lne_current_tilt;
    QTextEdit *_lbl_output_msg;
    QPushButton *_psh_disconnect;
    QPushButton *_psh_connect;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *motor_control)
    {
        if (motor_control->objectName().isEmpty())
            motor_control->setObjectName(QStringLiteral("motor_control"));
        motor_control->resize(286, 338);
        gridLayout_2 = new QGridLayout(motor_control);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        buttonBox = new QDialogButtonBox(motor_control);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 3, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        _lbl_current_tilt = new QLabel(motor_control);
        _lbl_current_tilt->setObjectName(QStringLiteral("_lbl_current_tilt"));

        gridLayout->addWidget(_lbl_current_tilt, 2, 0, 1, 1);

        pushButton = new QPushButton(motor_control);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon(QIcon::fromTheme(QStringLiteral("go-up")));
        pushButton->setIcon(icon);

        gridLayout->addWidget(pushButton, 3, 0, 1, 1);

        pushButton_2 = new QPushButton(motor_control);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QIcon icon1(QIcon::fromTheme(QStringLiteral("go-down")));
        pushButton_2->setIcon(icon1);

        gridLayout->addWidget(pushButton_2, 3, 1, 1, 1);

        pushButton_3 = new QPushButton(motor_control);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        QIcon icon2(QIcon::fromTheme(QStringLiteral("dialog-information")));
        pushButton_3->setIcon(icon2);

        gridLayout->addWidget(pushButton_3, 3, 2, 1, 1);

        _lne_current_tilt = new QLineEdit(motor_control);
        _lne_current_tilt->setObjectName(QStringLiteral("_lne_current_tilt"));

        gridLayout->addWidget(_lne_current_tilt, 2, 1, 1, 2);

        _lbl_output_msg = new QTextEdit(motor_control);
        _lbl_output_msg->setObjectName(QStringLiteral("_lbl_output_msg"));

        gridLayout->addWidget(_lbl_output_msg, 1, 0, 1, 3);

        _psh_disconnect = new QPushButton(motor_control);
        _psh_disconnect->setObjectName(QStringLiteral("_psh_disconnect"));

        gridLayout->addWidget(_psh_disconnect, 0, 2, 1, 1);

        _psh_connect = new QPushButton(motor_control);
        _psh_connect->setObjectName(QStringLiteral("_psh_connect"));

        gridLayout->addWidget(_psh_connect, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 2, 0, 1, 1);


        retranslateUi(motor_control);
        QObject::connect(buttonBox, SIGNAL(accepted()), motor_control, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), motor_control, SLOT(reject()));

        QMetaObject::connectSlotsByName(motor_control);
    } // setupUi

    void retranslateUi(QDialog *motor_control)
    {
        motor_control->setWindowTitle(QApplication::translate("motor_control", "Control Kinect motor", Q_NULLPTR));
        _lbl_current_tilt->setText(QApplication::translate("motor_control", "Current tilt:       ", Q_NULLPTR));
        pushButton->setText(QApplication::translate("motor_control", "Up", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("motor_control", "Down", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("motor_control", "Info", Q_NULLPTR));
        _psh_disconnect->setText(QApplication::translate("motor_control", "Disconnect", Q_NULLPTR));
        _psh_connect->setText(QApplication::translate("motor_control", "Connect", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class motor_control: public Ui_motor_control {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOTOR_CONTROL_H

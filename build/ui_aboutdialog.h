/********************************************************************************
** Form generated from reading UI file 'aboutdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QLabel *label_4;
    QLabel *label;
    QLabel *versionLabel;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QLabel *copyrightLabel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QStringLiteral("AboutDialog"));
        AboutDialog->resize(1090, 256);
        AboutDialog->setStyleSheet(QLatin1String("background-image: url(:/images/as1);\n"
"color: rgb(0, 170, 255);"));
        label_4 = new QLabel(AboutDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(9, 9, 256, 238));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/images/about")));
        label = new QLabel(AboutDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(540, 40, 151, 51));
        QFont font;
        font.setPointSize(28);
        label->setFont(font);
        label->setCursor(QCursor(Qt::IBeamCursor));
        label->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        versionLabel = new QLabel(AboutDialog);
        versionLabel->setObjectName(QStringLiteral("versionLabel"));
        versionLabel->setGeometry(QRect(630, 80, 64, 20));
        versionLabel->setCursor(QCursor(Qt::IBeamCursor));
        versionLabel->setText(QStringLiteral("0.3.666-beta"));
        versionLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        widget = new QWidget(AboutDialog);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_2 = new QLabel(AboutDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(272, 131, 778, 39));
        label_2->setCursor(QCursor(Qt::IBeamCursor));
        label_2->setTextFormat(Qt::RichText);
        label_2->setWordWrap(true);
        label_2->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        copyrightLabel = new QLabel(AboutDialog);
        copyrightLabel->setObjectName(QStringLiteral("copyrightLabel"));
        copyrightLabel->setGeometry(QRect(272, 86, 241, 39));
        copyrightLabel->setCursor(QCursor(Qt::IBeamCursor));
        copyrightLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        buttonBox = new QDialogButtonBox(AboutDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(272, 223, 75, 23));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        retranslateUi(AboutDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AboutDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AboutDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QApplication::translate("AboutDialog", "About AbjcoinCommerce", 0));
        label->setText(QApplication::translate("AboutDialog", "<b>AbjcoinCommerce</b> version", 0));
        label_2->setText(QApplication::translate("AboutDialog", "\n"
"This is experimental software.\n"
"\n"
"Distributed under the MIT/X11 software license, see the accompanying file COPYING or <a href=\"http://www.opensource.org/licenses/mit-license.php\">http://www.opensource.org/licenses/mit-license.php</a>.\n"
"\n"
"This product includes software developed by the OpenSSL Project for use in the OpenSSL Toolkit (<a href=\"https://www.openssl.org/\">https://www.openssl.org/</a>) and cryptographic software written by Eric Young (<a href=\"mailto:eay@cryptsoft.com\">eay@cryptsoft.com</a>) and UPnP software written by Thomas Bernard.", 0));
        copyrightLabel->setText(QApplication::translate("AboutDialog", "Copyright \302\251 2009-2014 The Bitcoin developers\n"
"Copyright \302\251 2012-2014 The NovaCoin developers\n"
"Copyright \302\251 2017 The AbjcoinCommerce developers", 0));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H

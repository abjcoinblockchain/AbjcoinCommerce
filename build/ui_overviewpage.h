/********************************************************************************
** Form generated from reading UI file 'overviewpage.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVERVIEWPAGE_H
#define UI_OVERVIEWPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OverviewPage
{
public:
    QFrame *frame;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QFrame *frame_2;
    QListView *listTransactions;
    QLabel *labelWalletStatus;
    QLabel *labelTotalText;
    QLabel *labelTotal;
    QLabel *labelTransactionsStatus;
    QLabel *label_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QLabel *label_5;
    QLabel *label;
    QLabel *labelBalance;
    QLabel *label_6;
    QLabel *labelStake;
    QLabel *label_3;
    QLabel *labelUnconfirmed;
    QLabel *labelImmatureText;
    QLabel *labelImmature;
    QPushButton *pushButton_5;

    void setupUi(QWidget *OverviewPage)
    {
        if (OverviewPage->objectName().isEmpty())
            OverviewPage->setObjectName(QStringLiteral("OverviewPage"));
        OverviewPage->resize(1323, 618);
        frame = new QFrame(OverviewPage);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 10, 22, 22));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));

        verticalLayout_4->addLayout(horizontalLayout_4);

        frame_2 = new QFrame(OverviewPage);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(10, 30, 1281, 541));
        frame_2->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
""));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        listTransactions = new QListView(frame_2);
        listTransactions->setObjectName(QStringLiteral("listTransactions"));
        listTransactions->setGeometry(QRect(579, 220, 371, 192));
        QFont font;
        font.setPointSize(8);
        font.setBold(true);
        font.setWeight(75);
        listTransactions->setFont(font);
        listTransactions->setStyleSheet(QLatin1String("QListView { background: transparent; }\n"
"font: 75 9pt \"MS Shell Dlg 2\";"));
        listTransactions->setFrameShape(QFrame::NoFrame);
        listTransactions->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setSelectionMode(QAbstractItemView::NoSelection);
        labelWalletStatus = new QLabel(frame_2);
        labelWalletStatus->setObjectName(QStringLiteral("labelWalletStatus"));
        labelWalletStatus->setGeometry(QRect(170, 0, 83, 18));
        labelWalletStatus->setStyleSheet(QStringLiteral("QLabel { color: red; }"));
        labelWalletStatus->setText(QStringLiteral("(out of sync)"));
        labelWalletStatus->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelTotalText = new QLabel(frame_2);
        labelTotalText->setObjectName(QStringLiteral("labelTotalText"));
        labelTotalText->setGeometry(QRect(240, 400, 151, 18));
        QFont font1;
        font1.setFamily(QStringLiteral("MS Sans Serif"));
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        labelTotalText->setFont(font1);
        labelTotal = new QLabel(frame_2);
        labelTotal->setObjectName(QStringLiteral("labelTotal"));
        labelTotal->setGeometry(QRect(240, 410, 411, 41));
        QFont font2;
        font2.setFamily(QStringLiteral("MS Sans Serif"));
        font2.setPointSize(19);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        labelTotal->setFont(font2);
        labelTotal->setCursor(QCursor(Qt::IBeamCursor));
        labelTotal->setText(QStringLiteral("0 BTC"));
        labelTotal->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        labelTransactionsStatus = new QLabel(frame_2);
        labelTransactionsStatus->setObjectName(QStringLiteral("labelTransactionsStatus"));
        labelTransactionsStatus->setGeometry(QRect(1060, 0, 83, 20));
        labelTransactionsStatus->setStyleSheet(QStringLiteral("QLabel { color: red; }"));
        labelTransactionsStatus->setText(QStringLiteral("(out of sync)"));
        labelTransactionsStatus->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(590, 190, 153, 20));
        pushButton = new QPushButton(frame_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(0, 170, 151, 41));
        pushButton->setStyleSheet(QStringLiteral("background-image: url(:/images/a1);"));
        pushButton->setFlat(true);
        pushButton_2 = new QPushButton(frame_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(0, 210, 151, 41));
        pushButton_2->setStyleSheet(QStringLiteral("background-image: url(:/images/a2);"));
        pushButton_2->setFlat(true);
        pushButton_3 = new QPushButton(frame_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(0, 250, 151, 41));
        pushButton_3->setStyleSheet(QStringLiteral("background-image: url(:/images/a3);"));
        pushButton_3->setFlat(true);
        pushButton_4 = new QPushButton(frame_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(0, 290, 151, 41));
        pushButton_4->setStyleSheet(QStringLiteral("background-image: url(:/images/a4);"));
        pushButton_4->setFlat(true);
        layoutWidget = new QWidget(frame_2);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(1000, 90, 251, 183));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        QFont font3;
        font3.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font3.setPointSize(8);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(50);
        label_5->setFont(font3);
        label_5->setStyleSheet(QStringLiteral("font: 8pt \"MS Shell Dlg 2\";"));

        formLayout->setWidget(0, QFormLayout::SpanningRole, label_5);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font4;
        font4.setFamily(QStringLiteral("Arial"));
        font4.setPointSize(9);
        font4.setBold(false);
        font4.setItalic(false);
        font4.setWeight(50);
        label->setFont(font4);

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        labelBalance = new QLabel(layoutWidget);
        labelBalance->setObjectName(QStringLiteral("labelBalance"));
        QFont font5;
        font5.setFamily(QStringLiteral("Arial"));
        font5.setPointSize(9);
        font5.setBold(true);
        font5.setItalic(false);
        font5.setWeight(75);
        labelBalance->setFont(font5);
        labelBalance->setCursor(QCursor(Qt::IBeamCursor));
        labelBalance->setText(QStringLiteral("0 ABJC"));
        labelBalance->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout->setWidget(1, QFormLayout::FieldRole, labelBalance);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font4);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_6);

        labelStake = new QLabel(layoutWidget);
        labelStake->setObjectName(QStringLiteral("labelStake"));
        labelStake->setFont(font5);
        labelStake->setCursor(QCursor(Qt::IBeamCursor));
        labelStake->setText(QStringLiteral("0 ABJC"));
        labelStake->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout->setWidget(2, QFormLayout::FieldRole, labelStake);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font4);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        labelUnconfirmed = new QLabel(layoutWidget);
        labelUnconfirmed->setObjectName(QStringLiteral("labelUnconfirmed"));
        labelUnconfirmed->setFont(font5);
        labelUnconfirmed->setCursor(QCursor(Qt::IBeamCursor));
        labelUnconfirmed->setText(QStringLiteral("0 ABJC"));
        labelUnconfirmed->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout->setWidget(3, QFormLayout::FieldRole, labelUnconfirmed);

        labelImmatureText = new QLabel(layoutWidget);
        labelImmatureText->setObjectName(QStringLiteral("labelImmatureText"));
        labelImmatureText->setFont(font4);

        formLayout->setWidget(4, QFormLayout::LabelRole, labelImmatureText);

        labelImmature = new QLabel(layoutWidget);
        labelImmature->setObjectName(QStringLiteral("labelImmature"));
        labelImmature->setFont(font5);
        labelImmature->setText(QStringLiteral("0 ABJC"));
        labelImmature->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout->setWidget(4, QFormLayout::FieldRole, labelImmature);

        pushButton_5 = new QPushButton(frame_2);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(0, 330, 151, 41));
        pushButton_5->setStyleSheet(QStringLiteral("background-image: url(:/images/a5);"));
        pushButton_5->setFlat(true);

        retranslateUi(OverviewPage);

        QMetaObject::connectSlotsByName(OverviewPage);
    } // setupUi

    void retranslateUi(QWidget *OverviewPage)
    {
        OverviewPage->setWindowTitle(QApplication::translate("OverviewPage", "Form", 0));
#ifndef QT_NO_TOOLTIP
        labelWalletStatus->setToolTip(QApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the AbjcoinCommerce network after a connection is established, but this process has not completed yet.", 0));
#endif // QT_NO_TOOLTIP
        labelTotalText->setText(QApplication::translate("OverviewPage", "Total ABJC:", 0));
#ifndef QT_NO_TOOLTIP
        labelTotal->setToolTip(QApplication::translate("OverviewPage", "Your current total balance", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelTransactionsStatus->setToolTip(QApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the AbjcoinCommerce network after a connection is established, but this process has not completed yet.", 0));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("OverviewPage", "<html><head/><body><p><span style=\" font-weight:600;\">ABJC transactions</span></p></body></html>", 0));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        label_5->setText(QApplication::translate("OverviewPage", "Coin ABJC", 0));
        label->setText(QApplication::translate("OverviewPage", "Spendable:", 0));
#ifndef QT_NO_TOOLTIP
        labelBalance->setToolTip(QApplication::translate("OverviewPage", "Your current spendable balance", 0));
#endif // QT_NO_TOOLTIP
        label_6->setText(QApplication::translate("OverviewPage", "Stake:", 0));
#ifndef QT_NO_TOOLTIP
        labelStake->setToolTip(QApplication::translate("OverviewPage", "Total of coins that was staked, and do not yet count toward the current balance", 0));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("OverviewPage", "Unconfirmed:", 0));
#ifndef QT_NO_TOOLTIP
        labelUnconfirmed->setToolTip(QApplication::translate("OverviewPage", "Total of transactions that have yet to be confirmed, and do not yet count toward the current balance", 0));
#endif // QT_NO_TOOLTIP
        labelImmatureText->setText(QApplication::translate("OverviewPage", "Immature:", 0));
#ifndef QT_NO_TOOLTIP
        labelImmature->setToolTip(QApplication::translate("OverviewPage", "Mined balance that has not yet matured", 0));
#endif // QT_NO_TOOLTIP
        pushButton_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class OverviewPage: public Ui_OverviewPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERVIEWPAGE_H

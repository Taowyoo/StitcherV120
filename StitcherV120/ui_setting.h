/********************************************************************************
** Form generated from reading UI file 'setting.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTING_H
#define UI_SETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_setting
{
public:
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QGroupBox *rotationGroupBox;
    QGridLayout *gridLayout_2;
    QLineEdit *conf_thresh_lineEdit;
    QLabel *work_megapix_label;
    QLineEdit *work_megpix_lineEdit;
    QLabel *features_label;
    QComboBox *features_comboBox;
    QLabel *ba_label;
    QLabel *wave_correct_label;
    QLineEdit *match_conf_lineEdit;
    QLabel *estimator_label;
    QLabel *match_conf_label;
    QLabel *matcher_label;
    QComboBox *matcher_comboBox;
    QComboBox *wave_correct_comboBox;
    QComboBox *estimator_comboBox;
    QComboBox *ba_comboBox;
    QLabel *conf_thresh_label;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *compositeGroupBox;
    QGridLayout *gridLayout;
    QLabel *warp_label;
    QComboBox *warp_comboBox;
    QLabel *seam_megapix_label;
    QLineEdit *seam_megapix_lineEdit;
    QLabel *seam_label;
    QComboBox *seam_comboBox;
    QLabel *compose_megapix_label;
    QLineEdit *compose_megapix_lineEdit;
    QLabel *expos_comp_label;
    QComboBox *expos_comp_comboBox;
    QLabel *blend_label;
    QComboBox *blend_comboBox;
    QLabel *blend_strength_label;
    QLineEdit *blend_strength_lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *stitcher3label;
    QLineEdit *stitcher3lineEdit;
    QPushButton *stitcher3pushButton;
    QLabel *stitcher6label;
    QLineEdit *stitcher6lineEdit;
    QPushButton *stitcher6pushButton;
    QHBoxLayout *horizontalLayout_3;
    QLabel *currentStitcherlabel;
    QComboBox *currentStitchercomboBox;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *applyButton;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *setting)
    {
        if (setting->objectName().isEmpty())
            setting->setObjectName(QStringLiteral("setting"));
        setting->resize(700, 329);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(setting->sizePolicy().hasHeightForWidth());
        setting->setSizePolicy(sizePolicy);
        setting->setMinimumSize(QSize(0, 0));
        setting->setMaximumSize(QSize(800, 600));
        gridLayout_4 = new QGridLayout(setting);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        rotationGroupBox = new QGroupBox(setting);
        rotationGroupBox->setObjectName(QStringLiteral("rotationGroupBox"));
        gridLayout_2 = new QGridLayout(rotationGroupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        conf_thresh_lineEdit = new QLineEdit(rotationGroupBox);
        conf_thresh_lineEdit->setObjectName(QStringLiteral("conf_thresh_lineEdit"));

        gridLayout_2->addWidget(conf_thresh_lineEdit, 6, 1, 1, 1);

        work_megapix_label = new QLabel(rotationGroupBox);
        work_megapix_label->setObjectName(QStringLiteral("work_megapix_label"));

        gridLayout_2->addWidget(work_megapix_label, 0, 0, 1, 1);

        work_megpix_lineEdit = new QLineEdit(rotationGroupBox);
        work_megpix_lineEdit->setObjectName(QStringLiteral("work_megpix_lineEdit"));

        gridLayout_2->addWidget(work_megpix_lineEdit, 0, 1, 1, 1);

        features_label = new QLabel(rotationGroupBox);
        features_label->setObjectName(QStringLiteral("features_label"));

        gridLayout_2->addWidget(features_label, 1, 0, 1, 1);

        features_comboBox = new QComboBox(rotationGroupBox);
        features_comboBox->setObjectName(QStringLiteral("features_comboBox"));

        gridLayout_2->addWidget(features_comboBox, 1, 1, 1, 1);

        ba_label = new QLabel(rotationGroupBox);
        ba_label->setObjectName(QStringLiteral("ba_label"));

        gridLayout_2->addWidget(ba_label, 7, 0, 1, 1);

        wave_correct_label = new QLabel(rotationGroupBox);
        wave_correct_label->setObjectName(QStringLiteral("wave_correct_label"));

        gridLayout_2->addWidget(wave_correct_label, 8, 0, 1, 1);

        match_conf_lineEdit = new QLineEdit(rotationGroupBox);
        match_conf_lineEdit->setObjectName(QStringLiteral("match_conf_lineEdit"));

        gridLayout_2->addWidget(match_conf_lineEdit, 4, 1, 1, 1);

        estimator_label = new QLabel(rotationGroupBox);
        estimator_label->setObjectName(QStringLiteral("estimator_label"));

        gridLayout_2->addWidget(estimator_label, 3, 0, 1, 1);

        match_conf_label = new QLabel(rotationGroupBox);
        match_conf_label->setObjectName(QStringLiteral("match_conf_label"));

        gridLayout_2->addWidget(match_conf_label, 4, 0, 1, 1);

        matcher_label = new QLabel(rotationGroupBox);
        matcher_label->setObjectName(QStringLiteral("matcher_label"));

        gridLayout_2->addWidget(matcher_label, 2, 0, 1, 1);

        matcher_comboBox = new QComboBox(rotationGroupBox);
        matcher_comboBox->setObjectName(QStringLiteral("matcher_comboBox"));

        gridLayout_2->addWidget(matcher_comboBox, 2, 1, 1, 1);

        wave_correct_comboBox = new QComboBox(rotationGroupBox);
        wave_correct_comboBox->setObjectName(QStringLiteral("wave_correct_comboBox"));

        gridLayout_2->addWidget(wave_correct_comboBox, 8, 1, 1, 1);

        estimator_comboBox = new QComboBox(rotationGroupBox);
        estimator_comboBox->setObjectName(QStringLiteral("estimator_comboBox"));

        gridLayout_2->addWidget(estimator_comboBox, 3, 1, 1, 1);

        ba_comboBox = new QComboBox(rotationGroupBox);
        ba_comboBox->setObjectName(QStringLiteral("ba_comboBox"));

        gridLayout_2->addWidget(ba_comboBox, 7, 1, 1, 1);

        conf_thresh_label = new QLabel(rotationGroupBox);
        conf_thresh_label->setObjectName(QStringLiteral("conf_thresh_label"));

        gridLayout_2->addWidget(conf_thresh_label, 6, 0, 1, 1);


        gridLayout_3->addWidget(rotationGroupBox, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        compositeGroupBox = new QGroupBox(setting);
        compositeGroupBox->setObjectName(QStringLiteral("compositeGroupBox"));
        gridLayout = new QGridLayout(compositeGroupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        warp_label = new QLabel(compositeGroupBox);
        warp_label->setObjectName(QStringLiteral("warp_label"));

        gridLayout->addWidget(warp_label, 0, 0, 1, 1);

        warp_comboBox = new QComboBox(compositeGroupBox);
        warp_comboBox->setObjectName(QStringLiteral("warp_comboBox"));

        gridLayout->addWidget(warp_comboBox, 0, 1, 1, 1);

        seam_megapix_label = new QLabel(compositeGroupBox);
        seam_megapix_label->setObjectName(QStringLiteral("seam_megapix_label"));

        gridLayout->addWidget(seam_megapix_label, 1, 0, 1, 1);

        seam_megapix_lineEdit = new QLineEdit(compositeGroupBox);
        seam_megapix_lineEdit->setObjectName(QStringLiteral("seam_megapix_lineEdit"));

        gridLayout->addWidget(seam_megapix_lineEdit, 1, 1, 1, 1);

        seam_label = new QLabel(compositeGroupBox);
        seam_label->setObjectName(QStringLiteral("seam_label"));

        gridLayout->addWidget(seam_label, 2, 0, 1, 1);

        seam_comboBox = new QComboBox(compositeGroupBox);
        seam_comboBox->setObjectName(QStringLiteral("seam_comboBox"));

        gridLayout->addWidget(seam_comboBox, 2, 1, 1, 1);

        compose_megapix_label = new QLabel(compositeGroupBox);
        compose_megapix_label->setObjectName(QStringLiteral("compose_megapix_label"));

        gridLayout->addWidget(compose_megapix_label, 3, 0, 1, 1);

        compose_megapix_lineEdit = new QLineEdit(compositeGroupBox);
        compose_megapix_lineEdit->setObjectName(QStringLiteral("compose_megapix_lineEdit"));

        gridLayout->addWidget(compose_megapix_lineEdit, 3, 1, 1, 1);

        expos_comp_label = new QLabel(compositeGroupBox);
        expos_comp_label->setObjectName(QStringLiteral("expos_comp_label"));

        gridLayout->addWidget(expos_comp_label, 4, 0, 1, 1);

        expos_comp_comboBox = new QComboBox(compositeGroupBox);
        expos_comp_comboBox->setObjectName(QStringLiteral("expos_comp_comboBox"));

        gridLayout->addWidget(expos_comp_comboBox, 4, 1, 1, 1);

        blend_label = new QLabel(compositeGroupBox);
        blend_label->setObjectName(QStringLiteral("blend_label"));

        gridLayout->addWidget(blend_label, 5, 0, 1, 1);

        blend_comboBox = new QComboBox(compositeGroupBox);
        blend_comboBox->setObjectName(QStringLiteral("blend_comboBox"));

        gridLayout->addWidget(blend_comboBox, 5, 1, 1, 1);

        blend_strength_label = new QLabel(compositeGroupBox);
        blend_strength_label->setObjectName(QStringLiteral("blend_strength_label"));

        gridLayout->addWidget(blend_strength_label, 6, 0, 1, 1);

        blend_strength_lineEdit = new QLineEdit(compositeGroupBox);
        blend_strength_lineEdit->setObjectName(QStringLiteral("blend_strength_lineEdit"));

        gridLayout->addWidget(blend_strength_lineEdit, 6, 1, 1, 1);


        gridLayout_3->addWidget(compositeGroupBox, 0, 2, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        stitcher3label = new QLabel(setting);
        stitcher3label->setObjectName(QStringLiteral("stitcher3label"));

        horizontalLayout_2->addWidget(stitcher3label);

        stitcher3lineEdit = new QLineEdit(setting);
        stitcher3lineEdit->setObjectName(QStringLiteral("stitcher3lineEdit"));
        stitcher3lineEdit->setReadOnly(true);

        horizontalLayout_2->addWidget(stitcher3lineEdit);

        stitcher3pushButton = new QPushButton(setting);
        stitcher3pushButton->setObjectName(QStringLiteral("stitcher3pushButton"));

        horizontalLayout_2->addWidget(stitcher3pushButton);

        stitcher6label = new QLabel(setting);
        stitcher6label->setObjectName(QStringLiteral("stitcher6label"));

        horizontalLayout_2->addWidget(stitcher6label);

        stitcher6lineEdit = new QLineEdit(setting);
        stitcher6lineEdit->setObjectName(QStringLiteral("stitcher6lineEdit"));
        stitcher6lineEdit->setReadOnly(true);

        horizontalLayout_2->addWidget(stitcher6lineEdit);

        stitcher6pushButton = new QPushButton(setting);
        stitcher6pushButton->setObjectName(QStringLiteral("stitcher6pushButton"));

        horizontalLayout_2->addWidget(stitcher6pushButton);


        gridLayout_4->addLayout(horizontalLayout_2, 1, 0, 1, 2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        currentStitcherlabel = new QLabel(setting);
        currentStitcherlabel->setObjectName(QStringLiteral("currentStitcherlabel"));

        horizontalLayout_3->addWidget(currentStitcherlabel);

        currentStitchercomboBox = new QComboBox(setting);
        currentStitchercomboBox->setObjectName(QStringLiteral("currentStitchercomboBox"));

        horizontalLayout_3->addWidget(currentStitchercomboBox);


        gridLayout_4->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        applyButton = new QPushButton(setting);
        applyButton->setObjectName(QStringLiteral("applyButton"));

        horizontalLayout->addWidget(applyButton);

        okButton = new QPushButton(setting);
        okButton->setObjectName(QStringLiteral("okButton"));

        horizontalLayout->addWidget(okButton);

        cancelButton = new QPushButton(setting);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        horizontalLayout->addWidget(cancelButton);


        gridLayout_4->addLayout(horizontalLayout, 2, 1, 1, 1);


        retranslateUi(setting);

        QMetaObject::connectSlotsByName(setting);
    } // setupUi

    void retranslateUi(QDialog *setting)
    {
        setting->setWindowTitle(QApplication::translate("setting", "Dialog", nullptr));
        rotationGroupBox->setTitle(QApplication::translate("setting", "GroupBox", nullptr));
        work_megapix_label->setText(QApplication::translate("setting", "TextLabel", nullptr));
        features_label->setText(QApplication::translate("setting", "TextLabel", nullptr));
        ba_label->setText(QApplication::translate("setting", "TextLabel", nullptr));
        wave_correct_label->setText(QApplication::translate("setting", "TextLabel", nullptr));
        estimator_label->setText(QApplication::translate("setting", "TextLabel", nullptr));
        match_conf_label->setText(QApplication::translate("setting", "TextLabel", nullptr));
        matcher_label->setText(QApplication::translate("setting", "TextLabel", nullptr));
        conf_thresh_label->setText(QApplication::translate("setting", "TextLabel", nullptr));
        compositeGroupBox->setTitle(QApplication::translate("setting", "GroupBox", nullptr));
        warp_label->setText(QApplication::translate("setting", "TextLabel", nullptr));
        seam_megapix_label->setText(QApplication::translate("setting", "TextLabel", nullptr));
        seam_label->setText(QApplication::translate("setting", "TextLabel", nullptr));
        compose_megapix_label->setText(QApplication::translate("setting", "TextLabel", nullptr));
        expos_comp_label->setText(QApplication::translate("setting", "TextLabel", nullptr));
        blend_label->setText(QApplication::translate("setting", "TextLabel", nullptr));
        blend_strength_label->setText(QApplication::translate("setting", "TextLabel", nullptr));
        stitcher3label->setText(QApplication::translate("setting", "TextLabel", nullptr));
        stitcher3pushButton->setText(QApplication::translate("setting", "PushButton", nullptr));
        stitcher6label->setText(QApplication::translate("setting", "TextLabel", nullptr));
        stitcher6pushButton->setText(QApplication::translate("setting", "PushButton", nullptr));
        currentStitcherlabel->setText(QApplication::translate("setting", "TextLabel", nullptr));
        applyButton->setText(QString());
        okButton->setText(QString());
        cancelButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class setting: public Ui_setting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTING_H

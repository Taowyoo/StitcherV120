#include "setting.h"
#include "ui_setting.h"
#include <QDebug>
#include <QFileDialog>
setting::setting(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::setting)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/icon/icon/setting_128px_1129026_easyicon.net.ico"));
    stitcher3 = "Stitcher";
    stitcher6 = "Stitcher";

    ui->rotationGroupBox->setTitle(tr("Rotation Flags"));
    ui->compositeGroupBox->setTitle(tr("Composition Flags"));

    ui->stitcher3label->setText(tr("Normal Stitcher Path"));
    ui->stitcher6label->setText(tr("Multispectral Stitcher Path"));

    ui->stitcher3lineEdit->setText("./cmdProgram/StitcherForRGB.exe");
    ui->stitcher6lineEdit->setText("./cmdProgram/Stitcher.exe");
    stitcher3 = "./cmdProgram/StitcherForRGB.exe";
    stitcher6 = "./cmdProgram/Stitcher.exe";

    ui->stitcher3pushButton->setText(tr("Set Path"));
    ui->stitcher6pushButton->setText(tr("Set Path"));

    ui->work_megapix_label->setText(tr("Work Megapix"));
    ui->features_label->setText(tr("Features Type"));
    ui->matcher_label->setText(tr("Matcher Type"));
    ui->estimator_label->setText(tr("Estimator Type"));
    ui->match_conf_label->setText(tr("Match confidence"));
    ui->conf_thresh_label->setText(tr("Confidence of 2 imgs"));
    ui->ba_label->setText(tr("BundleAdjustment Type"));
    ui->wave_correct_label->setText(tr("Wave Correct"));

    ui->warp_label->setText(tr("Warp Surface Type"));
    ui->seam_megapix_label->setText(tr("Seam Megapix"));
    ui->seam_label->setText(tr("Seam Type"));
    ui->compose_megapix_label->setText(tr("Compose Megapix"));
    ui->expos_comp_label->setText(tr("Exposure Compensation"));
    ui->blend_label->setText(tr("Blend Type"));
    ui->blend_strength_label->setText(tr("Blend Strength"));

    ui->currentStitcherlabel->setText(tr("Current Stitcher"));
    QStringList stitcherType;
    stitcherType<<"Nromal"<<"Multispectral";
    ui->currentStitchercomboBox->insertItems(0,stitcherType);

    ui->work_megpix_lineEdit->setText(QString().setNum(0.6));
    arguments.insert("work_megapix","0.6");

    QStringList features;
    features<<"orb"<<"surf";
    ui->features_comboBox->insertItems(0,features);
    arguments.insert("features","orb");

    QStringList matcher;
    matcher<<"homography"<<"affine";
    ui->matcher_comboBox->insertItems(0,matcher);
    arguments.insert("matcher","homography");

    QStringList estimator;
    estimator<<"homography"<<"affine";
    ui->estimator_comboBox->insertItems(0,estimator);
    arguments.insert("estimator","homography");

    ui->match_conf_lineEdit->setText(QString().setNum(0.3));
    arguments.insert("match_conf","0.3");

    ui->conf_thresh_lineEdit->setText(QString().setNum(1.0));
    arguments.insert("conf_thresh","1.0");

    QStringList ba;
    ba<<"no"<<"reproj"<<"ray"<<"affine";
    ui->ba_comboBox->insertItems(0,ba);
    ui->ba_comboBox->setCurrentIndex(2);
    arguments.insert("ba","ray");

    QStringList wave_correct;
    wave_correct<<"no"<<"horiz"<<"vert";
    ui->wave_correct_comboBox->insertItems(0,wave_correct);
    arguments.insert("wave_correct","no");

    QStringList warp;
    warp<<"affine"<<"plane"<<"cylindrical"<<"spherical"<<"fisheye"<<"stereographic"<<"compressedPlaneA2B1"<<"compressedPlaneA1.5B1"<<"compressedPlanePortraitA2B1"<<"compressedPlanePortraitA1.5B1"<<"paniniA2B1"<<"paniniA1.5B1"<<"paniniPortraitA2B1"<<"paniniPortraitA1.5B1"<<"mercator"<<"transverseMercator";
    ui->warp_comboBox->insertItems(0,warp);
    ui->warp_comboBox->setCurrentIndex(1);
    arguments.insert("warp","plane");

    ui->seam_megapix_lineEdit->setText(QString().setNum(0.1));
    arguments.insert("seam_megapix","0.1");

    QStringList seam;
    seam<<"no"<<"voronoi"<<"gc_color"<<"gc_colorgrad";
    ui->seam_comboBox->insertItems(0,seam);
    ui->seam_comboBox->setCurrentIndex(2);
    arguments.insert("seam","gc_color");

    ui->compose_megapix_lineEdit->setText(QString().setNum(-1));
    arguments.insert("compose_megapix","-1");

    QStringList expos_comp;
    expos_comp<<"no"<<"gain"<<"gain_blocks";
    ui->expos_comp_comboBox->insertItems(0,expos_comp);
    ui->expos_comp_comboBox->setCurrentIndex(2);
    arguments.insert("expos_comp","gain_blocks");

    QStringList blend;
    blend<<"no"<<"feather"<<"multiband";
    ui->blend_comboBox->insertItems(0,blend);
    ui->blend_comboBox->setCurrentIndex(2);
    arguments.insert("blend","multiband");

    ui->blend_strength_lineEdit->setText(QString().setNum(5));
    arguments.insert("blend_strength","5");

    ui->applyButton->setText(tr("Apply"));
    ui->okButton->setText(tr("OK"));
    ui->cancelButton->setText(tr("Reset"));
    updateArguments();
}

setting::~setting()
{
    delete ui;
}

void setting::on_applyButton_clicked()
{
    this->hide();

    arguments.clear();
    arguments.insert("work_megapix",ui->work_megpix_lineEdit->text());
    arguments.insert("features",ui->features_comboBox->currentText());
    arguments.insert("matcher",ui->matcher_comboBox->currentText());
    arguments.insert("estimator",ui->estimator_comboBox->currentText());
    arguments.insert("match_conf",ui->match_conf_lineEdit->text());
    arguments.insert("conf_thresh",ui->conf_thresh_lineEdit->text());
    arguments.insert("ba",ui->ba_comboBox->currentText());
    arguments.insert("wave_correct",ui->wave_correct_comboBox->currentText());
    arguments.insert("warp",ui->warp_comboBox->currentText());
    arguments.insert("seam_megapix",ui->seam_megapix_lineEdit->text());
    arguments.insert("seam",ui->seam_comboBox->currentText());
    arguments.insert("compose_megapix",ui->compose_megapix_lineEdit->text());
    arguments.insert("expos_comp",ui->expos_comp_comboBox->currentText());
    arguments.insert("blend",ui->blend_comboBox->currentText());
    arguments.insert("blend_strength",ui->blend_strength_lineEdit->text());

    updateArguments();
}

void setting::on_okButton_clicked()
{
    this->hide();
}

void setting::on_cancelButton_clicked()
{
    this->hide();
    arguments.clear();
    ui->work_megpix_lineEdit->setText(QString().setNum(0.6));
    arguments.insert("work_megapix","0.6");


    ui->features_comboBox->setCurrentIndex(0);
    arguments.insert("features","orb");


    ui->matcher_comboBox->setCurrentIndex(0);
    arguments.insert("matcher","homography");


    ui->estimator_comboBox->setCurrentIndex(0);
    arguments.insert("estimator","homography");

    ui->match_conf_lineEdit->setText(QString().setNum(0.3));
    arguments.insert("match_conf","0.3");

    ui->conf_thresh_lineEdit->setText(QString().setNum(1.0));
    arguments.insert("conf_thresh","1.0");


    ui->ba_comboBox->setCurrentIndex(2);
    arguments.insert("ba","ray");


    ui->wave_correct_comboBox->setCurrentIndex(0);
    arguments.insert("wave_correct","no");


    ui->warp_comboBox->setCurrentIndex(1);
    arguments.insert("warp","plane");

    ui->seam_megapix_lineEdit->setText(QString().setNum(0.1));
    arguments.insert("seam_megapix","0.1");


    ui->seam_comboBox->setCurrentIndex(2);
    arguments.insert("seam","gc_color");

    ui->compose_megapix_lineEdit->setText(QString().setNum(-1));
    arguments.insert("compose_megapix","-1");


    ui->expos_comp_comboBox->setCurrentIndex(2);
    arguments.insert("expos_comp","gain_blocks");


    ui->blend_comboBox->setCurrentIndex(2);
    arguments.insert("blend","multiband");

    ui->blend_strength_lineEdit->setText(QString().setNum(5));
    arguments.insert("blend_strength","5");

    updateArguments();
}

QString setting::getArgumentStr() const
{
    return argumentStr;
}



void setting::updateArguments()
{
    argumentStr.clear();

    for ( auto it = arguments.begin(); it != arguments.end(); ++it )
    {
        argumentStr.append(" --");
        argumentStr.append(it.key());
        argumentStr.append(" ");
        argumentStr.append(it.value());
    }
    qDebug()<<argumentStr;
}

void setting::on_stitcher3pushButton_clicked()
{
    stitcher3.clear();
    stitcher3 = QFileDialog::getOpenFileName(this, tr("Set Normal Stitcher Path"),
                                "./NormalStitcher.exe",
                                tr("Program (*.exe)"));
    ui->stitcher3lineEdit->setText(stitcher3);
}

void setting::on_stitcher6pushButton_clicked()
{
    stitcher6.clear();
    stitcher6 = QFileDialog::getOpenFileName(this, tr("Set Multispectral Stitcher Path"),
                                "./MultispectralStitcher.exe",
                                tr("Program (*.exe)"));
    ui->stitcher6lineEdit->setText(stitcher6);

}

int setting::getStitcherType() const
{
    return ui->currentStitchercomboBox->currentIndex();
}

QString setting::getStitcher6() const
{
    return stitcher6;
}

QString setting::getStitcher3() const
{
    return stitcher3;
}

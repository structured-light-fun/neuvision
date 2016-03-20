#pragma once

#include <QWidget>

namespace Z3D {

class ZStereoSLS;

namespace Ui {
class ZStereoSLSConfigWidget;
}

class ZStereoSLSConfigWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ZStereoSLSConfigWidget(ZStereoSLS *stereoSLS, QWidget *parent = 0);
    ~ZStereoSLSConfigWidget();

private:
    Ui::ZStereoSLSConfigWidget *ui;

    ZStereoSLS *m_stereoSLS;
};

} // namespace Z3D
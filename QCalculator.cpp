#include "QCalculator.h"

QCalculator::QCalculator()
{
}

//构造函数
bool QCalculator::construct()
{
    m_ui = QCalculatorUI::NewInstance();

#if 1
    if( m_ui != NULL )
    {
        m_ui->setCalculator(&m_cal);  //将UI和核心算法关联到一起
    }
#endif
    return (m_ui != NULL);
}

//二阶构造函数
QCalculator* QCalculator::NewInstance()
{
    QCalculator* ret = new QCalculator();

    if( (ret == NULL) || !ret->construct() )
    {
        delete ret;
        ret = NULL;
    }

    return ret;
}

//打印UI界面
void QCalculator::show()
{
    m_ui->show();
}

//析构函数
QCalculator::~QCalculator()
{
    delete m_ui;
}

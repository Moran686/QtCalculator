#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QKeyEvent>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEdit->setEnabled(false);
    ui->lineEdit->setAlignment(Qt::AlignRight);//设置显示居右
    ui->lineEdit2->setAlignment(Qt::AlignRight);//设置显示居右
    ui->lineEdit->setStyleSheet("font-size:18px");//设置字体大小为18px
    ui->lineEdit2->setStyleSheet("font-size:18px");//设置字体大小为18px
    ui->lineEdit->setText("0");//设置初试文本为0

    lefts=0;//括号数量
    //槽函数关联
    connect(this,&MainWindow::whichBtn,&MainWindow::enableOp);
    connect(this,&MainWindow::whichBtn,&MainWindow::enableLeft);
    connect(this,&MainWindow::whichBtn,&MainWindow::enableEqual);
    connect(this,&MainWindow::whichBtn,&MainWindow::enableRight);
    connect(this,&MainWindow::whichBtn,&MainWindow::enableDigit);
    init();
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::keyPressEvent(QKeyEvent *event)
{
    qDebug() << "Key Pressed:" << event->text(); // 打印按键信息

    // 数字键
    if (event->key() >= Qt::Key_0 && event->key() <= Qt::Key_9) {
        digitBtn(event->text().at(0));
    }
    // 小数点键
    else if (event->key() == Qt::Key_Period) {
        on_btnDot_clicked();
    }
    // 加减乘除等运算符键
    else if (event->key() == Qt::Key_Plus || event->key() == Qt::Key_Minus ||
             event->key() == Qt::Key_Asterisk || event->key() == Qt::Key_Slash ||
             event->key() == Qt::Key_Backslash) {
        QString op;
        switch (event->key()) {
        case Qt::Key_Plus: op = "+"; break;
        case Qt::Key_Minus: op = "-"; break;
        case Qt::Key_Asterisk: op = "*"; break;
        case Qt::Key_Slash: op = "/"; break;
        case Qt::Key_Backslash: op = "%"; break;
        default: return;
        }
        ui->lineEdit->setText(ui->lineEdit->text() + op);
        emit whichBtn(OPERA);
    }
    // 等于键
    else if (event->key() == Qt::Key_Equal || event->key() == Qt::Key_Return ||
             event->key() == Qt::Key_Enter) {
        on_btnEqual_clicked();
    }
    // 清除键
    else if (event->key() == Qt::Key_C || event->key() == Qt::Key_Backspace) {
        on_btnClear_clicked();
    }
    else {
        QMainWindow::keyPressEvent(event); // 调用基类的事件处理
    }
}
/*
 *public function
 */
//初始化操作.不仅开头调用，每次计算完结果都会调用。
void MainWindow::init()
{
    if(!expStack.isEmpty())
        expStack.clear();
    if(!opStack.isEmpty())
        opStack.clear();
    opStack.push('#');
    complete=true;//默认完整的，输入框为空

    emit whichBtn(INIT);
}
void MainWindow::digitBtn(QChar ch)
{
    QString s = ui->lineEdit->text();
    if(!complete)//不完整
        ui->lineEdit->setText(s+ch);
    else//完整
    {
        ui->lineEdit->setText(QString(ch));
        complete = false;
    }
    emit whichBtn(DIGIT);
}
/*
 *SLOT function
 */
void MainWindow::enableDigit(int type)
{
    bool enable=true;
    if(RIGHT==type)//如果前面输入了右括号，则禁用数字按钮
        enable=false;
    ui->btn0->setEnabled(enable);
    ui->btn1->setEnabled(enable);
    ui->btn2->setEnabled(enable);
    ui->btn3->setEnabled(enable);
    ui->btn4->setEnabled(enable);
    ui->btn5->setEnabled(enable);
    ui->btn6->setEnabled(enable);
    ui->btn7->setEnabled(enable);
    ui->btn8->setEnabled(enable);
    ui->btn9->setEnabled(enable);
    ui->btnDot->setEnabled(enable);
}
void MainWindow::enableOp(int type)
{
    bool enable = false;
    switch(type)
    {
    case RIGHT:
    case DIGIT:enable = true;//如果前有数字则可以输入运算符
        break;
    case INIT:
    case OPERA:
    case LEFT:enable = false;//前有左括号则禁止运算符
        break;
    default:return;
    }
    ui->btnMuti->setEnabled(enable);
    ui->btnDivi->setEnabled(enable);
    ui->btnAdd->setEnabled(enable);
    ui->btnSub->setEnabled(enable);
}
void MainWindow::enableLeft(int type)
{
    bool enable = false;
    switch(type)
    {
    case RIGHT:
    case DIGIT:
        break;
    case INIT:
    case LEFT:
    case OPERA:enable = true;
        break;
    default:return;
    }
    ui->btnLeft->setEnabled(enable);
}
void MainWindow::enableRight(int type)
{
    bool enable = false;
    switch(type)
    {
    case INIT:
    case OPERA:
        break;
    case LEFT:enable = true;//如果前有左括号，则启动右括号
    case RIGHT:
    case DIGIT:
        if(lefts)
            enable = true;//如果有括号则启动
        break;
    default:return;
    }
    ui->btnRight->setEnabled(enable);
}
void MainWindow::enableEqual(int type)
{
    bool enable = false;
    switch(type)
    {
    case OPERA:
    case LEFT:
        break;
    case RIGHT:
    case DIGIT://前面是数字则启动等号
        enable = true;
        break;
    default:return;
    }
    ui->btnEqual->setEnabled(enable);
}

void MainWindow::on_btn0_clicked()
{
    digitBtn('0');
}

void MainWindow::on_btn1_clicked()
{
    digitBtn('1');

}

void MainWindow::on_btn2_clicked()
{
    digitBtn('2');
}

void MainWindow::on_btn3_clicked()
{
    digitBtn('3');
}

void MainWindow::on_btn4_clicked()
{
    digitBtn('4');
}

void MainWindow::on_btn5_clicked()
{
    digitBtn('5');
}

void MainWindow::on_btn6_clicked()
{
    digitBtn('6');
}

void MainWindow::on_btn7_clicked()
{
    digitBtn('7');
}

void MainWindow::on_btn8_clicked()
{
    digitBtn('8');
}

void MainWindow::on_btn9_clicked()
{
    digitBtn('9');
}

void MainWindow::on_btnDot_clicked()
{
    //如果是小数点,那么不能以小数点打头
    QString s = ui->lineEdit->text();
    if(!complete)
        ui->lineEdit->setText(s+".");
}
//加号和减号应做特殊处理。因为也可以理解为正负号
void MainWindow::on_btnAdd_clicked()
{
    QString s = ui->lineEdit->text();
    ui->lineEdit->setText(s+"+");
    emit whichBtn(OPERA);
}

void MainWindow::on_btnSub_clicked()
{
    QString s = ui->lineEdit->text();
    ui->lineEdit->setText(s+"-");
    emit whichBtn(OPERA);
}
void MainWindow::on_btnMuti_clicked()
{
    QString s = ui->lineEdit->text();
    ui->lineEdit->setText(s+"*");
    emit whichBtn(OPERA);
}

void MainWindow::on_btnDivi_clicked()
{
    QString s = ui->lineEdit->text();
    ui->lineEdit->setText(s+"/");
    emit whichBtn(OPERA);
}
////////////////////////////////////////////
void MainWindow::on_btnLeft_clicked()
{
    QString s = ui->lineEdit->text();
    if(!complete)
        ui->lineEdit->setText(s+"(");
    else
    {
        ui->lineEdit->setText("(");
        complete = false;
    }
    emit whichBtn(LEFT);
    lefts++;
}

void MainWindow::on_btnRight_clicked()
{
    QString s = ui->lineEdit->text();
    if(!complete)
        ui->lineEdit->setText(s+")");
    lefts--;
    emit whichBtn(RIGHT);
}
//得到运算符的优先级
int MainWindow::getLevel(const QChar &oper)
{
    switch(oper.cell())
    {
    case '#':
    case '(':return 0;
    case '+':
    case '-':return 1;
    case '*':
    case '/':
    case '%':return 2;
    }
    return 0;
}
//转换为后缀表达式，实现最主要功能
void MainWindow::toPostfix()
{
    QString exp = ui->lineEdit->text();

    int j=0;
    qDebug()<<j;
    for(int i=0;i<exp.length();i++)
    {qDebug()<<i<<exp[i];
        if(exp[i].isDigit()||exp[i]=='.')//数字
        {
            postfix.push_back(exp[i]);
        }
        else if(exp[i]=='(')
        {
            opStack.push(exp[i]);
        }
        else if(exp[i]==')')
        {
            postfix.push_back(' ');
            while(opStack.top()!='(')
            {
                postfix.push_back(opStack.pop());qDebug()<<postfix;
            }
            opStack.pop();
        }
        else if(getLevel(exp[i])>getLevel(opStack.top()))//运算符权值高
        {
            postfix.push_back(' ');qDebug()<<"postfix";
            opStack.push(exp[i]);
        }
        else//运算符权值低
        {
            postfix.push_back(' ');qDebug()<<postfix;
            while(getLevel(exp[i])<=getLevel(opStack.top()))
                postfix.push_back(opStack.pop());
            opStack.push(exp[i]);
        }
    }
    while(opStack.top()!='#')
    {
        QChar c = opStack.pop();
        postfix.push_back(' ');
        postfix.push_back(c);
    }
    qDebug()<<postfix;
}
//
void MainWindow::evaluation()
{
    QString tem;
    QStack<double> ans;
    for(int i=0;i<postfix.size();i++)
    {
        qDebug()<<postfix[i]<<i;
        if(postfix[i].isDigit()||postfix[i]=='.')
            tem.push_back(postfix[i]);
        else if(postfix[i]==' ')
        {
            if(!tem.isEmpty())
            {
                ans.push(tem.toDouble());
                tem.clear();
            }
            qDebug()<<ans.top()<<tem.isEmpty();
        }
        else
        {
            double a,b;
            a=ans.pop();qDebug()<<a<<"a";
            b=ans.pop();qDebug()<<b<<"b";
            switch(postfix[i].cell())
            {
            case '+':ans.push(b+a);break;
            case '-':ans.push(b-a);break;
            case '*':ans.push(b*a);break;
            case '/':
                if (a == 0) {
                    qDebug() << "Error: Division by zero";
                    ui->lineEdit2->clear();
                    return;
                }
                ans.push(b/a);
                break;
            case '%':ans.push((int)a%(int)b);break;
            }
            qDebug()<<ans.top()<<"top";
        }

    }
    //qDebug()<<ans.top();
    if (!ans.isEmpty()){
        ui->lineEdit2->setText(QString::number(ans.top()));
    }

}
//等于号的槽函数。
void MainWindow::on_btnEqual_clicked()
{
    //如果还没输入，那么等于号不起作用
    if(ui->lineEdit->text()=="0")
        return;

    toPostfix();
    evaluation();
    init();
}


void MainWindow::on_btnClear_clicked()
{
    init();
    ui->lineEdit->setText("0");
    ui->lineEdit2->clear();
}


void MainWindow::on_btnBack_clicked()
{
    QString s = ui->lineEdit->text();
    s=s.mid(0,s.size()-1);
    ui->lineEdit->setText(s);
}

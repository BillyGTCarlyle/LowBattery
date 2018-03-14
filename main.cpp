#include <QApplication>
#include <QMainWindow>
#include <QLabel>
#include <QVBoxLayout>
#include <QPushButton>
#include <QFont>

int main(int argc, char* argv[]){
	QApplication Notification(argc, argv);
	QWidget* window = new QWidget;
	QFont f("Arial", 16, QFont::Bold);
	window->setFixedSize(200,100);
	QLabel* message = new QLabel("Low Battery!", window);
	message->setAlignment(Qt::AlignCenter);
	message->setFont(f);
	QPushButton* button = new QPushButton("Alright.");
	QPushButton::connect(button, SIGNAL (clicked()), &Notification, SLOT (quit()));
	QVBoxLayout* layout = new QVBoxLayout;
	layout->addWidget(message);
	layout->addWidget(button);
	window->setLayout(layout);
	window->show();
	return Notification.exec();
}

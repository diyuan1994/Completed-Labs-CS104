#include <QString>
#include <QFont>
#include "post_widget.h"

PostWidget::PostWidget(Post* p) {
	post = p;
	layout = new QGridLayout();

	// ADD YOUR CODE HERE.
	// Create the suitable labels and add them to GridLayout properly.
	titleLabel = new QLabel(QString::fromStdString(p->title));
	QFont titleFont;
    titleFont.setBold(true);
    titleFont.setPointSize(14);
    titleLabel->setFont(titleFont);
	layout->addWidget(titleLabel, 0, 1, 1, 3);

	usernameLabel = new QLabel(QString::fromStdString(p->username));
	layout->addWidget(usernameLabel, 1, 3, 1, 1);

	subredditLabel = new QLabel(QString::fromStdString(p->subreddit));
	layout->addWidget(subredditLabel, 1, 1, 1, 1);

	std::string url = p->url;
	urlLabel = new QLabel(QString::fromStdString("<a href=\"" + url + "\">" + url + "</a>"));
	layout->addWidget(urlLabel, 2, 1, 1, 1);
	urlLabel->setOpenExternalLinks(true);

	karmaLabel = new QLabel(QString::number(p->karma));
	QFont karmaFont;
    karmaFont.setBold(true);
    karmaFont.setPointSize(20);
    karmaLabel->setFont(karmaFont);
	layout->addWidget(karmaLabel, 0, 0, 2, 1);

	setLayout(layout);
}

PostWidget::~PostWidget() {
	delete titleLabel;
	delete usernameLabel;
	delete subredditLabel;
	delete urlLabel;
	delete karmaLabel;
	delete layout;
}

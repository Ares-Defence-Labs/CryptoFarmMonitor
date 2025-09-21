//
// Created by Dan Gerchcovich on 21/9/2025.
//

#include "PrimaryColorButton.h"

#include <QPushButton>
#include <QWidget>

QPushButton* PrimaryColorButton::createWidget(QWidget* parent) {
    auto* pushButton = new QPushButton(parent);

    pushButton->setAutoDefault(true);
    pushButton->setFlat(true);

    return pushButton;
}

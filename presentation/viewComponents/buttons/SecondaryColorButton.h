//
// Created by Dan Gerchcovich on 21/9/2025.
//

#pragma once

#include <QPushButton>
#include <QWidget>


enum class Test {
    sample,
    hello
};

struct SecondaryColorButton {
    static QPushButton* createWidget(QWidget* parent);
};


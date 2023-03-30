/******************************************************************************
 * QSkinny - Copyright (C) 2016 Uwe Rathmann
 * This file may be used under the terms of the 3-clause BSD License
 *****************************************************************************/

#pragma once

#include <QskSlider.h>

class CustomSlider : public QskSlider
{
    using Inherited = QskSlider;

  public:
    QSK_SUBCONTROLS( Scale, Decoration )

    CustomSlider( QQuickItem* parent = nullptr );

    QRectF focusIndicatorRect() const override;
};

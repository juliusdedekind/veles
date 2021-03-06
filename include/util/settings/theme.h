/*
 * Copyright 2016 CodiLime
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */
#pragma once

#include <QColor>
#include <QPalette>
#include <QString>
#include <QStyle>

namespace veles {
namespace util {
namespace settings {
namespace theme {

QStringList availableThemes();
const QString& defaultTheme();
QString theme();
void setTheme(const QString& theme);

QPalette palette();
QStyle* createStyle();
QColor highlightingColor();
QColor chunkBackground(int color_index);
QColor editedBackground();
QColor byteColor(uint8_t byte);
QFont defaultFont();
QFont font();
void setFont(const QFont& font);
QFont defaultFixedFont();
QFont fixedFont();
void setFixedFont(const QFont& font);

}  // namespace theme
}  // namespace settings
}  // namespace util
}  // namespace veles

#ifndef ICONEDITOR_H
#define ICONEDITOR_H

#include <QWidget>

namespace i_e {

class IconEditor : public QWidget
{
	Q_OBJECT

public:
	explicit IconEditor(QWidget *parent = nullptr);
	~IconEditor() override;

	explicit IconEditor(const IconEditor& )    = delete;
	explicit IconEditor(IconEditor&& )         = delete;

	IconEditor& operator= (const IconEditor& ) = delete;
	IconEditor& operator= (IconEditor&& )      = delete;
};

} // namespace i_e

#endif // ICONEDITOR_H

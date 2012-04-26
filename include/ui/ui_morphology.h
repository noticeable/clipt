#ifndef __CLIT_UI_MORPHOLOGY_H
#define __CLIT_UI_MORPHOLOGY_H

#include <system.h>
#include <ui/ui.h>

#define STRUCTURAL_ELEMENT_SIZE 7

struct ui_morphology_s
{
	GtkWidget* dialog;
	GtkWidget* drawing_area;
	unsigned int custom_element[STRUCTURAL_ELEMENT_SIZE * STRUCTURAL_ELEMENT_SIZE];
	GtkWidget* combobox;
	guint cb_handler;
};
typedef struct ui_morphology_s ui_morphology_t;

sys_result_t
ui_morphology_add_ui_string(GtkUIManager* ui_manager);

void
ui_morphology_add_action_entries(
		GtkActionGroup* action_group,
		GtkWindow *parent);

#endif
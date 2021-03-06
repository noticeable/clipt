#ifndef __CLIPT_UI_HISTOGRAM_H
#define __CLIPT_UI_HISTOGRAM_H

#include <system.h>
#include <ui/ui.h>

struct ui_histogram_s
{
	GtkWidget* window;
	GtkWidget* drawing_area;
	GtkWidget* combobox;
	guint cb_handler;
};
typedef struct ui_histogram_s ui_histogram_t;

sys_result_t
ui_histogram_add_ui_string(GtkUIManager* ui_manager);

void
ui_histogram_add_action_entries(
                GtkActionGroup* action_group,
                GtkWindow *parent);

#endif

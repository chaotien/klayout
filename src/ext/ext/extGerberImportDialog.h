
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2018 Matthias Koefferlein

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

*/


#ifndef HDR_extGerberImportDialog
#define HDR_extGerberImportDialog

#include <QDialog>
#include <QAction>
#include <QFrame>
#include <QComboBox>

#include "dbLayout.h"
#include "dbPoint.h"
#include "dbTrans.h"

#include <string>
#include <vector>
#include <algorithm>

class QTreeWidgetItem;
class QTreeWidget;
class QToolButton;
class QLineEdit;

namespace Ui
{
  class GerberImportDialog;
}

namespace tl
{
  class InputStream;
}

namespace ext
{

class GerberImporter;

struct GerberArtworkFileDescriptor
{
  std::string filename;
};

struct GerberDrillFileDescriptor
{
  GerberDrillFileDescriptor () : start (-1), stop (-1) { }

  int start;
  int stop;
  std::string filename;
};

struct GerberFreeFileDescriptor
{
  std::string filename;
  std::vector<int> layout_layers;
};

struct GerberImportData
{
public:
  GerberImportData ();

  enum mode_type { ModeIntoLayout = 0, ModeSamePanel, ModeNewPanel }; 
  enum mounting_type { MountingTop = 0, MountingBottom };

  bool invert_negative_layers;
  double border;
  bool free_layer_mapping;
  mode_type mode;
  std::string base_dir;
  std::string current_file;
  std::vector <db::LayerProperties> layout_layers;
  mounting_type mounting;
  int num_metal_layers;
  int num_via_types;
  std::vector <GerberArtworkFileDescriptor> artwork_files;
  std::vector <GerberDrillFileDescriptor> drill_files;
  std::vector <GerberFreeFileDescriptor> free_files;
  std::vector <std::pair <db::DPoint, db::DPoint> > reference_points;
  db::DCplxTrans explicit_trans;
  std::string layer_properties_file;
  int num_circle_points;
  bool merge_flag;
  double dbu;
  std::string topcell_name;

  std::string get_layer_properties_file () const;
  void setup_importer (GerberImporter *importer);
  void reset ();
  void load (tl::InputStream &stream);
  void load (const std::string &file);
  void save (const std::string &file);
  void from_string (const std::string &s);
  std::string to_string () const;
};

//  The item editor for the file column 
class GerberImportDialogFileColumnEditorWidget 
  : public QFrame
{
Q_OBJECT 
public:
  GerberImportDialogFileColumnEditorWidget (QWidget *parent, GerberImportData *data);

  void set_filename (const std::string &s);
  std::string get_filename () const;

public slots:
  void browse_clicked ();

private:
  QToolButton *mp_browse_button;
  QLineEdit *mp_filename_edit;
  GerberImportData *mp_data;
};

//  The item editor for the start/stop column 
class GerberImportDialogMetalLayerColumnEditorWidget 
  : public QComboBox
{
Q_OBJECT 
public:
  GerberImportDialogMetalLayerColumnEditorWidget (QWidget *parent, GerberImportData *data);

  void set_layer (int layer);
  int get_layer () const;
};

class GerberImportDialog
  : public QDialog
{
Q_OBJECT 

public:
  GerberImportDialog (QWidget *parent, GerberImportData *data);
  ~GerberImportDialog ();

  int exec ();
  void accept ();
  void reject ();

public slots:
  void next_page ();
  void last_page ();
  void browse_layer_properties_file ();
  void browse_base_dir ();
  void open_clicked ();
  void saveas_clicked ();
  void reset_clicked ();
  void add_target_layer ();
  void delete_target_layer ();
  void move_target_layer_up ();
  void move_target_layer_down ();
  void add_free_file ();
  void delete_free_file ();
  void move_free_file_up ();
  void move_free_file_down ();
  void reset_free_mapping ();
  void layout_layer_double_clicked (QTreeWidgetItem *, int);
  void free_layer_mapping_item_clicked (QTreeWidgetItem *, int);

private:
  GerberImportData *mp_data;
  Ui::GerberImportDialog *mp_ui;
  QAction *m_open_action;
  QAction *m_saveas_action;
  QAction *m_reset_action;

  void update ();
  void commit_page ();
  void enter_page ();
};

}

#endif


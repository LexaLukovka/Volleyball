#############################################################################
# Makefile for building: Volleyball
# Generated by qmake (3.0) (Qt 5.6.2)
# Project:  Volleyball.pro
# Template: app
# Command: D:\QT3\5.6\mingw49_32\bin\qmake.exe -spec win32-g++ -o Makefile Volleyball.pro
#############################################################################

MAKEFILE      = Makefile

first: release
install: release-install
uninstall: release-uninstall
QMAKE         = D:\QT3\5.6\mingw49_32\bin\qmake.exe
DEL_FILE      = del
CHK_DIR_EXISTS= if not exist
MKDIR         = mkdir
COPY          = copy /y
COPY_FILE     = copy /y
COPY_DIR      = xcopy /s /q /y /i
INSTALL_FILE  = copy /y
INSTALL_PROGRAM = copy /y
INSTALL_DIR   = xcopy /s /q /y /i
DEL_FILE      = del
SYMLINK       = $(QMAKE) -install ln -f -s
DEL_DIR       = rmdir
MOVE          = move
SUBTARGETS    =  \
		release \
		debug


release: FORCE
	$(MAKE) -f $(MAKEFILE).Release
release-make_first: FORCE
	$(MAKE) -f $(MAKEFILE).Release 
release-all: FORCE
	$(MAKE) -f $(MAKEFILE).Release all
release-clean: FORCE
	$(MAKE) -f $(MAKEFILE).Release clean
release-distclean: FORCE
	$(MAKE) -f $(MAKEFILE).Release distclean
release-install: FORCE
	$(MAKE) -f $(MAKEFILE).Release install
release-uninstall: FORCE
	$(MAKE) -f $(MAKEFILE).Release uninstall
debug: FORCE
	$(MAKE) -f $(MAKEFILE).Debug
debug-make_first: FORCE
	$(MAKE) -f $(MAKEFILE).Debug 
debug-all: FORCE
	$(MAKE) -f $(MAKEFILE).Debug all
debug-clean: FORCE
	$(MAKE) -f $(MAKEFILE).Debug clean
debug-distclean: FORCE
	$(MAKE) -f $(MAKEFILE).Debug distclean
debug-install: FORCE
	$(MAKE) -f $(MAKEFILE).Debug install
debug-uninstall: FORCE
	$(MAKE) -f $(MAKEFILE).Debug uninstall

Makefile: Volleyball.pro D:/QT3/5.6/mingw49_32/mkspecs/win32-g++/qmake.conf D:/QT3/5.6/mingw49_32/mkspecs/features/spec_pre.prf \
		D:/QT3/5.6/mingw49_32/mkspecs/qdevice.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/features/device_config.prf \
		D:/QT3/5.6/mingw49_32/mkspecs/common/angle.conf \
		D:/QT3/5.6/mingw49_32/mkspecs/qconfig.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_3dcore.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_3dcore_private.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_3dinput.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_3dinput_private.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_3dlogic.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_3dlogic_private.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_3dquick.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_3dquick_private.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_3dquickinput.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_3dquickinput_private.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_3dquickrender.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_3dquickrender_private.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_3drender.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_3drender_private.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_axbase.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_axbase_private.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_axcontainer.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_axcontainer_private.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_axserver.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_axserver_private.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_bluetooth.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_bluetooth_private.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_bootstrap_private.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_clucene_private.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_concurrent.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_concurrent_private.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_core.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_core_private.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_dbus.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_dbus_private.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_designer.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_designer_private.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_designercomponents_private.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_gui.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_gui_private.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_help.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_help_private.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_labscontrols_private.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_labstemplates_private.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_location.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_location_private.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_multimedia.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_multimedia_private.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_multimediawidgets.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_multimediawidgets_private.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_network.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_network_private.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_nfc.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_nfc_private.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_opengl.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_opengl_private.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_openglextensions.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_openglextensions_private.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_platformsupport_private.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_positioning.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_positioning_private.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_printsupport.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_printsupport_private.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_qml.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_qml_private.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_qmldevtools_private.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_qmltest.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_qmltest_private.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_quick.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_quick_private.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_quickparticles_private.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_quickwidgets.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_quickwidgets_private.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_script.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_script_private.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_scripttools.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_scripttools_private.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_sensors.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_sensors_private.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_serialbus.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_serialbus_private.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_serialport.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_serialport_private.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_sql.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_sql_private.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_svg.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_svg_private.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_testlib.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_testlib_private.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_uiplugin.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_uitools.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_uitools_private.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_webchannel.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_webchannel_private.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_websockets.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_websockets_private.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_widgets.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_widgets_private.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_winextras.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_winextras_private.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_xml.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_xml_private.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_xmlpatterns.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_xmlpatterns_private.pri \
		D:/QT3/5.6/mingw49_32/mkspecs/features/qt_functions.prf \
		D:/QT3/5.6/mingw49_32/mkspecs/features/qt_config.prf \
		D:/QT3/5.6/mingw49_32/mkspecs/features/win32/qt_config.prf \
		D:/QT3/5.6/mingw49_32/mkspecs/win32-g++/qmake.conf \
		D:/QT3/5.6/mingw49_32/mkspecs/features/spec_post.prf \
		.qmake.stash \
		D:/QT3/5.6/mingw49_32/mkspecs/features/exclusive_builds.prf \
		D:/QT3/5.6/mingw49_32/mkspecs/features/default_pre.prf \
		D:/QT3/5.6/mingw49_32/mkspecs/features/win32/default_pre.prf \
		D:/QT3/5.6/mingw49_32/mkspecs/features/resolve_config.prf \
		D:/QT3/5.6/mingw49_32/mkspecs/features/exclusive_builds_post.prf \
		D:/QT3/5.6/mingw49_32/mkspecs/features/default_post.prf \
		D:/QT3/5.6/mingw49_32/mkspecs/features/win32/rtti.prf \
		D:/QT3/5.6/mingw49_32/mkspecs/features/precompile_header.prf \
		D:/QT3/5.6/mingw49_32/mkspecs/features/warn_on.prf \
		D:/QT3/5.6/mingw49_32/mkspecs/features/qt.prf \
		D:/QT3/5.6/mingw49_32/mkspecs/features/resources.prf \
		D:/QT3/5.6/mingw49_32/mkspecs/features/moc.prf \
		D:/QT3/5.6/mingw49_32/mkspecs/features/win32/opengl.prf \
		D:/QT3/5.6/mingw49_32/mkspecs/features/uic.prf \
		D:/QT3/5.6/mingw49_32/mkspecs/features/file_copies.prf \
		D:/QT3/5.6/mingw49_32/mkspecs/features/win32/windows.prf \
		D:/QT3/5.6/mingw49_32/mkspecs/features/testcase_targets.prf \
		D:/QT3/5.6/mingw49_32/mkspecs/features/exceptions.prf \
		D:/QT3/5.6/mingw49_32/mkspecs/features/yacc.prf \
		D:/QT3/5.6/mingw49_32/mkspecs/features/lex.prf \
		Volleyball.pro \
		D:/QT3/5.6/mingw49_32/lib/qtmain.prl \
		D:/QT3/5.6/mingw49_32/lib/Qt5Widgets.prl \
		D:/QT3/5.6/mingw49_32/lib/Qt5Multimedia.prl \
		D:/QT3/5.6/mingw49_32/lib/Qt5Gui.prl \
		D:/QT3/5.6/mingw49_32/lib/Qt5Sql.prl \
		D:/QT3/5.6/mingw49_32/lib/Qt5Network.prl \
		D:/QT3/5.6/mingw49_32/lib/Qt5Core.prl
	$(QMAKE) -spec win32-g++ -o Makefile Volleyball.pro
D:/QT3/5.6/mingw49_32/mkspecs/features/spec_pre.prf:
D:/QT3/5.6/mingw49_32/mkspecs/qdevice.pri:
D:/QT3/5.6/mingw49_32/mkspecs/features/device_config.prf:
D:/QT3/5.6/mingw49_32/mkspecs/common/angle.conf:
D:/QT3/5.6/mingw49_32/mkspecs/qconfig.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_3dcore.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_3dcore_private.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_3dinput.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_3dinput_private.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_3dlogic.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_3dlogic_private.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_3dquick.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_3dquick_private.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_3dquickinput.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_3dquickinput_private.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_3dquickrender.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_3dquickrender_private.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_3drender.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_3drender_private.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_axbase.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_axbase_private.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_axcontainer.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_axcontainer_private.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_axserver.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_axserver_private.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_bluetooth.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_bluetooth_private.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_bootstrap_private.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_clucene_private.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_concurrent.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_concurrent_private.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_core.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_core_private.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_dbus.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_dbus_private.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_designer.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_designer_private.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_designercomponents_private.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_gui.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_gui_private.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_help.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_help_private.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_labscontrols_private.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_labstemplates_private.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_location.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_location_private.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_multimedia.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_multimedia_private.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_multimediawidgets.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_multimediawidgets_private.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_network.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_network_private.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_nfc.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_nfc_private.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_opengl.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_opengl_private.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_openglextensions.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_openglextensions_private.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_platformsupport_private.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_positioning.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_positioning_private.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_printsupport.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_printsupport_private.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_qml.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_qml_private.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_qmldevtools_private.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_qmltest.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_qmltest_private.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_quick.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_quick_private.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_quickparticles_private.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_quickwidgets.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_quickwidgets_private.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_script.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_script_private.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_scripttools.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_scripttools_private.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_sensors.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_sensors_private.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_serialbus.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_serialbus_private.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_serialport.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_serialport_private.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_sql.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_sql_private.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_svg.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_svg_private.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_testlib.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_testlib_private.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_uiplugin.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_uitools.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_uitools_private.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_webchannel.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_webchannel_private.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_websockets.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_websockets_private.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_widgets.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_widgets_private.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_winextras.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_winextras_private.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_xml.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_xml_private.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_xmlpatterns.pri:
D:/QT3/5.6/mingw49_32/mkspecs/modules/qt_lib_xmlpatterns_private.pri:
D:/QT3/5.6/mingw49_32/mkspecs/features/qt_functions.prf:
D:/QT3/5.6/mingw49_32/mkspecs/features/qt_config.prf:
D:/QT3/5.6/mingw49_32/mkspecs/features/win32/qt_config.prf:
D:/QT3/5.6/mingw49_32/mkspecs/win32-g++/qmake.conf:
D:/QT3/5.6/mingw49_32/mkspecs/features/spec_post.prf:
.qmake.stash:
D:/QT3/5.6/mingw49_32/mkspecs/features/exclusive_builds.prf:
D:/QT3/5.6/mingw49_32/mkspecs/features/default_pre.prf:
D:/QT3/5.6/mingw49_32/mkspecs/features/win32/default_pre.prf:
D:/QT3/5.6/mingw49_32/mkspecs/features/resolve_config.prf:
D:/QT3/5.6/mingw49_32/mkspecs/features/exclusive_builds_post.prf:
D:/QT3/5.6/mingw49_32/mkspecs/features/default_post.prf:
D:/QT3/5.6/mingw49_32/mkspecs/features/win32/rtti.prf:
D:/QT3/5.6/mingw49_32/mkspecs/features/precompile_header.prf:
D:/QT3/5.6/mingw49_32/mkspecs/features/warn_on.prf:
D:/QT3/5.6/mingw49_32/mkspecs/features/qt.prf:
D:/QT3/5.6/mingw49_32/mkspecs/features/resources.prf:
D:/QT3/5.6/mingw49_32/mkspecs/features/moc.prf:
D:/QT3/5.6/mingw49_32/mkspecs/features/win32/opengl.prf:
D:/QT3/5.6/mingw49_32/mkspecs/features/uic.prf:
D:/QT3/5.6/mingw49_32/mkspecs/features/file_copies.prf:
D:/QT3/5.6/mingw49_32/mkspecs/features/win32/windows.prf:
D:/QT3/5.6/mingw49_32/mkspecs/features/testcase_targets.prf:
D:/QT3/5.6/mingw49_32/mkspecs/features/exceptions.prf:
D:/QT3/5.6/mingw49_32/mkspecs/features/yacc.prf:
D:/QT3/5.6/mingw49_32/mkspecs/features/lex.prf:
Volleyball.pro:
D:/QT3/5.6/mingw49_32/lib/qtmain.prl:
D:/QT3/5.6/mingw49_32/lib/Qt5Widgets.prl:
D:/QT3/5.6/mingw49_32/lib/Qt5Multimedia.prl:
D:/QT3/5.6/mingw49_32/lib/Qt5Gui.prl:
D:/QT3/5.6/mingw49_32/lib/Qt5Sql.prl:
D:/QT3/5.6/mingw49_32/lib/Qt5Network.prl:
D:/QT3/5.6/mingw49_32/lib/Qt5Core.prl:
qmake: FORCE
	@$(QMAKE) -spec win32-g++ -o Makefile Volleyball.pro

qmake_all: FORCE

make_first: release-make_first debug-make_first  FORCE
all: release-all debug-all  FORCE
clean: release-clean debug-clean  FORCE
distclean: release-distclean debug-distclean  FORCE
	-$(DEL_FILE) Makefile
	-$(DEL_FILE) .qmake.stash

release-mocclean:
	$(MAKE) -f $(MAKEFILE).Release mocclean
debug-mocclean:
	$(MAKE) -f $(MAKEFILE).Debug mocclean
mocclean: release-mocclean debug-mocclean

release-mocables:
	$(MAKE) -f $(MAKEFILE).Release mocables
debug-mocables:
	$(MAKE) -f $(MAKEFILE).Debug mocables
mocables: release-mocables debug-mocables

check: first

benchmark: first
FORCE:

$(MAKEFILE).Release: Makefile
$(MAKEFILE).Debug: Makefile

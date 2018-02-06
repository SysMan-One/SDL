#############################################################################
# Makefile for building: SDL
# Generated by qmake (3.1) (Qt 5.9.1)
# Project:  SDL.pro
# Template: app
# Command: /opt/Qt/5.9.1/gcc_64/bin/qmake -o Makefile SDL.pro -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug
#############################################################################

MAKEFILE      = Makefile

first: debug
install: debug-install
uninstall: debug-uninstall
QMAKE         = /opt/Qt/5.9.1/gcc_64/bin/qmake
DEL_FILE      = rm -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p
COPY          = cp -f
COPY_FILE     = cp -f
COPY_DIR      = cp -f -R
INSTALL_FILE  = install -m 644 -p
INSTALL_PROGRAM = install -m 755 -p
INSTALL_DIR   = cp -f -R
QINSTALL      = /opt/Qt/5.9.1/gcc_64/bin/qmake -install qinstall
QINSTALL_PROGRAM = /opt/Qt/5.9.1/gcc_64/bin/qmake -install qinstall -exe
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
TAR           = tar -cf
COMPRESS      = gzip -9f
DISTNAME      = SDL1.0.0
DISTDIR = /media/sf_Works/SDL/.tmp/SDL1.0.0
SUBTARGETS    =  \
		debug \
		release


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

Makefile: SDL.pro /opt/Qt/5.9.1/gcc_64/mkspecs/linux-g++/qmake.conf /opt/Qt/5.9.1/gcc_64/mkspecs/features/spec_pre.prf \
		/opt/Qt/5.9.1/gcc_64/mkspecs/common/unix.conf \
		/opt/Qt/5.9.1/gcc_64/mkspecs/common/linux.conf \
		/opt/Qt/5.9.1/gcc_64/mkspecs/common/sanitize.conf \
		/opt/Qt/5.9.1/gcc_64/mkspecs/common/gcc-base.conf \
		/opt/Qt/5.9.1/gcc_64/mkspecs/common/gcc-base-unix.conf \
		/opt/Qt/5.9.1/gcc_64/mkspecs/common/g++-base.conf \
		/opt/Qt/5.9.1/gcc_64/mkspecs/common/g++-unix.conf \
		/opt/Qt/5.9.1/gcc_64/mkspecs/qconfig.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3danimation.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3danimation_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3dcore.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3dcore_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3dextras.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3dextras_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3dinput.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3dinput_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3dlogic.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3dlogic_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3dquick.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3dquick_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3dquickanimation.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3dquickanimation_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3dquickextras.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3dquickextras_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3dquickinput.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3dquickinput_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3dquickrender.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3dquickrender_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3dquickscene2d.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3dquickscene2d_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3drender.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3drender_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_accessibility_support_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_bluetooth.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_bluetooth_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_bootstrap_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_charts.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_charts_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_concurrent.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_concurrent_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_core.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_core_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_dbus.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_dbus_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_designer.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_designer_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_designercomponents_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_devicediscovery_support_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_egl_support_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_eglfsdeviceintegration_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_eventdispatcher_support_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_fb_support_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_fontdatabase_support_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_gamepad.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_gamepad_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_glx_support_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_gui.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_gui_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_help.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_help_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_input_support_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_kms_support_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_location.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_location_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_multimedia.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_multimedia_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_multimediawidgets.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_multimediawidgets_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_network.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_network_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_networkauth.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_networkauth_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_nfc.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_nfc_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_opengl.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_opengl_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_openglextensions.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_openglextensions_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_packetprotocol_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_platformcompositor_support_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_positioning.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_positioning_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_printsupport.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_printsupport_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_purchasing.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_purchasing_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_qml.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_qml_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_qmldebug_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_qmldevtools_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_qmltest.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_qmltest_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_quick.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_quick_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_quickcontrols2.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_quickcontrols2_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_quickparticles_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_quicktemplates2_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_quickwidgets.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_quickwidgets_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_scxml.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_scxml_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_sensors.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_sensors_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_serialbus.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_serialbus_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_serialport.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_serialport_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_service_support_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_sql.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_sql_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_svg.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_svg_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_testlib.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_testlib_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_theme_support_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_uiplugin.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_uitools.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_uitools_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_webchannel.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_webchannel_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_websockets.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_websockets_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_webview.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_webview_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_widgets.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_widgets_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_x11extras.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_x11extras_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_xcb_qpa_lib_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_xml.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_xml_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_xmlpatterns.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_xmlpatterns_private.pri \
		/opt/Qt/5.9.1/gcc_64/mkspecs/features/qt_functions.prf \
		/opt/Qt/5.9.1/gcc_64/mkspecs/features/qt_config.prf \
		/opt/Qt/5.9.1/gcc_64/mkspecs/linux-g++/qmake.conf \
		/opt/Qt/5.9.1/gcc_64/mkspecs/features/spec_post.prf \
		.qmake.stash \
		/opt/Qt/5.9.1/gcc_64/mkspecs/features/exclusive_builds.prf \
		/opt/Qt/5.9.1/gcc_64/mkspecs/features/toolchain.prf \
		/opt/Qt/5.9.1/gcc_64/mkspecs/features/default_pre.prf \
		/opt/Qt/5.9.1/gcc_64/mkspecs/features/resolve_config.prf \
		/opt/Qt/5.9.1/gcc_64/mkspecs/features/exclusive_builds_post.prf \
		/opt/Qt/5.9.1/gcc_64/mkspecs/features/default_post.prf \
		/opt/Qt/5.9.1/gcc_64/mkspecs/features/warn_off.prf \
		/opt/Qt/5.9.1/gcc_64/mkspecs/features/qml_debug.prf \
		/opt/Qt/5.9.1/gcc_64/mkspecs/features/qmake_use.prf \
		/opt/Qt/5.9.1/gcc_64/mkspecs/features/file_copies.prf \
		/opt/Qt/5.9.1/gcc_64/mkspecs/features/testcase_targets.prf \
		/opt/Qt/5.9.1/gcc_64/mkspecs/features/exceptions.prf \
		/opt/Qt/5.9.1/gcc_64/mkspecs/features/yacc.prf \
		/opt/Qt/5.9.1/gcc_64/mkspecs/features/lex.prf \
		SDL.pro
	$(QMAKE) -o Makefile SDL.pro -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug
/opt/Qt/5.9.1/gcc_64/mkspecs/features/spec_pre.prf:
/opt/Qt/5.9.1/gcc_64/mkspecs/common/unix.conf:
/opt/Qt/5.9.1/gcc_64/mkspecs/common/linux.conf:
/opt/Qt/5.9.1/gcc_64/mkspecs/common/sanitize.conf:
/opt/Qt/5.9.1/gcc_64/mkspecs/common/gcc-base.conf:
/opt/Qt/5.9.1/gcc_64/mkspecs/common/gcc-base-unix.conf:
/opt/Qt/5.9.1/gcc_64/mkspecs/common/g++-base.conf:
/opt/Qt/5.9.1/gcc_64/mkspecs/common/g++-unix.conf:
/opt/Qt/5.9.1/gcc_64/mkspecs/qconfig.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3danimation.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3danimation_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3dcore.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3dcore_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3dextras.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3dextras_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3dinput.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3dinput_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3dlogic.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3dlogic_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3dquick.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3dquick_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3dquickanimation.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3dquickanimation_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3dquickextras.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3dquickextras_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3dquickinput.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3dquickinput_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3dquickrender.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3dquickrender_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3dquickscene2d.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3dquickscene2d_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3drender.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3drender_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_accessibility_support_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_bluetooth.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_bluetooth_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_bootstrap_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_charts.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_charts_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_concurrent.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_concurrent_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_core.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_core_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_dbus.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_dbus_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_designer.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_designer_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_designercomponents_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_devicediscovery_support_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_egl_support_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_eglfsdeviceintegration_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_eventdispatcher_support_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_fb_support_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_fontdatabase_support_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_gamepad.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_gamepad_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_glx_support_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_gui.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_gui_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_help.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_help_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_input_support_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_kms_support_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_location.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_location_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_multimedia.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_multimedia_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_multimediawidgets.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_multimediawidgets_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_network.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_network_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_networkauth.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_networkauth_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_nfc.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_nfc_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_opengl.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_opengl_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_openglextensions.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_openglextensions_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_packetprotocol_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_platformcompositor_support_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_positioning.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_positioning_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_printsupport.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_printsupport_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_purchasing.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_purchasing_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_qml.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_qml_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_qmldebug_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_qmldevtools_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_qmltest.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_qmltest_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_quick.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_quick_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_quickcontrols2.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_quickcontrols2_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_quickparticles_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_quicktemplates2_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_quickwidgets.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_quickwidgets_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_scxml.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_scxml_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_sensors.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_sensors_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_serialbus.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_serialbus_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_serialport.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_serialport_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_service_support_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_sql.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_sql_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_svg.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_svg_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_testlib.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_testlib_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_theme_support_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_uiplugin.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_uitools.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_uitools_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_webchannel.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_webchannel_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_websockets.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_websockets_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_webview.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_webview_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_widgets.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_widgets_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_x11extras.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_x11extras_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_xcb_qpa_lib_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_xml.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_xml_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_xmlpatterns.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_xmlpatterns_private.pri:
/opt/Qt/5.9.1/gcc_64/mkspecs/features/qt_functions.prf:
/opt/Qt/5.9.1/gcc_64/mkspecs/features/qt_config.prf:
/opt/Qt/5.9.1/gcc_64/mkspecs/linux-g++/qmake.conf:
/opt/Qt/5.9.1/gcc_64/mkspecs/features/spec_post.prf:
.qmake.stash:
/opt/Qt/5.9.1/gcc_64/mkspecs/features/exclusive_builds.prf:
/opt/Qt/5.9.1/gcc_64/mkspecs/features/toolchain.prf:
/opt/Qt/5.9.1/gcc_64/mkspecs/features/default_pre.prf:
/opt/Qt/5.9.1/gcc_64/mkspecs/features/resolve_config.prf:
/opt/Qt/5.9.1/gcc_64/mkspecs/features/exclusive_builds_post.prf:
/opt/Qt/5.9.1/gcc_64/mkspecs/features/default_post.prf:
/opt/Qt/5.9.1/gcc_64/mkspecs/features/warn_off.prf:
/opt/Qt/5.9.1/gcc_64/mkspecs/features/qml_debug.prf:
/opt/Qt/5.9.1/gcc_64/mkspecs/features/qmake_use.prf:
/opt/Qt/5.9.1/gcc_64/mkspecs/features/file_copies.prf:
/opt/Qt/5.9.1/gcc_64/mkspecs/features/testcase_targets.prf:
/opt/Qt/5.9.1/gcc_64/mkspecs/features/exceptions.prf:
/opt/Qt/5.9.1/gcc_64/mkspecs/features/yacc.prf:
/opt/Qt/5.9.1/gcc_64/mkspecs/features/lex.prf:
SDL.pro:
qmake: FORCE
	@$(QMAKE) -o Makefile SDL.pro -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug

qmake_all: FORCE

make_first: debug-make_first release-make_first  FORCE
all: debug-all release-all  FORCE
clean: debug-clean release-clean  FORCE
distclean: debug-distclean release-distclean  FORCE
	-$(DEL_FILE) Makefile
	-$(DEL_FILE) .qmake.stash

check: first

benchmark: first
FORCE:

dist: distdir FORCE
	(cd `dirname $(DISTDIR)` && $(TAR) $(DISTNAME).tar $(DISTNAME) && $(COMPRESS) $(DISTNAME).tar) && $(MOVE) `dirname $(DISTDIR)`/$(DISTNAME).tar.gz . && $(DEL_FILE) -r $(DISTDIR)

distdir: debug-distdir release-distdir FORCE
	@test -d $(DISTDIR) || mkdir -p $(DISTDIR)
	$(COPY_FILE) --parents /opt/Qt/5.9.1/gcc_64/mkspecs/features/spec_pre.prf /opt/Qt/5.9.1/gcc_64/mkspecs/common/unix.conf /opt/Qt/5.9.1/gcc_64/mkspecs/common/linux.conf /opt/Qt/5.9.1/gcc_64/mkspecs/common/sanitize.conf /opt/Qt/5.9.1/gcc_64/mkspecs/common/gcc-base.conf /opt/Qt/5.9.1/gcc_64/mkspecs/common/gcc-base-unix.conf /opt/Qt/5.9.1/gcc_64/mkspecs/common/g++-base.conf /opt/Qt/5.9.1/gcc_64/mkspecs/common/g++-unix.conf /opt/Qt/5.9.1/gcc_64/mkspecs/qconfig.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3danimation.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3danimation_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3dcore.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3dcore_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3dextras.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3dextras_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3dinput.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3dinput_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3dlogic.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3dlogic_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3dquick.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3dquick_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3dquickanimation.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3dquickanimation_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3dquickextras.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3dquickextras_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3dquickinput.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3dquickinput_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3dquickrender.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3dquickrender_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3dquickscene2d.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3dquickscene2d_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3drender.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_3drender_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_accessibility_support_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_bluetooth.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_bluetooth_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_bootstrap_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_charts.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_charts_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_concurrent.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_concurrent_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_core.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_core_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_dbus.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_dbus_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_designer.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_designer_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_designercomponents_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_devicediscovery_support_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_egl_support_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_eglfsdeviceintegration_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_eventdispatcher_support_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_fb_support_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_fontdatabase_support_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_gamepad.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_gamepad_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_glx_support_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_gui.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_gui_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_help.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_help_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_input_support_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_kms_support_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_location.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_location_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_multimedia.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_multimedia_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_multimediawidgets.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_multimediawidgets_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_network.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_network_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_networkauth.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_networkauth_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_nfc.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_nfc_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_opengl.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_opengl_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_openglextensions.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_openglextensions_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_packetprotocol_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_platformcompositor_support_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_positioning.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_positioning_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_printsupport.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_printsupport_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_purchasing.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_purchasing_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_qml.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_qml_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_qmldebug_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_qmldevtools_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_qmltest.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_qmltest_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_quick.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_quick_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_quickcontrols2.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_quickcontrols2_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_quickparticles_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_quicktemplates2_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_quickwidgets.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_quickwidgets_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_scxml.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_scxml_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_sensors.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_sensors_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_serialbus.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_serialbus_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_serialport.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_serialport_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_service_support_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_sql.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_sql_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_svg.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_svg_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_testlib.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_testlib_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_theme_support_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_uiplugin.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_uitools.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_uitools_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_webchannel.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_webchannel_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_websockets.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_websockets_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_webview.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_webview_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_widgets.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_widgets_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_x11extras.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_x11extras_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_xcb_qpa_lib_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_xml.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_xml_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_xmlpatterns.pri /opt/Qt/5.9.1/gcc_64/mkspecs/modules/qt_lib_xmlpatterns_private.pri /opt/Qt/5.9.1/gcc_64/mkspecs/features/qt_functions.prf /opt/Qt/5.9.1/gcc_64/mkspecs/features/qt_config.prf /opt/Qt/5.9.1/gcc_64/mkspecs/linux-g++/qmake.conf /opt/Qt/5.9.1/gcc_64/mkspecs/features/spec_post.prf .qmake.stash /opt/Qt/5.9.1/gcc_64/mkspecs/features/exclusive_builds.prf /opt/Qt/5.9.1/gcc_64/mkspecs/features/toolchain.prf /opt/Qt/5.9.1/gcc_64/mkspecs/features/default_pre.prf /opt/Qt/5.9.1/gcc_64/mkspecs/features/resolve_config.prf /opt/Qt/5.9.1/gcc_64/mkspecs/features/exclusive_builds_post.prf /opt/Qt/5.9.1/gcc_64/mkspecs/features/default_post.prf /opt/Qt/5.9.1/gcc_64/mkspecs/features/warn_off.prf /opt/Qt/5.9.1/gcc_64/mkspecs/features/qml_debug.prf /opt/Qt/5.9.1/gcc_64/mkspecs/features/qmake_use.prf /opt/Qt/5.9.1/gcc_64/mkspecs/features/file_copies.prf /opt/Qt/5.9.1/gcc_64/mkspecs/features/testcase_targets.prf /opt/Qt/5.9.1/gcc_64/mkspecs/features/exceptions.prf /opt/Qt/5.9.1/gcc_64/mkspecs/features/yacc.prf /opt/Qt/5.9.1/gcc_64/mkspecs/features/lex.prf SDL.pro $(DISTDIR)/

debug-distdir: FORCE
	$(MAKE) -e -f $(MAKEFILE).Debug distdir DISTDIR=$(DISTDIR)/

release-distdir: FORCE
	$(MAKE) -e -f $(MAKEFILE).Release distdir DISTDIR=$(DISTDIR)/

$(MAKEFILE).Debug: Makefile
$(MAKEFILE).Release: Makefile

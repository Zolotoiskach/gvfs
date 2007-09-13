#ifndef __G_DBUS_UTILS_H__
#define __G_DBUS_UTILS_H__

#include <glib.h>
#include <dbus/dbus.h>

G_BEGIN_DECLS

/* Only used internally, never on wire */
#define G_DBUS_TYPE_CSTRING 1024

void     _g_dbus_message_iter_append_cstring     (DBusMessageIter            *iter,
						  const char                 *str);
void         _g_dbus_message_append_args_valist      (DBusMessage                *message,
						      int                         first_arg_type,
						      va_list                     var_args);
void         _g_dbus_message_append_args             (DBusMessage                *message,
						      int                         first_arg_type,
						      ...);
void         _g_error_from_dbus                      (DBusError                  *derror,
						      GError                    **error);
char *       _g_dbus_unescape_bus_name               (const char                 *escaped,
						      const char                 *end);
void         _g_dbus_append_escaped_bus_name         (GString                    *string,
						      gboolean                    at_start,
						      const char                 *unescaped);
void         _g_dbus_connection_integrate_with_main  (DBusConnection             *connection);
void         _g_dbus_connection_remove_from_main     (DBusConnection             *connection);

G_END_DECLS


#endif /* __G_DBUS_UTILS_H__ */

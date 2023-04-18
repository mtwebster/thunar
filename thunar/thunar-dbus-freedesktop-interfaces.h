/*
 * This file is generated by gdbus-codegen, do not modify it.
 *
 * The license of this code is the same as for the D-Bus interface description
 * it was derived from. Note that it links to GLib, so must comply with the
 * LGPL linking clauses.
 */

#ifndef __THUNAR_DBUS_FREEDESKTOP_INTERFACES_H__
#define __THUNAR_DBUS_FREEDESKTOP_INTERFACES_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.freedesktop.FileManager1 */

#define THUNAR_TYPE_ORG_FREEDESKTOP_FILE_MANAGER1 (thunar_org_freedesktop_file_manager1_get_type ())
#define THUNAR_ORG_FREEDESKTOP_FILE_MANAGER1(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), THUNAR_TYPE_ORG_FREEDESKTOP_FILE_MANAGER1, ThunarOrgFreedesktopFileManager1))
#define THUNAR_IS_ORG_FREEDESKTOP_FILE_MANAGER1(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), THUNAR_TYPE_ORG_FREEDESKTOP_FILE_MANAGER1))
#define THUNAR_ORG_FREEDESKTOP_FILE_MANAGER1_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), THUNAR_TYPE_ORG_FREEDESKTOP_FILE_MANAGER1, ThunarOrgFreedesktopFileManager1Iface))

struct _ThunarOrgFreedesktopFileManager1;
typedef struct _ThunarOrgFreedesktopFileManager1 ThunarOrgFreedesktopFileManager1;
typedef struct _ThunarOrgFreedesktopFileManager1Iface ThunarOrgFreedesktopFileManager1Iface;

struct _ThunarOrgFreedesktopFileManager1Iface
{
  GTypeInterface parent_iface;

  gboolean (*handle_show_folders) (
    ThunarOrgFreedesktopFileManager1 *object,
    GDBusMethodInvocation *invocation,
    const gchar *const *arg_URIs,
    const gchar *arg_StartupId);

  gboolean (*handle_show_item_properties) (
    ThunarOrgFreedesktopFileManager1 *object,
    GDBusMethodInvocation *invocation,
    const gchar *const *arg_URIs,
    const gchar *arg_StartupId);

  gboolean (*handle_show_items) (
    ThunarOrgFreedesktopFileManager1 *object,
    GDBusMethodInvocation *invocation,
    const gchar *const *arg_URIs,
    const gchar *arg_StartupId);

};

GType thunar_org_freedesktop_file_manager1_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *thunar_org_freedesktop_file_manager1_interface_info (void);
guint thunar_org_freedesktop_file_manager1_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void thunar_org_freedesktop_file_manager1_complete_show_folders (
    ThunarOrgFreedesktopFileManager1 *object,
    GDBusMethodInvocation *invocation);

void thunar_org_freedesktop_file_manager1_complete_show_items (
    ThunarOrgFreedesktopFileManager1 *object,
    GDBusMethodInvocation *invocation);

void thunar_org_freedesktop_file_manager1_complete_show_item_properties (
    ThunarOrgFreedesktopFileManager1 *object,
    GDBusMethodInvocation *invocation);



/* D-Bus method calls: */
void thunar_org_freedesktop_file_manager1_call_show_folders (
    ThunarOrgFreedesktopFileManager1 *proxy,
    const gchar *const *arg_URIs,
    const gchar *arg_StartupId,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean thunar_org_freedesktop_file_manager1_call_show_folders_finish (
    ThunarOrgFreedesktopFileManager1 *proxy,
    GAsyncResult *res,
    GError **error);

gboolean thunar_org_freedesktop_file_manager1_call_show_folders_sync (
    ThunarOrgFreedesktopFileManager1 *proxy,
    const gchar *const *arg_URIs,
    const gchar *arg_StartupId,
    GCancellable *cancellable,
    GError **error);

void thunar_org_freedesktop_file_manager1_call_show_items (
    ThunarOrgFreedesktopFileManager1 *proxy,
    const gchar *const *arg_URIs,
    const gchar *arg_StartupId,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean thunar_org_freedesktop_file_manager1_call_show_items_finish (
    ThunarOrgFreedesktopFileManager1 *proxy,
    GAsyncResult *res,
    GError **error);

gboolean thunar_org_freedesktop_file_manager1_call_show_items_sync (
    ThunarOrgFreedesktopFileManager1 *proxy,
    const gchar *const *arg_URIs,
    const gchar *arg_StartupId,
    GCancellable *cancellable,
    GError **error);

void thunar_org_freedesktop_file_manager1_call_show_item_properties (
    ThunarOrgFreedesktopFileManager1 *proxy,
    const gchar *const *arg_URIs,
    const gchar *arg_StartupId,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean thunar_org_freedesktop_file_manager1_call_show_item_properties_finish (
    ThunarOrgFreedesktopFileManager1 *proxy,
    GAsyncResult *res,
    GError **error);

gboolean thunar_org_freedesktop_file_manager1_call_show_item_properties_sync (
    ThunarOrgFreedesktopFileManager1 *proxy,
    const gchar *const *arg_URIs,
    const gchar *arg_StartupId,
    GCancellable *cancellable,
    GError **error);



/* ---- */

#define THUNAR_TYPE_ORG_FREEDESKTOP_FILE_MANAGER1_PROXY (thunar_org_freedesktop_file_manager1_proxy_get_type ())
#define THUNAR_ORG_FREEDESKTOP_FILE_MANAGER1_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), THUNAR_TYPE_ORG_FREEDESKTOP_FILE_MANAGER1_PROXY, ThunarOrgFreedesktopFileManager1Proxy))
#define THUNAR_ORG_FREEDESKTOP_FILE_MANAGER1_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), THUNAR_TYPE_ORG_FREEDESKTOP_FILE_MANAGER1_PROXY, ThunarOrgFreedesktopFileManager1ProxyClass))
#define THUNAR_ORG_FREEDESKTOP_FILE_MANAGER1_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), THUNAR_TYPE_ORG_FREEDESKTOP_FILE_MANAGER1_PROXY, ThunarOrgFreedesktopFileManager1ProxyClass))
#define THUNAR_IS_ORG_FREEDESKTOP_FILE_MANAGER1_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), THUNAR_TYPE_ORG_FREEDESKTOP_FILE_MANAGER1_PROXY))
#define THUNAR_IS_ORG_FREEDESKTOP_FILE_MANAGER1_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), THUNAR_TYPE_ORG_FREEDESKTOP_FILE_MANAGER1_PROXY))

typedef struct _ThunarOrgFreedesktopFileManager1Proxy ThunarOrgFreedesktopFileManager1Proxy;
typedef struct _ThunarOrgFreedesktopFileManager1ProxyClass ThunarOrgFreedesktopFileManager1ProxyClass;
typedef struct _ThunarOrgFreedesktopFileManager1ProxyPrivate ThunarOrgFreedesktopFileManager1ProxyPrivate;

struct _ThunarOrgFreedesktopFileManager1Proxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  ThunarOrgFreedesktopFileManager1ProxyPrivate *priv;
};

struct _ThunarOrgFreedesktopFileManager1ProxyClass
{
  GDBusProxyClass parent_class;
};

GType thunar_org_freedesktop_file_manager1_proxy_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (ThunarOrgFreedesktopFileManager1Proxy, g_object_unref)
#endif

void thunar_org_freedesktop_file_manager1_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
ThunarOrgFreedesktopFileManager1 *thunar_org_freedesktop_file_manager1_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
ThunarOrgFreedesktopFileManager1 *thunar_org_freedesktop_file_manager1_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void thunar_org_freedesktop_file_manager1_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
ThunarOrgFreedesktopFileManager1 *thunar_org_freedesktop_file_manager1_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
ThunarOrgFreedesktopFileManager1 *thunar_org_freedesktop_file_manager1_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define THUNAR_TYPE_ORG_FREEDESKTOP_FILE_MANAGER1_SKELETON (thunar_org_freedesktop_file_manager1_skeleton_get_type ())
#define THUNAR_ORG_FREEDESKTOP_FILE_MANAGER1_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), THUNAR_TYPE_ORG_FREEDESKTOP_FILE_MANAGER1_SKELETON, ThunarOrgFreedesktopFileManager1Skeleton))
#define THUNAR_ORG_FREEDESKTOP_FILE_MANAGER1_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), THUNAR_TYPE_ORG_FREEDESKTOP_FILE_MANAGER1_SKELETON, ThunarOrgFreedesktopFileManager1SkeletonClass))
#define THUNAR_ORG_FREEDESKTOP_FILE_MANAGER1_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), THUNAR_TYPE_ORG_FREEDESKTOP_FILE_MANAGER1_SKELETON, ThunarOrgFreedesktopFileManager1SkeletonClass))
#define THUNAR_IS_ORG_FREEDESKTOP_FILE_MANAGER1_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), THUNAR_TYPE_ORG_FREEDESKTOP_FILE_MANAGER1_SKELETON))
#define THUNAR_IS_ORG_FREEDESKTOP_FILE_MANAGER1_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), THUNAR_TYPE_ORG_FREEDESKTOP_FILE_MANAGER1_SKELETON))

typedef struct _ThunarOrgFreedesktopFileManager1Skeleton ThunarOrgFreedesktopFileManager1Skeleton;
typedef struct _ThunarOrgFreedesktopFileManager1SkeletonClass ThunarOrgFreedesktopFileManager1SkeletonClass;
typedef struct _ThunarOrgFreedesktopFileManager1SkeletonPrivate ThunarOrgFreedesktopFileManager1SkeletonPrivate;

struct _ThunarOrgFreedesktopFileManager1Skeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  ThunarOrgFreedesktopFileManager1SkeletonPrivate *priv;
};

struct _ThunarOrgFreedesktopFileManager1SkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType thunar_org_freedesktop_file_manager1_skeleton_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (ThunarOrgFreedesktopFileManager1Skeleton, g_object_unref)
#endif

ThunarOrgFreedesktopFileManager1 *thunar_org_freedesktop_file_manager1_skeleton_new (void);


G_END_DECLS

#endif /* __THUNAR_DBUS_FREEDESKTOP_INTERFACES_H__ */

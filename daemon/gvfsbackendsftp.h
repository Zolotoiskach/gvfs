#ifndef __G_VFS_BACKEND_SFTP_H__
#define __G_VFS_BACKEND_SFTP_H__

#include <gvfsbackend.h>
#include <gmountspec.h>

G_BEGIN_DECLS

#define G_VFS_TYPE_BACKEND_SFTP         (g_vfs_backend_sftp_get_type ())
#define G_VFS_BACKEND_SFTP(o)           (G_TYPE_CHECK_INSTANCE_CAST ((o), G_VFS_TYPE_BACKEND_SFTP, GVfsBackendSftp))
#define G_VFS_BACKEND_SFTP_CLASS(k)     (G_TYPE_CHECK_CLASS_CAST((k), G_VFS_TYPE_BACKEND_SFTP, GVfsBackendSftpClass))
#define G_VFS_IS_BACKEND_SFTP(o)        (G_TYPE_CHECK_INSTANCE_TYPE ((o), G_VFS_TYPE_BACKEND_SFTP))
#define G_VFS_IS_BACKEND_SFTP_CLASS(k)  (G_TYPE_CHECK_CLASS_TYPE ((k), G_VFS_TYPE_BACKEND_SFTP))
#define G_VFS_BACKEND_SFTP_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), G_VFS_TYPE_BACKEND_SFTP, GVfsBackendSftpClass))

typedef struct _GVfsBackendSftp        GVfsBackendSftp;
typedef struct _GVfsBackendSftpClass   GVfsBackendSftpClass;

struct _GVfsBackendSftpClass
{
  GVfsBackendClass parent_class;
};

GType g_vfs_backend_sftp_get_type (void) G_GNUC_CONST;

G_END_DECLS

#endif /* __G_VFS_BACKEND_SFTP_H__ */

/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "nfs_prot.h"
#include <stdio.h>
#include <stdlib.h>
#include <rpc/pmap_clnt.h>
#include <string.h>
#include <memory.h>
#include <sys/socket.h>
#include <netinet/in.h>

#ifndef SIG_PF
#define SIG_PF void(*)(int)
#endif

static void
nfs_program_3(struct svc_req *rqstp, register SVCXPRT *transp)
{
	union {
		GETATTR3args nfs3_getattr_3_arg;
		SETATTR3args nfs3_setattr_3_arg;
		LOOKUP3args nfs3_lookup_3_arg;
		ACCESS3args nfs3_access_3_arg;
		READLINK3args nfs3_readlink_3_arg;
		READ3args nfs3_read_3_arg;
		WRITE3args nfs3_write_3_arg;
		CREATE3args nfs3_create_3_arg;
		MKDIR3args nfs3_mkdir_3_arg;
		SYMLINK3args nfs3_symlink_3_arg;
		MKNOD3args nfs3_mknod_3_arg;
		REMOVE3args nfs3_remove_3_arg;
		RMDIR3args nfs3_rmdir_3_arg;
		RENAME3args nfs3_rename_3_arg;
		LINK3args nfs3_link_3_arg;
		READDIR3args nfs3_readdir_3_arg;
		READDIRPLUS3args nfs3_readdirplus_3_arg;
		FSSTAT3args nfs3_fsstat_3_arg;
		FSINFO3args nfs3_fsinfo_3_arg;
		PATHCONF3args nfs3_pathconf_3_arg;
		COMMIT3args nfs3_commit_3_arg;
	} argument;
	char *result;
	xdrproc_t _xdr_argument, _xdr_result;
	char *(*local)(char *, struct svc_req *);

	switch (rqstp->rq_proc) {
	case NFS3_NULL:
		_xdr_argument = (xdrproc_t) xdr_void;
		_xdr_result = (xdrproc_t) xdr_void;
		local = (char *(*)(char *, struct svc_req *)) nfs3_null_3_svc;
		break;

	case NFS3_GETATTR:
		_xdr_argument = (xdrproc_t) xdr_GETATTR3args;
		_xdr_result = (xdrproc_t) xdr_GETATTR3res;
		local = (char *(*)(char *, struct svc_req *)) nfs3_getattr_3_svc;
		break;

	case NFS3_SETATTR:
		_xdr_argument = (xdrproc_t) xdr_SETATTR3args;
		_xdr_result = (xdrproc_t) xdr_SETATTR3res;
		local = (char *(*)(char *, struct svc_req *)) nfs3_setattr_3_svc;
		break;

	case NFS3_LOOKUP:
		_xdr_argument = (xdrproc_t) xdr_LOOKUP3args;
		_xdr_result = (xdrproc_t) xdr_LOOKUP3res;
		local = (char *(*)(char *, struct svc_req *)) nfs3_lookup_3_svc;
		break;

	case NFS3_ACCESS:
		_xdr_argument = (xdrproc_t) xdr_ACCESS3args;
		_xdr_result = (xdrproc_t) xdr_ACCESS3res;
		local = (char *(*)(char *, struct svc_req *)) nfs3_access_3_svc;
		break;

	case NFS3_READLINK:
		_xdr_argument = (xdrproc_t) xdr_READLINK3args;
		_xdr_result = (xdrproc_t) xdr_READLINK3res;
		local = (char *(*)(char *, struct svc_req *)) nfs3_readlink_3_svc;
		break;

	case NFS3_READ:
		_xdr_argument = (xdrproc_t) xdr_READ3args;
		_xdr_result = (xdrproc_t) xdr_READ3res;
		local = (char *(*)(char *, struct svc_req *)) nfs3_read_3_svc;
		break;

	case NFS3_WRITE:
		_xdr_argument = (xdrproc_t) xdr_WRITE3args;
		_xdr_result = (xdrproc_t) xdr_WRITE3res;
		local = (char *(*)(char *, struct svc_req *)) nfs3_write_3_svc;
		break;

	case NFS3_CREATE:
		_xdr_argument = (xdrproc_t) xdr_CREATE3args;
		_xdr_result = (xdrproc_t) xdr_CREATE3res;
		local = (char *(*)(char *, struct svc_req *)) nfs3_create_3_svc;
		break;

	case NFS3_MKDIR:
		_xdr_argument = (xdrproc_t) xdr_MKDIR3args;
		_xdr_result = (xdrproc_t) xdr_MKDIR3res;
		local = (char *(*)(char *, struct svc_req *)) nfs3_mkdir_3_svc;
		break;

	case NFS3_SYMLINK:
		_xdr_argument = (xdrproc_t) xdr_SYMLINK3args;
		_xdr_result = (xdrproc_t) xdr_SYMLINK3res;
		local = (char *(*)(char *, struct svc_req *)) nfs3_symlink_3_svc;
		break;

	case NFS3_MKNOD:
		_xdr_argument = (xdrproc_t) xdr_MKNOD3args;
		_xdr_result = (xdrproc_t) xdr_MKNOD3res;
		local = (char *(*)(char *, struct svc_req *)) nfs3_mknod_3_svc;
		break;

	case NFS3_REMOVE:
		_xdr_argument = (xdrproc_t) xdr_REMOVE3args;
		_xdr_result = (xdrproc_t) xdr_REMOVE3res;
		local = (char *(*)(char *, struct svc_req *)) nfs3_remove_3_svc;
		break;

	case NFS3_RMDIR:
		_xdr_argument = (xdrproc_t) xdr_RMDIR3args;
		_xdr_result = (xdrproc_t) xdr_RMDIR3res;
		local = (char *(*)(char *, struct svc_req *)) nfs3_rmdir_3_svc;
		break;

	case NFS3_RENAME:
		_xdr_argument = (xdrproc_t) xdr_RENAME3args;
		_xdr_result = (xdrproc_t) xdr_RENAME3res;
		local = (char *(*)(char *, struct svc_req *)) nfs3_rename_3_svc;
		break;

	case NFS3_LINK:
		_xdr_argument = (xdrproc_t) xdr_LINK3args;
		_xdr_result = (xdrproc_t) xdr_LINK3res;
		local = (char *(*)(char *, struct svc_req *)) nfs3_link_3_svc;
		break;

	case NFS3_READDIR:
		_xdr_argument = (xdrproc_t) xdr_READDIR3args;
		_xdr_result = (xdrproc_t) xdr_READDIR3res;
		local = (char *(*)(char *, struct svc_req *)) nfs3_readdir_3_svc;
		break;

	case NFS3_READDIRPLUS:
		_xdr_argument = (xdrproc_t) xdr_READDIRPLUS3args;
		_xdr_result = (xdrproc_t) xdr_READDIRPLUS3res;
		local = (char *(*)(char *, struct svc_req *)) nfs3_readdirplus_3_svc;
		break;

	case NFS3_FSSTAT:
		_xdr_argument = (xdrproc_t) xdr_FSSTAT3args;
		_xdr_result = (xdrproc_t) xdr_FSSTAT3res;
		local = (char *(*)(char *, struct svc_req *)) nfs3_fsstat_3_svc;
		break;

	case NFS3_FSINFO:
		_xdr_argument = (xdrproc_t) xdr_FSINFO3args;
		_xdr_result = (xdrproc_t) xdr_FSINFO3res;
		local = (char *(*)(char *, struct svc_req *)) nfs3_fsinfo_3_svc;
		break;

	case NFS3_PATHCONF:
		_xdr_argument = (xdrproc_t) xdr_PATHCONF3args;
		_xdr_result = (xdrproc_t) xdr_PATHCONF3res;
		local = (char *(*)(char *, struct svc_req *)) nfs3_pathconf_3_svc;
		break;

	case NFS3_COMMIT:
		_xdr_argument = (xdrproc_t) xdr_COMMIT3args;
		_xdr_result = (xdrproc_t) xdr_COMMIT3res;
		local = (char *(*)(char *, struct svc_req *)) nfs3_commit_3_svc;
		break;

	default:
		svcerr_noproc (transp);
		return;
	}
	memset ((char *)&argument, 0, sizeof (argument));
	if (!svc_getargs (transp, (xdrproc_t) _xdr_argument, (caddr_t) &argument)) {
		svcerr_decode (transp);
		return;
	}
	result = (*local)((char *)&argument, rqstp);
	if (result != NULL && !svc_sendreply(transp, (xdrproc_t) _xdr_result, result)) {
		svcerr_systemerr (transp);
	}
	if (!svc_freeargs (transp, (xdrproc_t) _xdr_argument, (caddr_t) &argument)) {
		fprintf (stderr, "%s", "unable to free arguments");
		exit (1);
	}
	return;
}

static void
nfsacl_program_3(struct svc_req *rqstp, register SVCXPRT *transp)
{
	union {
		GETACL3args nfsacl3_getacl_3_arg;
		SETACL3args nfsacl3_setacl_3_arg;
	} argument;
	char *result;
	xdrproc_t _xdr_argument, _xdr_result;
	char *(*local)(char *, struct svc_req *);

	switch (rqstp->rq_proc) {
	case NFSACL3_NULL:
		_xdr_argument = (xdrproc_t) xdr_void;
		_xdr_result = (xdrproc_t) xdr_void;
		local = (char *(*)(char *, struct svc_req *)) nfsacl3_null_3_svc;
		break;

	case NFSACL3_GETACL:
		_xdr_argument = (xdrproc_t) xdr_GETACL3args;
		_xdr_result = (xdrproc_t) xdr_GETACL3res;
		local = (char *(*)(char *, struct svc_req *)) nfsacl3_getacl_3_svc;
		break;

	case NFSACL3_SETACL:
		_xdr_argument = (xdrproc_t) xdr_SETACL3args;
		_xdr_result = (xdrproc_t) xdr_SETACL3res;
		local = (char *(*)(char *, struct svc_req *)) nfsacl3_setacl_3_svc;
		break;

	default:
		svcerr_noproc (transp);
		return;
	}
	memset ((char *)&argument, 0, sizeof (argument));
	if (!svc_getargs (transp, (xdrproc_t) _xdr_argument, (caddr_t) &argument)) {
		svcerr_decode (transp);
		return;
	}
	result = (*local)((char *)&argument, rqstp);
	if (result != NULL && !svc_sendreply(transp, (xdrproc_t) _xdr_result, result)) {
		svcerr_systemerr (transp);
	}
	if (!svc_freeargs (transp, (xdrproc_t) _xdr_argument, (caddr_t) &argument)) {
		fprintf (stderr, "%s", "unable to free arguments");
		exit (1);
	}
	return;
}

int
main (int argc, char **argv)
{
	register SVCXPRT *transp;

	pmap_unset (NFS_PROGRAM, NFS_V3);
	pmap_unset (NFSACL_PROGRAM, NFSACL_V3);

	transp = svcudp_create(RPC_ANYSOCK);
	if (transp == NULL) {
		fprintf (stderr, "%s", "cannot create udp service.");
		exit(1);
	}
	if (!svc_register(transp, NFS_PROGRAM, NFS_V3, nfs_program_3, IPPROTO_UDP)) {
		fprintf (stderr, "%s", "unable to register (NFS_PROGRAM, NFS_V3, udp).");
		exit(1);
	}
	if (!svc_register(transp, NFSACL_PROGRAM, NFSACL_V3, nfsacl_program_3, IPPROTO_UDP)) {
		fprintf (stderr, "%s", "unable to register (NFSACL_PROGRAM, NFSACL_V3, udp).");
		exit(1);
	}

	transp = svctcp_create(RPC_ANYSOCK, 0, 0);
	if (transp == NULL) {
		fprintf (stderr, "%s", "cannot create tcp service.");
		exit(1);
	}
	if (!svc_register(transp, NFS_PROGRAM, NFS_V3, nfs_program_3, IPPROTO_TCP)) {
		fprintf (stderr, "%s", "unable to register (NFS_PROGRAM, NFS_V3, tcp).");
		exit(1);
	}
	if (!svc_register(transp, NFSACL_PROGRAM, NFSACL_V3, nfsacl_program_3, IPPROTO_TCP)) {
		fprintf (stderr, "%s", "unable to register (NFSACL_PROGRAM, NFSACL_V3, tcp).");
		exit(1);
	}

	svc_run ();
	fprintf (stderr, "%s", "svc_run returned");
	exit (1);
	/* NOTREACHED */
}

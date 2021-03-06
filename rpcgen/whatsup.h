/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _WHATSUP_H_RPCGEN
#define _WHATSUP_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct record {
	int first_num;
	int second_num;
};
typedef struct record record;

struct message {
	char *destination;
	char *origin;
	char *message;
};
typedef struct message message;

struct contacts {
	char *persons;
	char *groups;
};
typedef struct contacts contacts;

struct user {
	char *name;
	char *ip;
};
typedef struct user user;
#define MAXSTRLEN 255

#define WHATSUPPROG 0x20000003
#define WHATSUPVERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define SEND_MSG 1
extern  int * send_msg_1(message *, CLIENT *);
extern  int * send_msg_1_svc(message *, struct svc_req *);
#define LIST_MSGS 2
extern  int * list_msgs_1(message *, CLIENT *);
extern  int * list_msgs_1_svc(message *, struct svc_req *);
#define LIST_CONTACTS 3
extern  contacts * list_contacts_1(user *, CLIENT *);
extern  contacts * list_contacts_1_svc(user *, struct svc_req *);
#define LIST_GROUPS 4
extern  contacts * list_groups_1(user *, CLIENT *);
extern  contacts * list_groups_1_svc(user *, struct svc_req *);
extern int whatsupprog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define SEND_MSG 1
extern  int * send_msg_1();
extern  int * send_msg_1_svc();
#define LIST_MSGS 2
extern  int * list_msgs_1();
extern  int * list_msgs_1_svc();
#define LIST_CONTACTS 3
extern  contacts * list_contacts_1();
extern  contacts * list_contacts_1_svc();
#define LIST_GROUPS 4
extern  contacts * list_groups_1();
extern  contacts * list_groups_1_svc();
extern int whatsupprog_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_record (XDR *, record*);
extern  bool_t xdr_message (XDR *, message*);
extern  bool_t xdr_contacts (XDR *, contacts*);
extern  bool_t xdr_user (XDR *, user*);

#else /* K&R C */
extern bool_t xdr_record ();
extern bool_t xdr_message ();
extern bool_t xdr_contacts ();
extern bool_t xdr_user ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_WHATSUP_H_RPCGEN */

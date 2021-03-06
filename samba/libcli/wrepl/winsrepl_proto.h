#ifndef __LIBCLI_WREPL_WINSREPL_PROTO_H__
#define __LIBCLI_WREPL_WINSREPL_PROTO_H__

#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2) PRINTF_ATTRIBUTE(a1, a2)
/* This file was automatically generated by mkproto.pl. DO NOT EDIT */

#ifndef _PUBLIC_
#define _PUBLIC_
#endif


/* The following definitions come from libcli/wrepl/winsrepl.c  */

struct wrepl_socket *wrepl_socket_init(TALLOC_CTX *mem_ctx, 
				       struct event_context *event_ctx);
struct wrepl_socket *wrepl_socket_merge(TALLOC_CTX *mem_ctx, 
				        struct event_context *event_ctx,
					struct socket_context *sock,
					struct packet_context *pack);
struct composite_context *wrepl_connect_send(struct wrepl_socket *wrepl_socket,
					     const char *our_ip, const char *peer_ip);
NTSTATUS wrepl_connect_recv(struct composite_context *result);
NTSTATUS wrepl_connect(struct wrepl_socket *wrepl_socket, const char *our_ip, const char *peer_ip);
struct wrepl_request *wrepl_request_send(struct wrepl_socket *wrepl_socket,
					 struct wrepl_packet *packet,
					 struct wrepl_send_ctrl *ctrl);
NTSTATUS wrepl_request_recv(struct wrepl_request *req,
			    TALLOC_CTX *mem_ctx,
			    struct wrepl_packet **packet);
NTSTATUS wrepl_request(struct wrepl_socket *wrepl_socket,
		       TALLOC_CTX *mem_ctx,
		       struct wrepl_packet *req_packet,
		       struct wrepl_packet **reply_packet);
struct wrepl_request *wrepl_associate_send(struct wrepl_socket *wrepl_socket,
					   struct wrepl_associate *io);
NTSTATUS wrepl_associate_recv(struct wrepl_request *req,
			      struct wrepl_associate *io);
NTSTATUS wrepl_associate(struct wrepl_socket *wrepl_socket,
			 struct wrepl_associate *io);
struct wrepl_request *wrepl_associate_stop_send(struct wrepl_socket *wrepl_socket,
						struct wrepl_associate_stop *io);
NTSTATUS wrepl_associate_stop_recv(struct wrepl_request *req,
				   struct wrepl_associate_stop *io);
NTSTATUS wrepl_associate_stop(struct wrepl_socket *wrepl_socket,
			      struct wrepl_associate_stop *io);
struct wrepl_request *wrepl_pull_table_send(struct wrepl_socket *wrepl_socket,
					    struct wrepl_pull_table *io);
NTSTATUS wrepl_pull_table_recv(struct wrepl_request *req,
			       TALLOC_CTX *mem_ctx,
			       struct wrepl_pull_table *io);
NTSTATUS wrepl_pull_table(struct wrepl_socket *wrepl_socket,
			  TALLOC_CTX *mem_ctx,
			  struct wrepl_pull_table *io);
struct wrepl_request *wrepl_pull_names_send(struct wrepl_socket *wrepl_socket,
					    struct wrepl_pull_names *io);
NTSTATUS wrepl_pull_names_recv(struct wrepl_request *req,
			       TALLOC_CTX *mem_ctx,
			       struct wrepl_pull_names *io);
NTSTATUS wrepl_pull_names(struct wrepl_socket *wrepl_socket,
			  TALLOC_CTX *mem_ctx,
			  struct wrepl_pull_names *io);
#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2)

#endif /* __LIBCLI_WREPL_WINSREPL_PROTO_H__ */


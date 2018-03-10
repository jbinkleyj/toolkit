#ifndef TOOLKIT_NET_IPV4_SOCKET_H
#define TOOLKIT_NET_IPV4_SOCKET_H

#include <toolkit/net/bsd/Socket.h>
#include <toolkit/net/ISocket.h>

TOOLKIT_NS_BEGIN
namespace net { namespace ipv4
{
	struct Endpoint;

	class TCPSocket :
		protected bsd::Socket,
		public virtual io::IPollable,
		public virtual ISocket
	{
	public:
		TCPSocket(int flags = ISocket::DefaultFlags): bsd::Socket(AF_INET, SOCK_STREAM, 0)
		{ SetNonBlocking(flags & ISocket::NonBlocking); }

		void Connect(const Endpoint & ep);
	};

}}
TOOLKIT_NS_END

#endif

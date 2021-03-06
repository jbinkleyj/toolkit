#ifndef TOOLKIT_NET_ISOCKET_H
#define TOOLKIT_NET_ISOCKET_H

namespace TOOLKIT_NS { namespace net
{

	struct ISocket
	{
		static constexpr int DefaultBacklogDepth = 128;

		static constexpr int DefaultFlags = 0;
		static constexpr int NonBlocking = 1;

		virtual ~ISocket() = default;
	};

}}


#endif


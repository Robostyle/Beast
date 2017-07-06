//
// Copyright (c) 2013-2017 Vinnie Falco (vinnie dot falco at gmail dot com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//

#ifndef BEAST_HTTP_IMPL_FILE_BODY_WIN32_IPP
#define BEAST_HTTP_IMPL_FILE_BODY_WIN32_IPP

#if BEAST_USE_WIN32_FILE

#include <beast/http/serializer.hpp>
#include <boost/asio/basic_stream_socket.hpp>

namespace beast {
namespace http {

template<
    class Protocol,
    bool isRequest, class Body, class Fields, class Decorator>
void
write_some(
    boost::asio::basic_stream_socket<Protocol>& socket,
    serializer<isRequest, Body, Fields, Decorator>& sr,
    error_code& ec)
{

}

#if 0
template<
    class Protocol,
    bool isRequest, class Fields, class ChunkDecorator>
void
write(
    boost::asio::basic_stream_socket<Protocol>& socket,
    serializer<
        isRequest,
        basic_file_body<file_win32>,
        Fields,
        ChunkDecorator>& sr,
    error_code& ec)
{
#if 0
    sr.split(true);
    write_header(socket, sr, ec);
    if(ec)
        return;
    BOOL const bSuccess = ::TransmitFile(
        socket.native_handle(),
        sr.get().body.native_handle(),
        0,
        0,
        nullptr,
        nullptr,
        0);
    if(! bSuccess)
    {
        DWORD const dwError = ::GetLastError();
        ec = {static_cast<int>(dwError),
            system_category()};
        return;
    }
    if(sr.need_close())
        ec = error::end_of_stream;
#endif
}
#endif

} // http
} // beast

#endif

#endif

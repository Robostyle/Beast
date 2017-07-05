//
// Copyright (c) 2013-2017 Vinnie Falco (vinnie dot falco at gmail dot com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//

#ifndef BEAST_HTTP_FILE_BODY_HPP
#define BEAST_HTTP_FILE_BODY_HPP

#include <boost/config.hpp>
#include <beast/http/file_body_stdc.hpp>

namespace beast {
namespace http {

/** An HTTP message body represented by an open file.

    Depending on the platform, this type will be an alias for
    a platform-specific implementation or a generic one.

    Meets the requirements of @b Body.
*/
using file_body = file_body_stdc;

} // http
} // beast

#endif
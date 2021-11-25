#ifndef SSL_H
#define SSL_H

#include "net.h"

enum {
    SSL_TLS,
    SSL_GMTLS,
    SSL_RFC8998, /* TLSv1.3 + GM ciphersuite */
};

extern int ssl_data_index;

SSL_CTX *ssl_init(int, bool);

status ssl_connect(connection *, char *);
status ssl_close(connection *);
status ssl_read(connection *, size_t *);
status ssl_write(connection *, char *, size_t, size_t *);
size_t ssl_readable(connection *);

#endif /* SSL_H */

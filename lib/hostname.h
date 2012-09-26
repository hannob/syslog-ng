#include "syslog-ng.h"
#include "gsockaddr.h"

#include <sys/types.h>

void reset_cached_hostname(void);
void getlonghostname(gchar *buf, gsize buflen);

gchar *get_dnsname();

void set_custom_domain(const gchar *new_custom_domain);
const gchar *get_custom_domain();

const char *get_cached_longhostname();
const char *get_cached_shorthostname();
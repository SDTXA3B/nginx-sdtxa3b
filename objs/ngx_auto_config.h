#define NGX_CONFIGURE " --with-cc=gcc --with-cc-opt=-O0 --with-debug --prefix= --conf-path=conf/nginx.conf --pid-path=logs/nginx.pid --http-log-path=logs/access.log --error-log-path=logs/error.log --sbin-path=nginx.exe --http-client-body-temp-path=temp/client_body_temp --http-proxy-temp-path=temp/proxy_temp --http-fastcgi-temp-path=temp/fastcgi_temp --http-scgi-temp-path=temp/scgi_temp --http-uwsgi-temp-path=temp/uwsgi_temp --without-http_rewrite_module --without-http_gzip_module --with-select_module --add-module=./src/mytest"

#ifndef NGX_DEBUG
#define NGX_DEBUG  1
#endif


#ifndef NGX_COMPILER
#define NGX_COMPILER  "gcc 6.3.0 (MinGW.org GCC-6.3.0-1) "
#endif


#ifndef NGX_HAVE_INET6
#define NGX_HAVE_INET6  1
#endif


#ifndef NGX_HAVE_IOCP
#define NGX_HAVE_IOCP  1
#endif


#ifndef NGX_HAVE_NONALIGNED
#define NGX_HAVE_NONALIGNED  1
#endif


#ifndef NGX_CPU_CACHE_LINE
#define NGX_CPU_CACHE_LINE  32
#endif


#ifndef NGX_HAVE_SELECT
#define NGX_HAVE_SELECT  1
#endif


#ifndef NGX_HAVE_POLL
#define NGX_HAVE_POLL  1
#endif


#ifndef NGX_HTTP_CACHE
#define NGX_HTTP_CACHE  1
#endif


#ifndef NGX_HTTP_SSI
#define NGX_HTTP_SSI  1
#endif


#ifndef NGX_CRYPT
#define NGX_CRYPT  1
#endif


#ifndef NGX_HTTP_X_FORWARDED_FOR
#define NGX_HTTP_X_FORWARDED_FOR  1
#endif


#ifndef NGX_HTTP_X_FORWARDED_FOR
#define NGX_HTTP_X_FORWARDED_FOR  1
#endif


#ifndef NGX_HTTP_UPSTREAM_ZONE
#define NGX_HTTP_UPSTREAM_ZONE  1
#endif


#ifndef NGX_CONF_PREFIX
#define NGX_CONF_PREFIX  "conf/"
#endif


#ifndef NGX_SBIN_PATH
#define NGX_SBIN_PATH  "nginx.exe"
#endif


#ifndef NGX_CONF_PATH
#define NGX_CONF_PATH  "conf/nginx.conf"
#endif


#ifndef NGX_PID_PATH
#define NGX_PID_PATH  "logs/nginx.pid"
#endif


#ifndef NGX_LOCK_PATH
#define NGX_LOCK_PATH  "logs/nginx.lock"
#endif


#ifndef NGX_ERROR_LOG_PATH
#define NGX_ERROR_LOG_PATH  "logs/error.log"
#endif


#ifndef NGX_HTTP_LOG_PATH
#define NGX_HTTP_LOG_PATH  "logs/access.log"
#endif


#ifndef NGX_HTTP_CLIENT_TEMP_PATH
#define NGX_HTTP_CLIENT_TEMP_PATH  "temp/client_body_temp"
#endif


#ifndef NGX_HTTP_PROXY_TEMP_PATH
#define NGX_HTTP_PROXY_TEMP_PATH  "temp/proxy_temp"
#endif


#ifndef NGX_HTTP_FASTCGI_TEMP_PATH
#define NGX_HTTP_FASTCGI_TEMP_PATH  "temp/fastcgi_temp"
#endif


#ifndef NGX_HTTP_UWSGI_TEMP_PATH
#define NGX_HTTP_UWSGI_TEMP_PATH  "temp/uwsgi_temp"
#endif


#ifndef NGX_HTTP_SCGI_TEMP_PATH
#define NGX_HTTP_SCGI_TEMP_PATH  "temp/scgi_temp"
#endif


#ifndef NGX_SUPPRESS_WARN
#define NGX_SUPPRESS_WARN  1
#endif


#ifndef NGX_SMP
#define NGX_SMP  1
#endif


#ifndef NGX_USER
#define NGX_USER  ""
#endif


#ifndef NGX_GROUP
#define NGX_GROUP  ""
#endif


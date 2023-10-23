
/* Code to register embedded modules for meta path based loading if any. */

#include <Python.h>

#include "nuitka/constants_blob.h"

#include "nuitka/unfreezing.h"

/* Type bool */
#ifndef __cplusplus
#include "stdbool.h"
#endif

#if 0 > 0
static unsigned char *bytecode_data[0];
#else
static unsigned char **bytecode_data = NULL;
#endif

/* Table for lookup to find compiled or bytecode modules included in this
 * binary or module, or put along this binary as extension modules. We do
 * our own loading for each of these.
 */
extern PyObject *modulecode___main__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_api_commit_get(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bson(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bson$binary(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bson$code(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bson$codec_options(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bson$dbref(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bson$decimal128(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bson$errors(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bson$int64(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bson$max_key(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bson$min_key(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bson$objectid(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bson$py3compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bson$raw_bson(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bson$regex(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bson$son(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bson$timestamp(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bson$tz_util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_certifi(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_certifi$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$big5freq(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$big5prober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$chardistribution(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$charsetgroupprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$charsetprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$codingstatemachine(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$cp949prober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$enums(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$escprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$escsm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$eucjpprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$euckrfreq(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$euckrprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$euctwfreq(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$euctwprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$gb2312freq(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$gb2312prober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$hebrewprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$jisfreq(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$jpcntx(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$langbulgarianmodel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$langcyrillicmodel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$langgreekmodel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$langhebrewmodel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$langthaimodel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$langturkishmodel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$latin1prober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$mbcharsetprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$mbcsgroupprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$mbcssm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$sbcharsetprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$sbcsgroupprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$sjisprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$universaldetector(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$utf8prober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_fake_useragent(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_fake_useragent$errors(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_fake_useragent$fake(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_fake_useragent$log(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_fake_useragent$settings(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_fake_useragent$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_google(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$idnadata(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$intranges(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$package_data(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$uts46data(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymongo(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymongo$aggregation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymongo$auth(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymongo$auth_aws(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymongo$bulk(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymongo$change_stream(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymongo$client_options(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymongo$client_session(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymongo$collation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymongo$collection(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymongo$command_cursor(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymongo$common(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymongo$compression_support(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymongo$cursor(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymongo$cursor_manager(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymongo$daemon(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymongo$database(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymongo$driver_info(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymongo$encryption(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymongo$encryption_options(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymongo$errors(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymongo$helpers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymongo$ismaster(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymongo$max_staleness_selectors(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymongo$message(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymongo$mongo_client(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymongo$mongo_replica_set_client(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymongo$monitor(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymongo$monitoring(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymongo$monotonic(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymongo$network(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymongo$ocsp_cache(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymongo$ocsp_support(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymongo$operations(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymongo$periodic_executor(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymongo$pool(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymongo$pyopenssl_context(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymongo$read_concern(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymongo$read_preferences(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymongo$response(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymongo$results(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymongo$saslprep(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymongo$server(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymongo$server_description(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymongo$server_selectors(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymongo$server_type(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymongo$settings(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymongo$socket_checker(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymongo$son_manipulator(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymongo$srv_resolver(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymongo$ssl_context(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymongo$ssl_match_hostname(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymongo$ssl_support(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymongo$thread_util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymongo$topology(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymongo$topology_description(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymongo$uri_parser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pymongo$write_concern(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$__version__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$_internal_utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$adapters(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$api(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$auth(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$certs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$cookies(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$hooks(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$models(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$packages(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$sessions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$status_codes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$structures(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$_collections(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$_version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$connection(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$connectionpool(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$contrib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$contrib$_appengine_environ(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$contrib$appengine(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$contrib$pyopenssl(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$contrib$socks(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$fields(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$filepost(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$packages(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$packages$backports(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$packages$backports$makefile(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$packages$six(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$packages$ssl_match_hostname(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$packages$ssl_match_hostname$_implementation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$poolmanager(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$request(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$response(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$connection(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$queue(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$request(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$response(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$retry(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$ssl_(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$timeout(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$url(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$wait(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_wincertstore(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);

static struct Nuitka_MetaPathBasedLoaderEntry meta_path_loader_entries[] = {
    {"__main__", modulecode___main__, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"api_commit_get", modulecode_api_commit_get, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"bson", modulecode_bson, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"bson.binary", modulecode_bson$binary, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"bson.code", modulecode_bson$code, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"bson.codec_options", modulecode_bson$codec_options, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"bson.dbref", modulecode_bson$dbref, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"bson.decimal128", modulecode_bson$decimal128, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"bson.errors", modulecode_bson$errors, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"bson.int64", modulecode_bson$int64, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"bson.max_key", modulecode_bson$max_key, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"bson.min_key", modulecode_bson$min_key, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"bson.objectid", modulecode_bson$objectid, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"bson.py3compat", modulecode_bson$py3compat, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"bson.raw_bson", modulecode_bson$raw_bson, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"bson.regex", modulecode_bson$regex, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"bson.son", modulecode_bson$son, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"bson.timestamp", modulecode_bson$timestamp, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"bson.tz_util", modulecode_bson$tz_util, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"certifi", modulecode_certifi, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"certifi.core", modulecode_certifi$core, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet", modulecode_chardet, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"chardet.big5freq", modulecode_chardet$big5freq, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.big5prober", modulecode_chardet$big5prober, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.chardistribution", modulecode_chardet$chardistribution, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.charsetgroupprober", modulecode_chardet$charsetgroupprober, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.charsetprober", modulecode_chardet$charsetprober, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.codingstatemachine", modulecode_chardet$codingstatemachine, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.compat", modulecode_chardet$compat, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.cp949prober", modulecode_chardet$cp949prober, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.enums", modulecode_chardet$enums, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.escprober", modulecode_chardet$escprober, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.escsm", modulecode_chardet$escsm, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.eucjpprober", modulecode_chardet$eucjpprober, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.euckrfreq", modulecode_chardet$euckrfreq, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.euckrprober", modulecode_chardet$euckrprober, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.euctwfreq", modulecode_chardet$euctwfreq, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.euctwprober", modulecode_chardet$euctwprober, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.gb2312freq", modulecode_chardet$gb2312freq, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.gb2312prober", modulecode_chardet$gb2312prober, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.hebrewprober", modulecode_chardet$hebrewprober, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.jisfreq", modulecode_chardet$jisfreq, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.jpcntx", modulecode_chardet$jpcntx, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.langbulgarianmodel", modulecode_chardet$langbulgarianmodel, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.langcyrillicmodel", modulecode_chardet$langcyrillicmodel, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.langgreekmodel", modulecode_chardet$langgreekmodel, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.langhebrewmodel", modulecode_chardet$langhebrewmodel, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.langthaimodel", modulecode_chardet$langthaimodel, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.langturkishmodel", modulecode_chardet$langturkishmodel, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.latin1prober", modulecode_chardet$latin1prober, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.mbcharsetprober", modulecode_chardet$mbcharsetprober, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.mbcsgroupprober", modulecode_chardet$mbcsgroupprober, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.mbcssm", modulecode_chardet$mbcssm, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.sbcharsetprober", modulecode_chardet$sbcharsetprober, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.sbcsgroupprober", modulecode_chardet$sbcsgroupprober, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.sjisprober", modulecode_chardet$sjisprober, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.universaldetector", modulecode_chardet$universaldetector, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.utf8prober", modulecode_chardet$utf8prober, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.version", modulecode_chardet$version, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"fake_useragent", modulecode_fake_useragent, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"fake_useragent.errors", modulecode_fake_useragent$errors, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"fake_useragent.fake", modulecode_fake_useragent$fake, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"fake_useragent.log", modulecode_fake_useragent$log, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"fake_useragent.settings", modulecode_fake_useragent$settings, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"fake_useragent.utils", modulecode_fake_useragent$utils, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"google", modulecode_google, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"idna", modulecode_idna, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"idna.core", modulecode_idna$core, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"idna.idnadata", modulecode_idna$idnadata, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"idna.intranges", modulecode_idna$intranges, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"idna.package_data", modulecode_idna$package_data, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"idna.uts46data", modulecode_idna$uts46data, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pymongo", modulecode_pymongo, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"pymongo.aggregation", modulecode_pymongo$aggregation, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pymongo.auth", modulecode_pymongo$auth, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pymongo.auth_aws", modulecode_pymongo$auth_aws, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pymongo.bulk", modulecode_pymongo$bulk, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pymongo.change_stream", modulecode_pymongo$change_stream, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pymongo.client_options", modulecode_pymongo$client_options, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pymongo.client_session", modulecode_pymongo$client_session, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pymongo.collation", modulecode_pymongo$collation, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pymongo.collection", modulecode_pymongo$collection, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pymongo.command_cursor", modulecode_pymongo$command_cursor, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pymongo.common", modulecode_pymongo$common, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pymongo.compression_support", modulecode_pymongo$compression_support, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pymongo.cursor", modulecode_pymongo$cursor, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pymongo.cursor_manager", modulecode_pymongo$cursor_manager, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pymongo.daemon", modulecode_pymongo$daemon, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pymongo.database", modulecode_pymongo$database, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pymongo.driver_info", modulecode_pymongo$driver_info, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pymongo.encryption", modulecode_pymongo$encryption, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pymongo.encryption_options", modulecode_pymongo$encryption_options, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pymongo.errors", modulecode_pymongo$errors, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pymongo.helpers", modulecode_pymongo$helpers, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pymongo.ismaster", modulecode_pymongo$ismaster, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pymongo.max_staleness_selectors", modulecode_pymongo$max_staleness_selectors, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pymongo.message", modulecode_pymongo$message, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pymongo.mongo_client", modulecode_pymongo$mongo_client, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pymongo.mongo_replica_set_client", modulecode_pymongo$mongo_replica_set_client, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pymongo.monitor", modulecode_pymongo$monitor, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pymongo.monitoring", modulecode_pymongo$monitoring, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pymongo.monotonic", modulecode_pymongo$monotonic, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pymongo.network", modulecode_pymongo$network, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pymongo.ocsp_cache", modulecode_pymongo$ocsp_cache, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pymongo.ocsp_support", modulecode_pymongo$ocsp_support, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pymongo.operations", modulecode_pymongo$operations, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pymongo.periodic_executor", modulecode_pymongo$periodic_executor, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pymongo.pool", modulecode_pymongo$pool, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pymongo.pyopenssl_context", modulecode_pymongo$pyopenssl_context, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pymongo.read_concern", modulecode_pymongo$read_concern, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pymongo.read_preferences", modulecode_pymongo$read_preferences, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pymongo.response", modulecode_pymongo$response, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pymongo.results", modulecode_pymongo$results, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pymongo.saslprep", modulecode_pymongo$saslprep, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pymongo.server", modulecode_pymongo$server, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pymongo.server_description", modulecode_pymongo$server_description, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pymongo.server_selectors", modulecode_pymongo$server_selectors, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pymongo.server_type", modulecode_pymongo$server_type, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pymongo.settings", modulecode_pymongo$settings, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pymongo.socket_checker", modulecode_pymongo$socket_checker, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pymongo.son_manipulator", modulecode_pymongo$son_manipulator, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pymongo.srv_resolver", modulecode_pymongo$srv_resolver, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pymongo.ssl_context", modulecode_pymongo$ssl_context, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pymongo.ssl_match_hostname", modulecode_pymongo$ssl_match_hostname, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pymongo.ssl_support", modulecode_pymongo$ssl_support, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pymongo.thread_util", modulecode_pymongo$thread_util, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pymongo.topology", modulecode_pymongo$topology, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pymongo.topology_description", modulecode_pymongo$topology_description, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pymongo.uri_parser", modulecode_pymongo$uri_parser, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pymongo.write_concern", modulecode_pymongo$write_concern, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests", modulecode_requests, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"requests.__version__", modulecode_requests$__version__, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests._internal_utils", modulecode_requests$_internal_utils, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.adapters", modulecode_requests$adapters, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.api", modulecode_requests$api, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.auth", modulecode_requests$auth, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.certs", modulecode_requests$certs, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.compat", modulecode_requests$compat, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.cookies", modulecode_requests$cookies, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.exceptions", modulecode_requests$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.hooks", modulecode_requests$hooks, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.models", modulecode_requests$models, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.packages", modulecode_requests$packages, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.sessions", modulecode_requests$sessions, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.status_codes", modulecode_requests$status_codes, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.structures", modulecode_requests$structures, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.utils", modulecode_requests$utils, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3", modulecode_urllib3, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"urllib3._collections", modulecode_urllib3$_collections, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3._version", modulecode_urllib3$_version, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.connection", modulecode_urllib3$connection, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.connectionpool", modulecode_urllib3$connectionpool, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.contrib", modulecode_urllib3$contrib, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"urllib3.contrib._appengine_environ", modulecode_urllib3$contrib$_appengine_environ, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.contrib.appengine", modulecode_urllib3$contrib$appengine, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.contrib.pyopenssl", modulecode_urllib3$contrib$pyopenssl, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.contrib.socks", modulecode_urllib3$contrib$socks, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.exceptions", modulecode_urllib3$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.fields", modulecode_urllib3$fields, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.filepost", modulecode_urllib3$filepost, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.packages", modulecode_urllib3$packages, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"urllib3.packages.backports", modulecode_urllib3$packages$backports, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"urllib3.packages.backports.makefile", modulecode_urllib3$packages$backports$makefile, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.packages.six", modulecode_urllib3$packages$six, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.packages.ssl_match_hostname", modulecode_urllib3$packages$ssl_match_hostname, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"urllib3.packages.ssl_match_hostname._implementation", modulecode_urllib3$packages$ssl_match_hostname$_implementation, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.poolmanager", modulecode_urllib3$poolmanager, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.request", modulecode_urllib3$request, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.response", modulecode_urllib3$response, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.util", modulecode_urllib3$util, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"urllib3.util.connection", modulecode_urllib3$util$connection, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.util.queue", modulecode_urllib3$util$queue, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.util.request", modulecode_urllib3$util$request, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.util.response", modulecode_urllib3$util$response, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.util.retry", modulecode_urllib3$util$retry, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.util.ssl_", modulecode_urllib3$util$ssl_, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.util.timeout", modulecode_urllib3$util$timeout, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.util.url", modulecode_urllib3$util$url, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.util.wait", modulecode_urllib3$util$wait, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"wincertstore", modulecode_wincertstore, 0, 0, NUITKA_TRANSLATED_FLAG},
    {NULL, NULL, 0, 0, 0}
};

static void _loadBytesCodesBlob()
{
    static bool init_done = false;

    if (init_done == false) {
        loadConstantsBlob((PyObject **)bytecode_data, ".bytecode");

        init_done = true;
    }
}


void setupMetaPathBasedLoader(void) {
    static bool init_done = false;
    if (init_done == false) {
        _loadBytesCodesBlob();
        registerMetaPathBasedUnfreezer(meta_path_loader_entries, bytecode_data);

        init_done = true;
    }


}

// This provides the frozen (compiled bytecode) files that are included if
// any.

// These modules should be loaded as bytecode. They may e.g. have to be loadable
// during "Py_Initialize" already, or for irrelevance, they are only included
// in this un-optimized form. These are not compiled by Nuitka, and therefore
// are not accelerated at all, merely bundled with the binary or module, so
// that CPython library can start out finding them.

struct frozen_desc {
    char const *name;
    int index;
    int size;
};

static struct frozen_desc _frozen_modules[] = {

    {NULL, 0, 0}
};


void copyFrozenModulesTo(struct _frozen *destination) {
    _loadBytesCodesBlob();

    struct frozen_desc *current = _frozen_modules;

    for (;;) {
        destination->name = (char *)current->name;
        destination->code = bytecode_data[current->index];
        destination->size = current->size;

        if (destination->name == NULL) break;

        current += 1;
        destination += 1;
    };
}


